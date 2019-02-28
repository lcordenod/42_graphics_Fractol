/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcordeno <lcordeno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 11:32:30 by lcordeno          #+#    #+#             */
/*   Updated: 2019/02/23 18:03:36 by lcordeno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

int		main(int ac, char **av)
{
	if (ac == 2)
		fractal_selector(av[1]);
	else
	{
		ft_putstr("Please enter a fractal among these:");
		ft_putstr("\njulia\nmandelbrot\nburning_ship\nelectricity\ncross\n");
	}
	return (0);
}
