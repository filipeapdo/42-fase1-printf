# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fiaparec <fiaparec@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/25 08:38:39 by fiaparec          #+#    #+#              #
#    Updated: 2022/03/01 10:53:32 by fiaparec         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC				= gcc

FLAG			= -Wall -Wextra -Werror

AR_ARCHIVE		= ar rc
AR_EXTRACT		= ar x

RM				= rm -f

# HEADERS			= libftprintf src/libft.h

LIBFT_BUILD		= cd libft && $(MAKE) all
LIBFT_SRC		= libft/libft.a
# LIBFT_LINK		= -Llibft -l:libft.a

SRCS			= ft_printf.c $(wildcard flp_*.c)
OBJS			= $(SRCS:.c=.o)

SRCS_BONUS		= ft_printf_bonus.c $(wildcard flp_*.c)
OBJS_BONUS		= $(SRCS_BONUS:.c=.o)

NAME			= libftprintf.a
LIBFTPF_LINK	= -L. -l:libftprintf.a

TEST			= ./test.out

.c.o:			
				$(CC) $(FLAG) -c $< -o $(<:.c=.o)

$(NAME):		$(OBJS)
				$(LIBFT_BUILD) 
				$(AR_EXTRACT) $(LIBFT_SRC)
				$(AR_ARCHIVE) $(NAME) *.o

all:			$(NAME)

bonus:			$(OBJS_BONUS)
				$(LIBFT_BUILD) 
				$(AR_EXTRACT) $(LIBFT_SRC)
				$(AR_ARCHIVE) $(NAME) *.o

clean:
				$(RM) *.o

fclean:			clean
				$(RM) $(NAME)
				$(RM) *.out
				$(RM) *.a
				cd libft && $(MAKE) fclean

re:				fclean all

test:			
				$(CC) test.c $(LIBFTPF_LINK) -o test.out
				$(TEST)


.PHONY:			all bonus clean fclean re test
