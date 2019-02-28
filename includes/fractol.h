/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcordeno <lcordeno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 11:13:16 by lcordeno          #+#    #+#             */
/*   Updated: 2019/02/23 17:58:15 by lcordeno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include <mlx.h>
# include "../libft/libft.h"
# include <stdlib.h>
# include <math.h>
# include <pthread.h>

typedef struct		s_mlx
{
	void			*ptr;
	void			*w_ptr;
	void			*img_ptr;
	int				bits_per_pixels;
	int				size_line;
	int				edian;
}					t_mlx;

typedef struct		s_thr
{
	int				len;
	int				i;
}					t_thr;

typedef struct		s_env
{
	int				h;
	int				w;
	double			x1;
	double			x2;
	double			y1;
	double			y2;
	int				x;
	int				y;
	double			temp;
	double			c_r;
	double			c_i;
	double			a;
	double			b_i;
	double			zoom;
	int				it;
	int				it_m;
	unsigned int	*str;
	double			zm_edit;
	int				it_m_edit;
	int				edit_off;
	int				f_select;
	int				dark_mode;
	int				color_mode;
	int				bckgd_defaut;
	t_mlx			mlx;
	t_thr			thr;
}					t_env;

int					key_hook(int key, t_env *env);
void				print_tooltip(void);
int					close_w(void *param);
int					fractal_selector(char *ftl);
void				set_env_mandelbrot(t_env *env);
void				set_env_julia(t_env *env);
void				set_env_burning_ship(t_env *env);
void				set_env_electricity(t_env *env);
void				set_env_cross(t_env *env);
int					ft_display_julia(void);
int					ft_display_mandelbrot(void);
int					ft_display_electricity(void);
int					ft_display_cross(void);
int					ft_display_burning_ship(void);
void				ft_redraw(t_env *env);
void				set_thr_julia(t_env *env);
void				set_thr_mandelbrot(t_env *env);
void				set_thr_burning_ship(t_env *env);
void				set_thr_electricity(t_env *env);
void				set_thr_cross(t_env *env);
int					mouse_move(int x, int y, t_env *env);
double				map(double pixel, int b1, double a2, double b2);
int					mouse_press(int button, int x, int y, t_env *env);
void				move(int key, t_env *env);
void				zoom_in(double mouse_x, double mouse_y, t_env *env);
void				zoom_out(double mouse_x, double mouse_y, t_env *env);
unsigned int		color_mode(t_env *env);
void				enable_dark_mode(int key, t_env *env);
void				switch_colors(int key, t_env *env);
unsigned int		fr_colors(t_env env);
unsigned int		rgb_colors(t_env env);
unsigned int		red_color(t_env env);
unsigned int		blue_color(t_env env);
unsigned int		grey_color(t_env env);
unsigned int		green_color(t_env env);
void				reset_ftl(t_env *env);
void				mv_right(t_env *env);
void				mv_left(t_env *env);
void				mv_up(t_env *env);
void				mv_down(t_env *env);

#endif
