/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcordeno <lcordeno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 11:53:27 by lcordeno          #+#    #+#             */
/*   Updated: 2019/02/23 18:03:52 by lcordeno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

void	mv_right(t_env *env)
{
	env->x1 -= (double)10 / env->zoom;
	ft_redraw(env);
}

void	mv_left(t_env *env)
{
	env->x1 += (double)10 / env->zoom;
	ft_redraw(env);
}

void	mv_up(t_env *env)
{
	env->y1 += (double)10 / env->zoom;
	ft_redraw(env);
}

void	mv_down(t_env *env)
{
	env->y1 -= (double)10 / env->zoom;
	ft_redraw(env);
}
