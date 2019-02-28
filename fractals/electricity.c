/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   electricity.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcordeno <lcordeno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 15:14:18 by lcordeno          #+#    #+#             */
/*   Updated: 2019/02/23 17:51:52 by lcordeno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

void		ft_electricity(t_env *env)
{
	env->a = env->x / env->zoom + env->x1;
	env->b_i = env->y / env->zoom + env->y1;
	env->it = 0;
	while (env->a * env->a + env->b_i * env->b_i < 4 &&
			env->it < env->it_m)
	{
		env->temp = env->a;
		env->a = env->a * env->a - env->b_i * env->b_i + env->c_r;
		env->b_i = 2 * env->temp * env->b_i + env->c_i;
		env->it++;
	}
	env->str[env->x + env->y * env->w] = color_mode(env);
}

static void	*thr_electricity(void *env)
{
	t_env *tmp;

	tmp = (t_env*)env;
	while (tmp->x < tmp->w)
	{
		tmp->y = tmp->thr.i;
		while (tmp->y < tmp->thr.i + tmp->thr.len)
		{
			ft_electricity(env);
			tmp->y++;
		}
		tmp->x++;
	}
	return (0);
}

void		set_thr_electricity(t_env *env)
{
	pthread_t	threads[10];
	t_env		tab[10];
	int			i;

	i = 0;
	while (i < 10)
	{
		ft_memcpy((void *)&tab[i], (void *)env, sizeof(t_env));
		tab[i].thr.i = tab[i].thr.len * i;
		if (pthread_create(&threads[i], NULL, thr_electricity, &tab[i]))
		{
			ft_putstr("Thread creation failed - Please try again\n");
			exit(1);
		}
		i++;
	}
	while (i--)
		pthread_join(threads[i], NULL);
}
