/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiaparec <fiaparec@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 08:01:56 by fiaparec          #+#    #+#             */
/*   Updated: 2022/03/02 20:15:32 by fiaparec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft/libft.h"
#include "ft_printf_bonus.h"

static int	flp_eval_format(t_print *tab, const char *format, int pos)
{
	static char	*conv_allowed = "cspdiuxX\%";
	static char	*width_allowed = "123456789";

	while (!ft_strchr(conv_allowed, *(format + pos)))
	{
		if (*(format + pos) == '-')
			pos = flp_pf_flag_dash(tab, format, pos);
		if (*(format + pos) == '0')
		{
			tab->zero = 1;
			pos++;
		}
		if (ft_strchr(width_allowed, *(format + pos)))
			pos = flp_pf_flag_wdth(tab, format, pos);
		if (*(format + pos) == '.')
		{
			tab->prec = 1;
			pos++;
		}
	}
	pos += flp_pf_conv_hand(tab, format, pos);
	return (pos);
}

static t_print	*flp_init_sprint(t_print *tab)
{
	tab->rtrn = 0;
	tab->dash = 0;
	tab->zero = 0;
	tab->hash = 0;
	tab->spce = 0;
	tab->sign = 0;
	tab->wdth = 0;
	tab->prec = 0;
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
	flp_init_sprint(tab);
	va_start(tab->args, format);
	i = 0;
	rtrn = 0;
	while (*(format + i))
	{
		if (*(format + i) == '%')
			i = flp_eval_format(tab, format, i + 1);
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
