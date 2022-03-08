# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fiaparec <fiaparec@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/25 08:38:39 by fiaparec          #+#    #+#              #
#    Updated: 2022/03/07 20:52:18 by fiaparec         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC				= gcc

FLAG			= -Wall -Wextra -Werror

AR				= ar rcs

RM				= rm -f

# SRCS			= ft_printf.c $(wildcard flp_*.c)

# OBJS			= $(SRCS:.c=.o)

SRCS_BONUS		= ft_printf_bonus.c \
					flp_pf_flag_wdth_prec_ident.c \
					flp_pf_flag_handler.c flp_pf_wdth_prec_handler.c \
					flp_pf_utils_swap.c flp_pf_utils_itoa.c\
					flp_printf_c.c flp_printf_s.c \
					flp_printf_d.c flp_printf_i.c \
					flp_printf_u.c

OBJS_BONUS		= $(SRCS_BONUS:.c=.o)

LIBFT			= libft/libft.a

NAME			= libftprintf.a
LIBFTPF_LINK	= -L. -l:libftprintf.a

.c.o:			
				$(CC) $(FLAG) -c $< -o $(<:.c=.o)

$(NAME):		$(OBJS_BONUS) $(LIBFT)
				$(AR) $(NAME) $(OBJS_BONUS)

all:			$(NAME)

bonus:			$(NAME)

$(LIBFT):
				make -C libft
				cp $(LIBFT) $(NAME)

clean:
				make clean -C libft
				$(RM) *.o

fclean:			clean
				make fclean -C libft
				$(RM) $(NAME)
				$(RM) *.out
				$(RM) *.a
				$(RM) *.log

re:				fclean all

# tests

test:			bonus
				@$(CC) test.c $(LIBFTPF_LINK) -o test.out && ./test.out

a:				test_c test_s test_d test_i test_u

test_c:			bonus
				@$(CC) test_c_expected.c -o test.out && ./test.out > expected.log
				@$(CC) test_c_result.c $(LIBFTPF_LINK) -o test.out && ./test.out > result.log
				@echo -e -n "\n[test_c] ::: "
				@sh test.sh

test_s:			bonus
				@$(CC) test_s_expected.c -o test.out && ./test.out > expected.log
				@$(CC) test_s_result.c $(LIBFTPF_LINK) -o test.out && ./test.out > result.log
				@echo -e -n "\n[test_s] ::: "
				@sh test.sh

test_d:			bonus
				@$(CC) test_d_expected.c -o test.out && ./test.out > expected.log
				@$(CC) test_d_result.c $(LIBFTPF_LINK) -o test.out && ./test.out > result.log
				@echo -e -n "\n[test_d] ::: "
				@sh test.sh

test_i:			bonus
				@$(CC) test_i_expected.c -o test.out && ./test.out > expected.log
				@$(CC) test_i_result.c $(LIBFTPF_LINK) -o test.out && ./test.out > result.log
				@echo -e -n "\n[test_i] ::: "
				@sh test.sh

test_u:			bonus
				@$(CC) test_u_expected.c -o test.out && ./test.out > expected.log
				@$(CC) test_u_result.c $(LIBFTPF_LINK) -o test.out && ./test.out > result.log
				@echo -e -n "\n[test_u] ::: "
				@sh test.sh

.PHONY:			all bonus clean fclean re test
