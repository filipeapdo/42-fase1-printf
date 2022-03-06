/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flp_printf_d.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiaparec <fiaparec@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 15:05:29 by fiaparec          #+#    #+#             */
/*   Updated: 2022/03/06 17:46:51 by fiaparec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

static void	flp_printf_d_aux(t_print *tab, char *str)
{
	if (*str == '-')
		tab->sign = (int) '-';
	else if (tab->sign == 1)
		tab->sign = (int) '+';
	if (tab->prec == -1)
		tab->prec = 1;
}

int	flp_printf_d(t_print *tab, int n)
{
	char	*str;

	if (n == 0 && tab->prec == 0)
		str = ft_strdup("");
	else
	{
		str = ft_itoa(n);
		flp_printf_d_aux(tab, str);
	}
	str = flp_pf_prec_handler(tab, str);
	if (tab->dash || (tab->zero && tab->prec == 1))
		str = flp_pf_dash_zero_handler(tab, str, "0");
	if (tab->sign || tab->spce)
		str = flp_pf_sign_spce_handler(tab, str);
	str = flp_pf_wdth_handler(tab, str);
	flp_printf_s(tab, str);
	free(str);
	return (tab->rtrn);
}
