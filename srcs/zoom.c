/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zoom.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcordeno <lcordeno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 16:27:05 by lcordeno          #+#    #+#             */
/*   Updated: 2019/02/23 18:18:49 by lcordeno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

void	zoom_in(double mouse_x, double mouse_y, t_env *env)
{
	env->x1 = (mouse_x / env->zoom + env->x1) - (mouse_x / (env->zoom * 1.2));
	env->y1 = (mouse_y / env->zoom + env->y1) - (mouse_y / (env->zoom * 1.2));
	env->zoom *= 1.2;
	if (env->it_m < 80)
		env->it_m += 1;
	mlx_destroy_image(env->mlx.ptr, env->mlx.img_ptr);
	env->mlx.img_ptr = mlx_new_image(env->mlx.ptr, env->w, env->h);
	env->str = (unsigned int *)mlx_get_data_addr(env->mlx.img_ptr,
	&(env->mlx.bits_per_pixels), &(env->mlx.size_line), &(env->mlx.edian));
	mlx_clear_window(env->mlx.ptr, env->mlx.w_ptr);
	if (env->f_select == 1)
		set_thr_julia(env);
	else if (env->f_select == 2)
		set_thr_mandelbrot(env);
	else if (env->f_select == 3)
		set_thr_burning_ship(env);
	else if (env->f_select == 4)
		set_thr_electricity(env);
	else if (env->f_select == 5)
		set_thr_cross(env);
	mlx_put_image_to_window(env->mlx.ptr, env->mlx.w_ptr,
	env->mlx.img_ptr, 0, 0);
}

void	zoom_out(double mouse_x, double mouse_y, t_env *env)
{
	env->x1 = (mouse_x / env->zoom + env->x1) - (mouse_x / (env->zoom / 1.2));
	env->y1 = (mouse_y / env->zoom + env->y1) - (mouse_y / (env->zoom / 1.2));
	env->zoom /= 1.2;
	if (env->it_m > 20)
		env->it_m -= 1;
	mlx_destroy_image(env->mlx.ptr, env->mlx.img_ptr);
	env->mlx.img_ptr = mlx_new_image(env->mlx.ptr, env->w, env->h);
	env->str = (unsigned int *)mlx_get_data_addr(env->mlx.img_ptr,
	&(env->mlx.bits_per_pixels), &(env->mlx.size_line), &(env->mlx.edian));
	mlx_clear_window(env->mlx.ptr, env->mlx.w_ptr);
	if (env->f_select == 1)
		set_thr_julia(env);
	else if (env->f_select == 2)
		set_thr_mandelbrot(env);
	else if (env->f_select == 3)
		set_thr_burning_ship(env);
	else if (env->f_select == 4)
		set_thr_electricity(env);
	else if (env->f_select == 5)
		set_thr_cross(env);
	mlx_put_image_to_window(env->mlx.ptr, env->mlx.w_ptr,
	env->mlx.img_ptr, 0, 0);
}
