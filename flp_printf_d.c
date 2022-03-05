/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flp_printf_d.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiaparec <fiaparec@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 15:05:29 by fiaparec          #+#    #+#             */
/*   Updated: 2022/03/05 10:11:24 by fiaparec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft/libft.h"
#include "ft_printf_bonus.h"

int	flp_printf_d(t_print *tab, int n)
{
	char	*str;
	char	sign;

	// printf("\n\ntab->prec:%d\n", tab->prec);
	// printf("tab->wdth:%d\n\n", tab->wdth);

	if (tab->prec == -1)
		tab->prec = 1;
	if (n == 0 && tab->prec == 0)
		str = ft_strdup("");
	else
		str = ft_itoa(n);
	if (*str == '-')
		sign = '-';
	else if (tab->sign)
		sign = '+';
	else
		sign = 0;
	if (sign == '-')
		str = flp_pf_utils_substrswap(str, 1, ft_strlen(str));
	str = flp_pf_prec_handler(tab, str);
	if (tab->dash)
		str = flp_pf_dash_handler(tab, str, sign);
	if (tab->zero && !tab->dash && tab->prec == 1)
		str = flp_pf_zero_handler(tab, str, sign);
	if (sign)
		str = flp_pf_sign_handler(str, sign);
	if (tab->spce && !tab->sign)
		str = flp_pf_spce_handler(str, sign);
	str = flp_pf_wdth_handler(tab, str);
	flp_printf_s(tab, str);
	free(str);
	return (tab->rtrn);
}
