# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fiaparec <fiaparec@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/25 08:38:39 by fiaparec          #+#    #+#              #
#    Updated: 2022/03/13 10:46:12 by fiaparec         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC				= cc

CC_FLAGS		= -Wall -Wextra -Werror

AR				= ar rcs

RM				= rm -f

SRCS			= ft_printf.c \
					flp_printf_percent.c \
					flp_printf_c.c flp_printf_s.c \
					flp_printf_d.c flp_printf_i.c \
					flp_printf_u.c flp_printf_x.c \
					flp_printf_uppx.c \
					flp_printf_p.c

OBJS			= $(SRCS:.c=.o)

SRCS_BONUS		= bonus/ft_printf_bonus.c \
					bonus/flp_pf_flag_wdth_prec_ident.c \
					bonus/flp_pf_flag_handler.c \
					bonus/flp_pf_wdth_prec_handler.c \
					bonus/flp_pf_utils_swap.c bonus/flp_pf_utils_itoa.c \
					bonus/flp_printf_percent.c \
					bonus/flp_printf_c.c bonus/flp_printf_s.c \
					bonus/flp_printf_d.c bonus/flp_printf_i.c \
					bonus/flp_printf_u.c bonus/flp_printf_x.c \
					bonus/flp_printf_uppx.c \
					bonus/flp_printf_p.c

OBJS_BONUS		= $(SRCS_BONUS:.c=.o)

LIBFT			= libft/libft.a

NAME			= libftprintf.a
NAME_BONUS		= libftprintf_bonus.a

LIBFTPF_LINK	= -L. -l:libftprintf.a

.c.o:			
				$(CC) $(CC_FLAGS) -c $< -o $(<:.c=.o)

$(NAME):		$(OBJS) $(LIBFT)
				cp $(LIBFT) $(NAME)
				$(AR) $(NAME) $(OBJS)

all:			$(NAME)

$(LIBFT):
				make -C libft

clean:
				make clean -C libft
				$(RM) $(OBJS)
				$(RM) $(OBJS_BONUS)

fclean:			clean
				make fclean -C libft
				$(RM) $(NAME)
				$(RM) *.out
				$(RM) *.a
				$(RM) *.log
				$(RM) bonus/*.out
				$(RM) bonus/*.a
				$(RM) bonus/*.log
				$(RM) tests/*.out
				$(RM) tests/*.a
				$(RM) tests/*.log

re:				fclean all

$(NAME_BONUS):	$(OBJS_BONUS) $(LIBFT)
				cp $(LIBFT) $(NAME_BONUS)
				$(AR) $(NAME_BONUS) $(OBJS_BONUS)
				cp $(NAME_BONUS) $(NAME)

bonus:			$(NAME_BONUS)

# tests

test:			bonus
				@$(CC) tests/test.c $(LIBFTPF_LINK) -o tests/test.out && ./tests/test.out

# a:				test_c test_s test_d test_i test_u test_x test_uppx test_p test_percent
a:				test_c test_s

test_c:			bonus
				@$(CC) $(CC_FLAGS) tests/test_c_expected.c -o tests/test.out
				@valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes -q --log-file="tests/valgrind_expected.log" ./tests/test.out > tests/expected.log
				@$(CC) $(CC_FLAGS) tests/test_c_result.c $(LIBFTPF_LINK) -o tests/test.out
				@valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes -q --log-file="tests/valgrind_result.log" ./tests/test.out > tests/result.log
				@echo ""
				@echo -n "[test_c] ::: "
				@bash tests/test.sh
				@echo ""

test_s:			bonus
				@$(CC) $(CC_FLAGS) tests/test_s_expected.c -o tests/test.out
				@valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes -q --log-file="tests/valgrind_expected.log" ./tests/test.out > tests/expected.log
				@$(CC) $(CC_FLAGS) tests/test_s_result.c $(LIBFTPF_LINK) -o tests/test.out
				@valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes -q --log-file="tests/valgrind_result.log" ./tests/test.out > tests/result.log
				@echo ""
				@echo -n "[test_s] ::: "
				@bash tests/test.sh
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

.PHONY:			all clean fclean re bonus test
