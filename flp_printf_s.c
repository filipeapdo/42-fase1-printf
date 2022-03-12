/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flp_printf_s.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiaparec <fiaparec@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 10:50:15 by fiaparec          #+#    #+#             */
/*   Updated: 2022/03/07 07:31:15 by fiaparec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

static void	flp_printf_s_aux(t_print *tab)
{
	tab->zero = 0;
	tab->sign = 0;
	tab->spce = 0;
	tab->hash = 0;
}

int	flp_printf_s(t_print *tab, char *s)
{
	char	*str;

	str = ft_strdup(s);
	if (!str && tab->prec == 0)
		str = ft_strdup("");
	else if (!str)
		str = ft_strdup("(null)");
	flp_printf_s_aux(tab);
	if (tab->prec >= 0 && (size_t)tab->prec <= ft_strlen(str))
		str = flp_pf_utils_substrswap(str, 0, tab->prec);
	if (tab->wdth > 0 && tab->dash)
		str = flp_pf_dash_zero_handler(tab, str, " ");
	else if (tab->wdth > 0 && !tab->dash)
		str = flp_pf_wdth_handler(tab, str);
	ft_putstr_fd(str, 1);
	tab->rtrn += ft_strlen(str);
	free(str);
	return (tab->rtrn);
}
