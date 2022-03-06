/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiaparec <fiaparec@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 08:01:56 by fiaparec          #+#    #+#             */
/*   Updated: 2022/03/06 17:58:04 by fiaparec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf_bonus.h"

static void	flp_pf_conv_handler(t_print *tab, const char *format, int pos)
{
	if (*(format + pos) == 'c')
		flp_printf_c(tab, (char)va_arg(tab->args, int));
	else if (*(format + pos) == 's')
		flp_printf_s(tab, va_arg(tab->args, char *));
	// else if (*(format + pos) == 'p')
	// 	tab->rtrn = flp_printf_p(va_arg(tab->args, unsigned long int));
	else if (*(format + pos) == 'd')
		flp_printf_d(tab, va_arg(tab->args, int));
	else if (*(format + pos) == 'i')
		flp_printf_i(tab, va_arg(tab->args, int));
	// else if (*(format + pos) == 'u')
	// 	tab->rtrn = flp_printf_u(va_arg(tab->args, unsigned int));
	// else if (*(format + pos) == 'x')
	// 	tab->rtrn = flp_printf_x(va_arg(tab->args, unsigned int));
	// else if (*(format + pos) == 'X')
	// 	tab->rtrn = flp_printf_uppx(va_arg(tab->args, unsigned int));
	// else if (*(format + pos) == '%')
	// 	tab->rtrn = flp_printf_percent();
}

static int	flp_pf_format_eval(t_print *tab, const char *format, int pos)
{
	if (!ft_strchr("-0+ #123456789.cspdiuxX", *(format + pos)))
	{
		// flp_printf_c(tab, '%');
		// flp_printf_c(tab, *(format + pos));
		// return (++pos);
		return (++pos);
	}
	while (!ft_strchr("cspdiuxX\%", *(format + pos)))
	{
		if (ft_strchr("-0+ #", *(format + pos)))
			pos = flp_pf_flag_identifier(tab, format, pos, *(format + pos));
		if (ft_strchr("123456789", *(format + pos)))
			pos = flp_pf_wdth_prec_identifier(tab, format,
					pos, *(format + pos));
		if (*(format + pos) == '.')
			pos = flp_pf_wdth_prec_identifier(tab, format,
					pos + 1, *(format + pos));
	}
	flp_pf_conv_handler(tab, format, pos++);
	return (pos);
}

static t_print	*flp_pf_init_tab(t_print *tab, int init)
{
	if (init)
		tab->rtrn = 0;
	tab->dash = 0;
	tab->zero = 0;
	tab->sign = 0;
	tab->spce = 0;
	tab->hash = 0;
	tab->wdth = 0;
	tab->prec = -1;
	return (tab);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		rtrn;
	t_print	*tab;

	tab = (t_print *)malloc(sizeof(t_print));
	if (!tab)
		return (-1);
	flp_pf_init_tab(tab, 1);
	va_start(tab->args, format);
	i = 0;
	rtrn = 0;
	while (*(format + i))
	{
		flp_pf_init_tab(tab, 0);
		if (*(format + i) == '%' && ((size_t)i + 1) == ft_strlen(format))
			return (-1);
		else if (*(format + i) == '%' && ((size_t)i + 1) < ft_strlen(format))
			i = flp_pf_format_eval(tab, format, i + 1);
		else
		{
			ft_putchar_fd(*(format + i++), 1);
			rtrn++;
		}
	}
	va_end(tab->args);
	rtrn += tab->rtrn;
	free(tab);
	return (rtrn);
}
