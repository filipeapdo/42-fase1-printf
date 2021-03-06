/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flp_printf_uppx.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiaparec <fiaparec@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 17:02:59 by fiaparec          #+#    #+#             */
/*   Updated: 2022/03/13 18:22:28 by fiaparec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

static void	flp_printf_uppx_default_handler(t_print *tab, unsigned int n)
{
	tab->sign = 0;
	tab->spce = 0;
	if (tab->prec == -1)
		tab->prec = 1;
	if (n == 0)
		tab->hash = 0;
}

int	flp_printf_uppx(t_print *tab, unsigned int n)
{
	char	*str;

	flp_printf_uppx_default_handler(tab, n);
	if (n == 0 && tab->prec == 0)
		str = ft_strdup("");
	else
		str = flp_pf_utils_itoa_base_ul(n, 16, 'X');
	str = flp_pf_prec_handler(tab, str);
	if (tab->dash || (tab->zero && tab->prec == 1))
		str = flp_pf_dash_zero_handler(tab, str, "0");
	if (tab->sign || tab->spce)
		str = flp_pf_sign_spce_handler(tab, str);
	if (tab->hash)
		str = flp_pf_hash_handler(str, 'X');
	str = flp_pf_wdth_handler(tab, str);
	ft_putstr_fd(str, 1);
	tab->size += ft_strlen(str);
	free(str);
	return (tab->size);
}
