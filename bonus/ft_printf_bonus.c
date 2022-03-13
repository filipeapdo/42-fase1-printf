/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiaparec <fiaparec@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 08:01:56 by fiaparec          #+#    #+#             */
/*   Updated: 2022/03/12 18:59:40 by fiaparec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

static void	flp_pf_conv_handler(t_print *tab, const char *format, int pos)
{
	if (*(format + pos) == 'c')
		flp_printf_c(tab, (char)va_arg(tab->args, int));
	else if (*(format + pos) == 's')
		flp_printf_s(tab, va_arg(tab->args, char *));
	else if (*(format + pos) == 'p')
		tab->size = flp_printf_p(tab, va_arg(tab->args, unsigned long int));
	else if (*(format + pos) == 'd')
		flp_printf_d(tab, va_arg(tab->args, int));
	else if (*(format + pos) == 'i')
		flp_printf_i(tab, va_arg(tab->args, int));
	else if (*(format + pos) == 'u')
		tab->size = flp_printf_u(tab, va_arg(tab->args, unsigned int));
	else if (*(format + pos) == 'x')
		tab->size = flp_printf_x(tab, va_arg(tab->args, unsigned int));
	else if (*(format + pos) == 'X')
		tab->size = flp_printf_uppx(tab, va_arg(tab->args, unsigned int));
	else if (*(format + pos) == '%')
		tab->size = flp_printf_percent(tab);
}

static int	flp_pf_format_eval(t_print *tab, const char *format, int pos)
{
	if (!ft_strchr("-0+ #123456789.cspdiuxX\%", *(format + pos)))
		return (-1);
	while (!ft_strchr("cspdiuxX\%", *(format + pos)))
	{
		if (ft_strchr("-0+ #", *(format + pos)))
			pos = flp_pf_flag_identifier(tab, pos, *(format + pos));
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

static t_print	*flp_pf_init_reset_tab(t_print *tab, int init)
{
	if (init)
		tab->size = 0;
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
	int		pos;
	int		size;
	t_print	*tab;

	tab = (t_print *)malloc(sizeof(t_print));
	flp_pf_init_reset_tab(tab, TAB_INIT);
	va_start(tab->args, format);
	pos = 0;
	size = 0;
	while (*(format + pos))
	{
		flp_pf_init_reset_tab(tab, TAB_RESET);
		if (*(format + pos) == '%')
			pos = flp_pf_format_eval(tab, format, pos + 1);
		else
		{
			ft_putchar_fd(*(format + pos++), 1);
			size++;
		}
	}
	va_end(tab->args);
	size += tab->size;
	free(tab);
	return (size);
}
