# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fiaparec <fiaparec@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/25 08:38:39 by fiaparec          #+#    #+#              #
#    Updated: 2022/02/28 18:18:14 by fiaparec         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC				= gcc

FLAG			= -Wall -Wextra -Werror

AR_ARCHIVE		= ar rc
AR_EXTRACT		= ar x

RM				= rm -f

LIBFT_BUILD		= cd libft && $(MAKE) all && $(MAKE) clean
LIBFT_SRC		= libft/libft.a

SRCS			:= $(wildcard *.c)
OBJS			= $(SRCS:.c=.o)

NAME			= libftprintf.a

TEST			= ./test.out

.c.o:			
				$(CC) $(FLAG) -c $< -o $(<:.c=.o)

$(NAME):		$(OBJS)
				$(LIBFT_BUILD) 
				$(AR_EXTRACT) $(LIBFT_SRC)
				$(AR_ARCHIVE) $(NAME) *.o

all:			$(NAME)

clean:
				$(RM) *.o

fclean:			clean
				$(RM) $(NAME)
				$(RM) *.out
				$(RM) *.a
				$(RM) libft/*.out
				$(RM) libft/*.a

re:				fclean all

.PHONY:			all clean fclean re
