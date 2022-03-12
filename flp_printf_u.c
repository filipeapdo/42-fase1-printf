/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flp_printf_u.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiaparec <fiaparec@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 15:44:57 by fiaparec          #+#    #+#             */
/*   Updated: 2022/03/07 21:13:42 by fiaparec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

static void	flp_printf_u_aux(t_print *tab)
{
	tab->hash = 0;
	tab->sign = 0;
	tab->spce = 0;
	if (tab->prec == -1)
		tab->prec = 1;
}

int	flp_printf_u(t_print *tab, unsigned int n)
{
	char	*str;

	if (n == 0 && tab->prec == 0)
		str = ft_strdup("");
	else
	{
		str = flp_pf_utils_itoa_base_ul(n, 10, 'u');
		flp_printf_u_aux(tab);
	}
	str = flp_pf_prec_handler(tab, str);
	if (tab->dash || (tab->zero && tab->prec == 1))
		str = flp_pf_dash_zero_handler(tab, str, "0");
	if (tab->sign || tab->spce)
		str = flp_pf_sign_spce_handler(tab, str);
	str = flp_pf_wdth_handler(tab, str);
	ft_putstr_fd(str, 1);
	tab->rtrn += ft_strlen(str);
	free(str);
	return (tab->rtrn);
}
