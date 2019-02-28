/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colors_multi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcordeno <lcordeno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 14:28:30 by lcordeno          #+#    #+#             */
/*   Updated: 2019/02/23 18:01:30 by lcordeno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

unsigned int		rgb_colors(t_env env)
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
		color = 0xe2f4ff;
	else if (env.it > (0.5 * env.it_m) && env.it <= (0.6 * env.it_m))
		color = 0xbbe4ff;
	else if (env.it > (0.6 * env.it_m) && env.it <= (0.7 * env.it_m))
		color = 0x94d5ff;
	else if (env.it > (0.7 * env.it_m) && env.it <= (0.8 * env.it_m))
		color = 0x62ff62;
	else if (env.it > (0.8 * env.it_m) && env.it <= (0.9 * env.it_m))
		color = 0x14ff14;
	else if (env.it > (0.9 * env.it_m) && env.it <= env.it_m)
		color = 0x00d800;
	return (color);
}

unsigned int		fr_colors(t_env env)
{
	int		color;

	color = env.bckgd_defaut;
	if (env.it > (0.1 * env.it_m) && env.it <= (0.2 * env.it_m))
		color = 0x94d5ff;
	else if (env.it > (0.2 * env.it_m) && env.it <= (0.3 * env.it_m))
		color = 0x6dc6ff;
	else if (env.it > (0.3 * env.it_m) && env.it <= (0.4 * env.it_m))
		color = 0x45b7ff;
	else if (env.it > (0.4 * env.it_m) && env.it <= (0.5 * env.it_m))
		color = 0xe2f4ff;
	else if (env.it > (0.5 * env.it_m) && env.it <= (0.6 * env.it_m))
		color = 0xffffff;
	else if (env.it > (0.6 * env.it_m) && env.it <= (0.7 * env.it_m))
		color = 0xFFEBEB;
	else if (env.it > (0.7 * env.it_m) && env.it <= (0.8 * env.it_m))
		color = 0xFF8989;
	else if (env.it > (0.8 * env.it_m) && env.it <= (0.9 * env.it_m))
		color = 0xFF6262;
	else if (env.it > (0.9 * env.it_m) && env.it <= env.it_m)
		color = 0xFF1414;
	return (color);
}
