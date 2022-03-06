/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flp_pf_flag_handler.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiaparec <fiaparec@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 07:04:02 by fiaparec          #+#    #+#             */
/*   Updated: 2022/03/06 07:19:48 by fiaparec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf_bonus.h"

char	*flp_pf_dash_handler(t_print *tab, char *s, char sign)
{
	char	*str_dash;

	str_dash = ft_strdup(s);
	if (tab->wdth > 0 && (sign == '-' || sign == '+' || tab->spce))
		tab->wdth -= 1;
	if (tab->wdth > 0 && tab->hash)
		tab->wdth -= 2;
	while (ft_strlen(str_dash) < (size_t)tab->wdth)
		str_dash = flp_pf_utils_joinswap(str_dash, " ", 0);
	free(s);
	return (str_dash);
}

char	*flp_pf_zero_handler(t_print *tab, char *s, char sign, char *fill)
{
	char	*str_zero;

	str_zero = ft_strdup(s);
	if (tab->wdth > 0 && (sign == '-' || sign == '+' || tab->spce))
		tab->wdth -= 1;
	if (tab->wdth > 0 && tab->hash)
		tab->wdth -= 2;
	while (ft_strlen(str_zero) < (size_t)tab->wdth)
		str_zero = flp_pf_utils_joinswap(fill, str_zero, 1);
	free(s);
	return (str_zero);
}

char	*flp_pf_sign_handler(char *s, char sign)
{
	char	*str_sign;

	str_sign = ft_strdup(s);
	if (sign == '-')
		str_sign = flp_pf_utils_joinswap("-", str_sign, 1);
	else if (sign == '+')
		str_sign = flp_pf_utils_joinswap("+", str_sign, 1);
	else
		return (NULL);
	free(s);
	return (str_sign);
}

char	*flp_pf_spce_handler(char *s, char sign)
{
	char	*str_spce;

	str_spce = ft_strdup(s);
	if (sign != '-')
		str_spce = flp_pf_utils_joinswap(" ", str_spce, 1);
	free(s);
	return (str_spce);
}

char	*flp_pf_hash_handler(char *s, char x)
{
	char	*str_hash;

	str_hash = ft_strdup(s);
	if (x == 'x')
		str_hash = flp_pf_utils_joinswap("0x", str_hash, 1);
	else if (x == 'X')
		str_hash = flp_pf_utils_joinswap("0X", str_hash, 1);
	else
		return (NULL);
	free(s);
	return (str_hash);
}
