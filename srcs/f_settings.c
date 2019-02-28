/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_settings.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcordeno <lcordeno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 09:17:24 by lcordeno          #+#    #+#             */
/*   Updated: 2019/02/23 18:02:58 by lcordeno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

void	set_env_mandelbrot(t_env *env)
{
	env->w = 1024;
	env->h = 960;
	env->x1 = -2.3;
	env->x2 = 0.9;
	env->y1 = -1.5;
	env->y2 = 1.5;
	env->zm_edit = 1;
	env->it_m_edit = 1;
	env->dark_mode = 0;
	env->bckgd_defaut = 0xFFFFFF;
	env->color_mode = 0;
	env->zoom = 320;
	env->it_m = 28;
	env->thr.len = 96;
	env->thr.i = 0;
	env->x = 0;
	env->f_select = 2;
}

void	set_env_julia(t_env *env)
{
	env->w = 1050;
	env->h = 1190;
	env->x1 = -1.5;
	env->x2 = 1.5;
	env->y1 = -1.7;
	env->y2 = 1.7;
	env->c_r = -0.835;
	env->c_i = -0.2321;
	env->zm_edit = 1;
	env->it_m_edit = 1;
	env->edit_off = 0;
	env->dark_mode = 0;
	env->bckgd_defaut = 0xFFFFFF;
	env->color_mode = 0;
	env->zoom = 350;
	env->it_m = 30;
	env->thr.len = 119;
	env->thr.i = 0;
	env->x = 0;
	env->f_select = 1;
}

void	set_env_electricity(t_env *env)
{
	env->w = 1050;
	env->h = 1190;
	env->x1 = -1.5;
	env->x2 = 1.5;
	env->y1 = -1.7;
	env->y2 = 1.7;
	env->c_r = -0.162;
	env->c_i = 1.04;
	env->zm_edit = 1;
	env->it_m_edit = 1;
	env->edit_off = 0;
	env->dark_mode = 0;
	env->bckgd_defaut = 0xFFFFFF;
	env->color_mode = 0;
	env->zoom = 350;
	env->it_m = 30;
	env->thr.len = 119;
	env->thr.i = 0;
	env->x = 0;
	env->f_select = 4;
}

void	set_env_cross(t_env *env)
{
	env->w = 1050;
	env->h = 1190;
	env->x1 = -1.5;
	env->x2 = 1.5;
	env->y1 = -1.7;
	env->y2 = 1.7;
	env->c_r = -1.476;
	env->c_i = 0;
	env->zm_edit = 1;
	env->it_m_edit = 1;
	env->edit_off = 0;
	env->dark_mode = 0;
	env->bckgd_defaut = 0xFFFFFF;
	env->color_mode = 0;
	env->zoom = 350;
	env->it_m = 30;
	env->thr.len = 119;
	env->thr.i = 0;
	env->x = 0;
	env->f_select = 5;
}

void	set_env_burning_ship(t_env *env)
{
	env->w = 1200;
	env->h = 1050;
	env->x1 = -2.5;
	env->x2 = 1.5;
	env->y1 = -2;
	env->y2 = 1.5;
	env->zm_edit = 1;
	env->it_m_edit = 1;
	env->dark_mode = 0;
	env->bckgd_defaut = 0xFFFFFF;
	env->color_mode = 0;
	env->zoom = 300;
	env->it_m = 22;
	env->thr.len = 105;
	env->thr.i = 0;
	env->x = 0;
	env->f_select = 3;
}
