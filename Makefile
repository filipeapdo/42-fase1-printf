# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fiaparec <fiaparec@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/25 08:38:39 by fiaparec          #+#    #+#              #
#    Updated: 2022/03/12 07:06:43 by fiaparec         ###   ########.fr        #
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
					flp_printf_percent.c \
					flp_printf_c.c flp_printf_s.c \
					flp_printf_d.c flp_printf_i.c \
					flp_printf_u.c flp_printf_x.c flp_printf_uppx.c \
					flp_printf_p.c

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
				@$(CC) -w test.c $(LIBFTPF_LINK) -o test.out && ./test.out

a:				test_c test_s test_d test_i test_u test_x test_uppx test_p test_percent

test_c:			bonus
				@$(CC) -w test_c_expected.c -o test.out && ./test.out > expected.log
				@$(CC) -w test_c_result.c $(LIBFTPF_LINK) -o test.out && ./test.out > result.log
				@echo ""
				@echo -n "[test_c] ::: "
				@bash test.sh
				@echo ""

test_s:			bonus
				@$(CC) -w test_s_expected.c -o test.out && ./test.out > expected.log
				@$(CC) -w test_s_result.c $(LIBFTPF_LINK) -o test.out && ./test.out > result.log
				@echo ""
				@echo -n "[test_s] ::: "
				@bash test.sh
				@echo ""

test_d:			bonus
				@$(CC) -w test_d_expected.c -o test.out && ./test.out > expected.log
				@$(CC) -w test_d_result.c $(LIBFTPF_LINK) -o test.out && ./test.out > result.log
				@echo ""
				@echo -n "[test_d] ::: "
				@bash test.sh
				@echo ""

test_i:			bonus
				@$(CC) -w test_i_expected.c -o test.out && ./test.out > expected.log
				@$(CC) -w test_i_result.c $(LIBFTPF_LINK) -o test.out && ./test.out > result.log
				@echo ""
				@echo -n "[test_i] ::: "
				@bash test.sh
				@echo ""

test_u:			bonus
				@$(CC) -w test_u_expected.c -o test.out && ./test.out > expected.log
				@$(CC) -w test_u_result.c $(LIBFTPF_LINK) -o test.out && ./test.out > result.log
				@echo ""
				@echo -n "[test_u] ::: "
				@bash test.sh
				@echo ""

test_x:			bonus
				@$(CC) -w test_x_expected.c -o test.out && ./test.out > expected.log
				@$(CC) -w test_x_result.c $(LIBFTPF_LINK) -o test.out && ./test.out > result.log
				@echo ""
				@echo -n "[test_x] ::: "
				@bash test.sh
				@echo ""

test_uppx:		bonus
				@$(CC) -w test_uppx_expected.c -o test.out && ./test.out > expected.log
				@$(CC) -w test_uppx_result.c $(LIBFTPF_LINK) -o test.out && ./test.out > result.log
				@echo ""
				@echo -n "[test_uppx] ::: "
				@bash test.sh
				@echo ""

test_p:			bonus
				@$(CC) -w test_p_expected.c -o test.out && ./test.out > expected.log
				@$(CC) -w test_p_result.c $(LIBFTPF_LINK) -o test.out && ./test.out > result.log
				@echo ""
				@echo -n "[test_p] ::: "
				@bash test.sh
				@echo ""

test_percent:	bonus
				@$(CC) -w test_percent_expected.c -o test.out && ./test.out > expected.log
				@$(CC) -w test_percent_result.c $(LIBFTPF_LINK) -o test.out && ./test.out > result.log
				@echo ""
				@echo -n "[test_percent] ::: "
				@bash test.sh
				@echo ""

.PHONY:			all bonus clean fclean re test
