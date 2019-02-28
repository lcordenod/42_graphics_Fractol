/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   burning_ship.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcordeno <lcordeno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 10:42:29 by lcordeno          #+#    #+#             */
/*   Updated: 2019/02/23 17:49:51 by lcordeno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

void		ft_burning_ship(t_env *env)
{
	env->c_r = env->x / env->zoom + env->x1;
	env->c_i = env->y / env->zoom + env->y1;
	env->a = 0;
	env->b_i = 0;
	env->it = 0;
	while (env->a * env->a + env->b_i * env->b_i < 4 && env->it < env->it_m)
	{
		env->a = env->a * env->a - env->b_i * env->b_i + env->c_r;
		env->b_i = fabs(2 * env->temp * env->b_i) + env->c_i;
		env->temp = env->a;
		env->it++;
	}
	env->str[env->x + env->y * env->w] = color_mode(env);
}

static void	*thr_burning_ship(void *env)
{
	t_env		*tmp;

	tmp = (t_env*)env;
	while (tmp->x < tmp->w)
	{
		tmp->y = tmp->thr.i;
		while (tmp->y < tmp->thr.i + tmp->thr.len)
		{
			ft_burning_ship(env);
			tmp->y++;
		}
		tmp->x++;
	}
	return (0);
}

void		set_thr_burning_ship(t_env *env)
{
	pthread_t	threads[10];
	t_env		tab[10];
	int			i;

	i = 0;
	while (i < 10)
	{
		ft_memcpy((void *)&tab[i], (void *)env, sizeof(t_env));
		tab[i].thr.i = tab[i].thr.len * i;
		if (pthread_create(&threads[i], NULL, thr_burning_ship, &tab[i]))
		{
			ft_putstr("Thread creation failed - Please try again\n");
			exit(1);
		}
		i++;
	}
	while (i--)
		pthread_join(threads[i], NULL);
}
