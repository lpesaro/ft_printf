# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lpesaro <lpesaro@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/06 11:47:43 by lpesaro           #+#    #+#              #
#    Updated: 2023/02/07 20:24:51 by lpesaro          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = 	ft_printchar.c \
		ft_printf.c \
		ft_print_hexalower.c \
		ft_print_hexaupper.c \
		ft_printinteger.c \
		ft_printpercent.c \
		ft_printptr.c \
		ft_printstring.c \
		ft_printunsint.c \
		ft_putchar.c \
		ft_putnbr_hexalower.c \
		ft_putnbr_hexaupper.c \
		ft_putnbr.c \
		ft_putstr.c \
		ft_strlen.c \
		
OBJS = ${SRCS:.c=.o}

CC		= gcc
RM		= rm -f

CFLAGS = -Wall -Wextra -Werror

.c.o:
		${CC} ${CFLAGS} -g -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}

		ar rcs ${NAME} ${OBJS}

all:	${NAME}

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all