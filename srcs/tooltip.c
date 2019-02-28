/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tooltip.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcordeno <lcordeno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 17:07:39 by lcordeno          #+#    #+#             */
/*   Updated: 2019/02/28 19:25:37 by lcordeno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

void	print_tooltip(void)
{
	ft_putstr("****************************\n");
	ft_putstr("*       Hello friend!      *\n");
	ft_putstr("*       ------------       *\n");
	ft_putstr("*                          *\n");
	ft_putstr("*     --KEY BINDINGS--     *\n");
	ft_putstr("*                          *\n");
	ft_putstr("*  c = change color        *\n");
	ft_putstr("*  d = enable dark mode    *\n");
	ft_putstr("*  r = reset               *\n");
	ft_putstr("*  esc = quit              *\n");
	ft_putstr("*                          *\n");
	ft_putstr("*          -Zoom-          *\n");
	ft_putstr("*                          *\n");
	ft_putstr("*  scroll + = zoom in      *\n");
	ft_putstr("*  scroll - = zoom out     *\n");
	ft_putstr("*                          *\n");
	ft_putstr("*          -Move-          *\n*                          *\n");
	ft_putstr("*  Use arrows <-^->        *\n");
	ft_putstr("*                          *\n");
	ft_putstr("*         -Julia-          *\n*                          *\n");
	ft_putstr("*  clic = pause            *\n");
	ft_putstr("*  cursor = change fractal *\n");
	ft_putstr("*                          *\n");
	ft_putstr("****************************\n");
	ft_putstr("\nDesigned by lcordeno @ 42 Paris\n");
}
