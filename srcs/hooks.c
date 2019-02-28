/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hooks.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcordeno <lcordeno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 12:26:37 by lcordeno          #+#    #+#             */
/*   Updated: 2019/02/22 12:29:07 by lcordeno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

int		close_w(void *param)
{
	(void)param;
	exit(1);
	return (0);
}

int		key_hook(int key, t_env *env)
{
	if (key == 53)
		exit(0);
	if (key == 2)
		enable_dark_mode(key, env);
	if (key == 8)
		switch_colors(key, env);
	if (key == 15)
		reset_ftl(env);
	if (key >= 123 && key <= 126)
		move(key, env);
	return (0);
}

int		mouse_move(int x, int y, t_env *env)
{
	if (env->edit_off == 0)
	{
		if ((x < env->w && y < env->h) && (x > 0 && y > 0))
		{
			env->c_r = map((double)x, env->w, env->x1, env->x2);
			env->c_i = map((double)y, env->h, env->y1, env->y2);
		}
		else
		{
			env->c_r = -0.835;
			env->c_i = -0.2321;
		}
		ft_redraw(env);
	}
	return (0);
}

int		mouse_press(int button, int x, int y, t_env *env)
{
	x = x * 1;
	y = y * 1;
	if (button == 4)
		zoom_in((double)x, (double)y, env);
	if (button == 5)
		zoom_out((double)x, (double)y, env);
	if (button == 1)
	{
		if (env->edit_off == 0)
			env->edit_off = 1;
		else
			env->edit_off = 0;
	}
	return (0);
}

void	move(int key, t_env *env)
{
	if (key == 126)
		mv_up(env);
	if (key == 125)
		mv_down(env);
	if (key == 123)
		mv_left(env);
	if (key == 124)
		mv_right(env);
}
