# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fiaparec <fiaparec@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/25 08:38:39 by fiaparec          #+#    #+#              #
#    Updated: 2022/03/26 15:21:50 by fiaparec         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC				= cc

CC_FLAGS		= -Wall -Wextra -Werror

AR				= ar rcs

RM				= rm -f

LIBFT			= libft/libft.a

SRCS			= ft_printf.c \
					flp_printf_percent.c \
					flp_printf_c.c flp_printf_s.c \
					flp_printf_d.c flp_printf_i.c \
					flp_printf_u.c flp_printf_x.c \
					flp_printf_uppx.c \
					flp_printf_p.c

OBJS			= $(SRCS:.c=.o)

NAME			= libftprintf.a

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

NAME_BONUS		= libftprintf_bonus.a

.c.o:			
				$(CC) $(CC_FLAGS) -c $< -o $(<:.c=.o)

$(NAME):		$(OBJS) $(LIBFT)
				$(RM) $(NAME) $(NAME_BONUS)
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

re:				fclean all

$(NAME_BONUS):	$(OBJS_BONUS) $(LIBFT)
				$(RM) $(NAME) $(NAME_BONUS)
				cp $(LIBFT) $(NAME_BONUS)
				$(AR) $(NAME_BONUS) $(OBJS_BONUS)
				cp $(NAME_BONUS) $(NAME)

bonus:			$(NAME_BONUS)

.PHONY:			all clean fclean re bonus
