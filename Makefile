# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tishihar <tishihar@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/11 19:17:43 by tishihar          #+#    #+#              #
#    Updated: 2024/06/18 14:32:22 by tishihar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = 
SRCS += ft_printf.c

SRCS += src/ft_printf_c.c
SRCS += src/ft_printf_s.c
SRCS += src/ft_printf_p.c
SRCS += src/ft_printf_d.c
SRCS += src/ft_printf_u.c
SRCS += src/ft_printf_x.c
SRCS += src/ft_printf_x_upper.c

OBJS := $(SRCS:%.c=%.o)

# library
LIB := libft/libft.a
NAME := libftprintf.a
CC := cc
FLAGS := -Wall -Wextra -Werror

# target
.PHONY: all
all: $(NAME)

%.o:%.c
	$(CC) $(FLAGS) -c $< -o $@

$(NAME):$(OBJS)
	make -C libft
	cp $(LIB) $(NAME)
	ar rcs $(NAME) $(OBJS)

.PHONY:clean
clean:
	make fclean -C libft
	rm -f $(OBJS)

.PHONY:fclean
fclean:clean
	rm -f $(NAME)

.PHONY:re
re: fclean all
