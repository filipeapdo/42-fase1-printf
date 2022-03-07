/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flp_printf_c.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiaparec <fiaparec@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 09:35:17 by fiaparec          #+#    #+#             */
/*   Updated: 2022/03/06 22:48:18 by fiaparec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

static void	flp_printf_c_aux(t_print *tab)
{
	tab->zero = 0;
	tab->sign = 0;
	tab->spce = 0;
	tab->hash = 0;
	if (tab->wdth > 0)
		tab->wdth--;
}

int	flp_printf_c(t_print *tab, char c)
{
	char	*str;

	str = ft_strdup("");
	flp_printf_c_aux(tab);
	if (tab->wdth > 0 && tab->dash)
	{
		str = flp_pf_dash_zero_handler(tab, str, " ");
		ft_putchar_fd(c, 1);
		flp_printf_s(tab, str);
	}
	else if (tab->wdth > 0 && !tab->dash)
	{
		str = flp_pf_wdth_handler(tab, str);
		flp_printf_s(tab, str);
		ft_putchar_fd(c, 1);
	}
	else
		ft_putchar_fd(c, 1);
	tab->rtrn += ft_strlen(str) + 1;
	free(str);
	return (tab->rtrn);
}
