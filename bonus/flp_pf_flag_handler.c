/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flp_pf_flag_handler.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiaparec <fiaparec@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 07:04:02 by fiaparec          #+#    #+#             */
/*   Updated: 2022/03/13 19:40:10 by fiaparec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

char	*flp_pf_dash_zero_handler(t_print *tab, char *s, char *fill)
{
	char	*str_dash_zero;

	str_dash_zero = ft_strdup(s);
	if ((tab->sign || tab->spce) && tab->wdth >= 1)
		tab->wdth -= 1;
	if (tab->hash && tab->wdth >= 2)
		tab->wdth -= 2;
	if (tab->dash)
		while (ft_strlen(str_dash_zero) < (size_t)tab->wdth)
			str_dash_zero = flp_pf_utils_joinswap(str_dash_zero, " ", RIGHT);
	else if (tab->zero)
		while (ft_strlen(str_dash_zero) < (size_t)tab->wdth)
			str_dash_zero = flp_pf_utils_joinswap(fill, str_dash_zero, LEFT);
	free(s);
	return (str_dash_zero);
}

char	*flp_pf_sign_spce_handler(t_print *tab, char *s)
{
	char	*str_sign_spce;

	str_sign_spce = ft_strdup(s);
	if (tab->sign == (int) '-')
		str_sign_spce = flp_pf_utils_joinswap("-", str_sign_spce, LEFT);
	else if (tab->sign == (int) '+')
		str_sign_spce = flp_pf_utils_joinswap("+", str_sign_spce, LEFT);
	else if (tab->spce)
		str_sign_spce = flp_pf_utils_joinswap(" ", str_sign_spce, LEFT);
	free(s);
	return (str_sign_spce);
}

char	*flp_pf_hash_handler(char *s, char x)
{
	char	*str_hash;

	str_hash = ft_strdup(s);
	if (x == 'x')
		str_hash = flp_pf_utils_joinswap("0x", str_hash, LEFT);
	else if (x == 'X')
		str_hash = flp_pf_utils_joinswap("0X", str_hash, LEFT);
	free(s);
	return (str_hash);
}
