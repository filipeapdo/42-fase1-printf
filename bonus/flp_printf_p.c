/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flp_printf_p.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiaparec <fiaparec@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 17:11:31 by fiaparec          #+#    #+#             */
/*   Updated: 2022/03/13 19:08:55 by fiaparec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

static void	flp_printf_p_default_handler(t_print *tab, unsigned long int n)
{
	tab->zero = 0;
	tab->sign = 0;
	tab->spce = 0;
	tab->hash = 1;
	if (n == 0)
		tab->hash = 0;
}

int	flp_printf_p(t_print *tab, unsigned long int n)
{
	char	*str;

	flp_printf_p_default_handler(tab, n);
	if (n == 0)
		str = ft_strdup("(nil)");
	else
		str = flp_pf_utils_itoa_base_ul(n, 16, 'x');
	if (tab->dash || (n != 0 && tab->zero && tab->prec == 1))
		str = flp_pf_dash_zero_handler(tab, str, "0");
	else if (n == 0 && tab->zero && tab->prec == 1)
		str = flp_pf_dash_zero_handler(tab, str, " ");
	if (tab->hash)
		str = flp_pf_hash_handler(str, 'x');
	if (tab->sign || tab->spce)
		str = flp_pf_sign_spce_handler(tab, str);
	str = flp_pf_wdth_handler(tab, str);
	ft_putstr_fd(str, 1);
	tab->size += ft_strlen(str);
	free(str);
	return (tab->size);
}
