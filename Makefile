# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lcordeno <lcordeno@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/11 11:12:46 by lcordeno          #+#    #+#              #
#    Updated: 2019/02/23 17:28:30 by lcordeno         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fractol

SRC = srcs/main.c \
	  srcs/display.c \
	  srcs/hooks.c \
	  srcs/tools.c \
	  fractals/mandelbrot.c \
	  fractals/julia.c \
	  fractals/burning_ship.c \
	  fractals/electricity.c \
	  fractals/cross.c \
	  srcs/tooltip.c \
	  srcs/zoom.c \
	  srcs/f_settings.c \
	  srcs/colors.c \
	  srcs/colors_multi.c \
	  srcs/color_tools.c \
	  srcs/move.c

INCLUDE = includes/fractol.h

LIBFT = libft/libft.a

OBJS= $(SRC:.c=.o)

FLAGS = -Wall -Wextra -Werror -O3 -flto

MLX = -L /usr/local/lib/ -lmlx -framework OpenGL -framework Appkit

$(NAME): $(LIBFT) $(OBJS)
	gcc -fsanitize=address -g3 $(FLAGS) -include $(INCLUDE) -o $(NAME) $(OBJS) $(LIBFT) $(MLX)

$(LIBFT):
	make -C libft/

%.o: %.c includes/fractol.h Makefile
	gcc $(FLAGS) -include $(INCLUDE) -o $@ -c $<

all: $(NAME)

.PHONY: clean

clean:
	@make -C libft/ clean
	@rm -f $(OBJS)

fclean: clean
	@make -C libft/ fclean
	@rm -f $(NAME)

re: fclean all
