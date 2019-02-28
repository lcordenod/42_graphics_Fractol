/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcordeno <lcordeno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 12:04:27 by lcordeno          #+#    #+#             */
/*   Updated: 2019/02/23 18:28:52 by lcordeno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

int		ft_display_mandelbrot(void)
{
	t_mlx		mlx;
	t_env		env;

	print_tooltip();
	set_env_mandelbrot(&env);
	mlx.ptr = mlx_init();
	mlx.w_ptr = mlx_new_window(mlx.ptr, env.w, env.h, "Fractol - Mandelbrot");
	mlx.img_ptr = mlx_new_image(mlx.ptr, env.w, env.h);
	env.str = (unsigned int*)mlx_get_data_addr(mlx.img_ptr,
			&(mlx.bits_per_pixels), &(mlx.size_line), &(mlx.edian));
	env.mlx = mlx;
	set_thr_mandelbrot(&env);
	mlx_hook(mlx.w_ptr, 4, 0, mouse_press, &env);
	mlx_hook(mlx.w_ptr, 17, 0, close_w, (void *)0);
	mlx_key_hook(mlx.w_ptr, key_hook, &env);
	mlx_put_image_to_window(mlx.ptr, mlx.w_ptr, mlx.img_ptr, 0, 0);
	mlx_loop(mlx.ptr);
	return (0);
}

int		ft_display_julia(void)
{
	t_mlx		mlx;
	t_env		env;

	print_tooltip();
	set_env_julia(&env);
	mlx.ptr = mlx_init();
	mlx.w_ptr = mlx_new_window(mlx.ptr, env.w, env.h, "Fractol - Julia");
	mlx.img_ptr = mlx_new_image(mlx.ptr, env.w, env.h);
	env.str = (unsigned int*)mlx_get_data_addr(mlx.img_ptr,
			&(mlx.bits_per_pixels), &(mlx.size_line), &(mlx.edian));
	env.mlx = mlx;
	set_thr_julia(&env);
	mlx_hook(mlx.w_ptr, 6, 0, mouse_move, &env);
	mlx_hook(mlx.w_ptr, 4, 0, mouse_press, &env);
	mlx_hook(mlx.w_ptr, 17, 0, close_w, (void *)0);
	mlx_key_hook(mlx.w_ptr, key_hook, &env);
	mlx_put_image_to_window(mlx.ptr, mlx.w_ptr, mlx.img_ptr, 0, 0);
	mlx_loop(mlx.ptr);
	return (0);
}

int		ft_display_burning_ship(void)
{
	t_mlx		mlx;
	t_env		env;

	print_tooltip();
	set_env_burning_ship(&env);
	mlx.ptr = mlx_init();
	mlx.w_ptr = mlx_new_window(mlx.ptr, env.w, env.h, "Fractol - Burning Ship");
	mlx.img_ptr = mlx_new_image(mlx.ptr, env.w, env.h);
	env.str = (unsigned int*)mlx_get_data_addr(mlx.img_ptr,
			&(mlx.bits_per_pixels), &(mlx.size_line), &(mlx.edian));
	env.mlx = mlx;
	set_thr_burning_ship(&env);
	mlx_hook(mlx.w_ptr, 4, 0, mouse_press, &env);
	mlx_hook(mlx.w_ptr, 17, 0, close_w, (void *)0);
	mlx_key_hook(mlx.w_ptr, key_hook, &env);
	mlx_put_image_to_window(mlx.ptr, mlx.w_ptr, mlx.img_ptr, 0, 0);
	mlx_loop(mlx.ptr);
	return (0);
}

int		ft_display_electricity(void)
{
	t_mlx		mlx;
	t_env		env;

	print_tooltip();
	set_env_electricity(&env);
	mlx.ptr = mlx_init();
	mlx.w_ptr = mlx_new_window(mlx.ptr, env.w, env.h, "Fractol - Electricity");
	mlx.img_ptr = mlx_new_image(mlx.ptr, env.w, env.h);
	env.str = (unsigned int*)mlx_get_data_addr(mlx.img_ptr,
			&(mlx.bits_per_pixels), &(mlx.size_line), &(mlx.edian));
	env.mlx = mlx;
	set_thr_electricity(&env);
	mlx_hook(mlx.w_ptr, 4, 0, mouse_press, &env);
	mlx_hook(mlx.w_ptr, 17, 0, close_w, (void *)0);
	mlx_key_hook(mlx.w_ptr, key_hook, &env);
	mlx_put_image_to_window(mlx.ptr, mlx.w_ptr, mlx.img_ptr, 0, 0);
	mlx_loop(mlx.ptr);
	return (0);
}

int		ft_display_cross(void)
{
	t_mlx		mlx;
	t_env		env;

	print_tooltip();
	set_env_cross(&env);
	mlx.ptr = mlx_init();
	mlx.w_ptr = mlx_new_window(mlx.ptr, env.w, env.h, "Fractol - Cross");
	mlx.img_ptr = mlx_new_image(mlx.ptr, env.w, env.h);
	env.str = (unsigned int*)mlx_get_data_addr(mlx.img_ptr,
			&(mlx.bits_per_pixels), &(mlx.size_line), &(mlx.edian));
	env.mlx = mlx;
	set_thr_cross(&env);
	mlx_hook(mlx.w_ptr, 4, 0, mouse_press, &env);
	mlx_hook(mlx.w_ptr, 17, 0, close_w, (void *)0);
	mlx_key_hook(mlx.w_ptr, key_hook, &env);
	mlx_put_image_to_window(mlx.ptr, mlx.w_ptr, mlx.img_ptr, 0, 0);
	mlx_loop(mlx.ptr);
	return (0);
}
