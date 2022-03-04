/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flp_printf_d.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiaparec <fiaparec@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 15:05:29 by fiaparec          #+#    #+#             */
/*   Updated: 2022/03/04 06:55:41 by fiaparec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft/libft.h"
#include "ft_printf_bonus.h"

int	flp_printf_d(t_print *tab, int n)
{
	char	*str;
	char	sign;

	str = ft_itoa(n);
	sign = *str;
	if (sign == '-' || sign == '+')
		str = flp_utils_substrswap(str);
	str = flp_pf_prec_handler(tab, str);
	if (tab->dash)
		str = flp_pf_dash_handler(tab, str, sign);
	else if (tab->zero && !tab->dash && !tab->prec)
		str = flp_pf_zero_handler(tab, str, sign);
	else
		str = flp_pf_wdth_handler(tab, str, sign);
	flp_printf_s(tab, str);
	free(str);
	return (tab->rtrn);
}
