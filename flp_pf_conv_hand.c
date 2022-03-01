/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flp_pf_conv_hand.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiaparec <fiaparec@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 11:28:00 by fiaparec          #+#    #+#             */
/*   Updated: 2022/03/01 15:27:28 by fiaparec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft/libft.h"
#include "ft_printf_bonus.h"

int	flp_pf_conv_hand(t_print *tab, const char *format, int pos)
{
	char	conv_spec;

	conv_spec = *(format + pos);
	if (conv_spec == 'c')
		tab->rtrn = flp_printf_c(tab, (char)va_arg(tab->args, int));
	else if (conv_spec == 's')
		tab->rtrn = flp_printf_s(va_arg(tab->args, char *));
	else if (conv_spec == 'p')
		tab->rtrn = flp_printf_p(va_arg(tab->args, unsigned long int));
	else if (conv_spec == 'd')
		tab->rtrn = flp_printf_d(tab, va_arg(tab->args, int));
	else if (conv_spec == 'i')
		tab->rtrn = flp_printf_i(va_arg(tab->args, int));
	else if (conv_spec == 'u')
		tab->rtrn = flp_printf_u(va_arg(tab->args, unsigned int));
	else if (conv_spec == 'x')
		tab->rtrn = flp_printf_x(va_arg(tab->args, unsigned int));
	else if (conv_spec == 'X')
		tab->rtrn = flp_printf_uppx(va_arg(tab->args, unsigned int));
	else if (conv_spec == '%')
		tab->rtrn = flp_printf_percent();
	return (1);
}
