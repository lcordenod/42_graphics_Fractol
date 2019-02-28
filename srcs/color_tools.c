/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color_tools.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcordeno <lcordeno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 16:51:44 by lcordeno          #+#    #+#             */
/*   Updated: 2019/02/23 17:59:15 by lcordeno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

void			enable_dark_mode(int key, t_env *env)
{
	if (env->dark_mode == 0)
		env->dark_mode = 1;
	else
		env->dark_mode = 0;
	switch_colors(key, env);
}

unsigned int	color_mode(t_env *env)
{
	if (env->color_mode == 0)
		return (grey_color(*env));
	if (env->color_mode == 1)
		return (red_color(*env));
	if (env->color_mode == 2)
		return (blue_color(*env));
	if (env->color_mode == 3)
		return (green_color(*env));
	if (env->color_mode == 4)
		return (fr_colors(*env));
	if (env->color_mode == 5)
		return (rgb_colors(*env));
	else
	{
		env->color_mode = 0;
		return (grey_color(*env));
	}
}

void			switch_colors(int key, t_env *env)
{
	if (key == 2)
	{
		if (env->dark_mode)
			env->bckgd_defaut = 0x000000;
		else
			env->bckgd_defaut = 0xFFFFFF;
	}
	if (key == 8)
	{
		env->color_mode++;
		color_mode(env);
	}
	ft_redraw(env);
}
