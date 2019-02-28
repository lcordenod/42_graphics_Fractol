/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcordeno <lcordeno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 18:42:18 by lcordeno          #+#    #+#             */
/*   Updated: 2019/02/23 18:05:35 by lcordeno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

int		fractal_selector(char *ftl)
{
	int		i;

	i = 0;
	while (ftl[i++])
		ftl[i] = ft_tolower(ftl[i]);
	if (ft_strcmp("julia", ftl) == 0)
		ft_display_julia();
	else if (ft_strcmp("mandelbrot", ftl) == 0)
		ft_display_mandelbrot();
	else if (ft_strcmp("burning_ship", ftl) == 0)
		ft_display_burning_ship();
	else if (ft_strcmp("electricity", ftl) == 0)
		ft_display_electricity();
	else if (ft_strcmp("cross", ftl) == 0)
		ft_display_cross();
	else
	{
		ft_putstr("Please enter a fractal among these:");
		ft_putstr("\njulia\nmandelbrot\nburning_ship\nelectricity\ncross\n");
		return (-1);
	}
	return (0);
}

double	map(double pixel, int b1, double a2, double b2)
{
	double	resize;
	double	new_pixel;

	resize = ((double)b1 - (double)0) / pixel;
	new_pixel = (((double)b2 - (double)a2) * (1 / resize)) - fabs(a2);
	return (new_pixel);
}

void	ft_redraw(t_env *env)
{
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

void	reset_ftl(t_env *env)
{
	if (env->f_select == 1)
		set_env_julia(env);
	else if (env->f_select == 2)
		set_env_mandelbrot(env);
	else if (env->f_select == 3)
		set_env_burning_ship(env);
	else if (env->f_select == 4)
		set_env_electricity(env);
	else if (env->f_select == 5)
		set_env_cross(env);
	ft_redraw(env);
}
