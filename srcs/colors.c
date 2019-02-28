/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcordeno <lcordeno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 11:44:04 by lcordeno          #+#    #+#             */
/*   Updated: 2019/02/23 18:00:21 by lcordeno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

unsigned int		grey_color(t_env env)
{
	int		color;

	color = env.bckgd_defaut;
	if (env.it > (0.1 * env.it_m) && env.it <= (0.2 * env.it_m))
		color = 0xBEBEBE;
	else if (env.it > (0.2 * env.it_m) && env.it <= (0.3 * env.it_m))
		color = 0xA9A9A9;
	else if (env.it > (0.3 * env.it_m) && env.it <= (0.4 * env.it_m))
		color = 0x989898;
	else if (env.it > (0.4 * env.it_m) && env.it <= (0.5 * env.it_m))
		color = 0x888888;
	else if (env.it > (0.5 * env.it_m) && env.it <= (0.6 * env.it_m))
		color = 0x787878;
	else if (env.it > (0.6 * env.it_m) && env.it <= (0.7 * env.it_m))
		color = 0x696969;
	else if (env.it > (0.7 * env.it_m) && env.it <= (0.8 * env.it_m))
		color = 0x606060;
	else if (env.it > (0.8 * env.it_m) && env.it <= (0.9 * env.it_m))
		color = 0x505050;
	else if (env.it > (0.9 * env.it_m) && env.it <= env.it_m)
		color = 0x404040;
	return (color);
}

unsigned int		red_color(t_env env)
{
	int		color;

	color = env.bckgd_defaut;
	if (env.it > (0.1 * env.it_m) && env.it <= (0.2 * env.it_m))
		color = 0xFFEBEB;
	else if (env.it > (0.2 * env.it_m) && env.it <= (0.3 * env.it_m))
		color = 0xFFC4C4;
	else if (env.it > (0.3 * env.it_m) && env.it <= (0.4 * env.it_m))
		color = 0xFF8989;
	else if (env.it > (0.4 * env.it_m) && env.it <= (0.5 * env.it_m))
		color = 0xFF6262;
	else if (env.it > (0.5 * env.it_m) && env.it <= (0.6 * env.it_m))
		color = 0xFF1414;
	else if (env.it > (0.6 * env.it_m) && env.it <= (0.7 * env.it_m))
		color = 0xFF0000;
	else if (env.it > (0.7 * env.it_m) && env.it <= (0.8 * env.it_m))
		color = 0xD80000;
	else if (env.it > (0.8 * env.it_m) && env.it <= (0.9 * env.it_m))
		color = 0xB10000;
	else if (env.it > (0.9 * env.it_m) && env.it <= env.it_m)
		color = 0x890000;
	return (color);
}

unsigned int		blue_color(t_env env)
{
	int		color;

	color = env.bckgd_defaut;
	if (env.it > (0.1 * env.it_m) && env.it <= (0.2 * env.it_m))
		color = 0xe2f4ff;
	else if (env.it > (0.2 * env.it_m) && env.it <= (0.3 * env.it_m))
		color = 0xbbe4ff;
	else if (env.it > (0.3 * env.it_m) && env.it <= (0.4 * env.it_m))
		color = 0x94d5ff;
	else if (env.it > (0.4 * env.it_m) && env.it <= (0.5 * env.it_m))
		color = 0x6dc6ff;
	else if (env.it > (0.5 * env.it_m) && env.it <= (0.6 * env.it_m))
		color = 0x45b7ff;
	else if (env.it > (0.6 * env.it_m) && env.it <= (0.7 * env.it_m))
		color = 0x1ea7ff;
	else if (env.it > (0.7 * env.it_m) && env.it <= (0.8 * env.it_m))
		color = 0x0aa0ff;
	else if (env.it > (0.8 * env.it_m) && env.it <= (0.9 * env.it_m))
		color = 0x008ae2;
	else if (env.it > (0.9 * env.it_m) && env.it <= env.it_m)
		color = 0x0072bb;
	return (color);
}

unsigned int		green_color(t_env env)
{
	int		color;

	color = env.bckgd_defaut;
	if (env.it > (0.1 * env.it_m) && env.it <= (0.2 * env.it_m))
		color = 0xc4ffc4;
	else if (env.it > (0.2 * env.it_m) && env.it <= (0.3 * env.it_m))
		color = 0x9dff9d;
	else if (env.it > (0.3 * env.it_m) && env.it <= (0.4 * env.it_m))
		color = 0x62ff62;
	else if (env.it > (0.4 * env.it_m) && env.it <= (0.5 * env.it_m))
		color = 0x14ff14;
	else if (env.it > (0.5 * env.it_m) && env.it <= (0.6 * env.it_m))
		color = 0x00d800;
	else if (env.it > (0.6 * env.it_m) && env.it <= (0.7 * env.it_m))
		color = 0x00b100;
	else if (env.it > (0.7 * env.it_m) && env.it <= (0.8 * env.it_m))
		color = 0x009d00;
	else if (env.it > (0.8 * env.it_m) && env.it <= (0.9 * env.it_m))
		color = 0x007600;
	else if (env.it > (0.9 * env.it_m) && env.it <= env.it_m)
		color = 0x006200;
	return (color);
}
