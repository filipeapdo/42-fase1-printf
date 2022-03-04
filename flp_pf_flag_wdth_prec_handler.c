/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flp_pf_flag_wdth_prec_handler.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiaparec <fiaparec@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 06:18:32 by fiaparec          #+#    #+#             */
/*   Updated: 2022/03/04 07:10:21 by fiaparec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf_bonus.h"

char	*flp_pf_prec_handler(t_print *tab, char *s)
{
	char *str_prec;

	str_prec = ft_strdup(s);
	while (ft_strlen(str_prec) < (size_t)tab->prec)
		str_prec = flp_utils_joinswap_reverse("0", str_prec);
	free(s);
	return (str_prec);
}

char *flp_pf_dash_handler(t_print *tab, char *s, char sign)
{
	char *str_dash;
	
	str_dash = ft_strdup(s);
	if (sign == '-')
		str_dash = flp_utils_joinswap_reverse("-", str_dash);
	else if (sign == '+')
		str_dash = flp_utils_joinswap_reverse("+", str_dash);
	while (ft_strlen(str_dash) < (size_t)tab->wdth)
		str_dash = flp_utils_joinswap(str_dash, " ");
	free(s);
	return (str_dash);
}

char *flp_pf_zero_handler(t_print *tab, char *s, char sign)
{
	char *str_zero;

	str_zero = ft_strdup(s);
	if (tab->wdth > 0 && (sign == '-' || sign == '+'))
		tab->wdth--;
	while (ft_strlen(str_zero) < (size_t)tab->wdth)
		str_zero = flp_utils_joinswap_reverse("0", str_zero);
	if (sign == '-')
		str_zero = flp_utils_joinswap_reverse("-", str_zero);
	else if (sign == '+')
		str_zero = flp_utils_joinswap_reverse("+", str_zero);
	free(s);
	return (str_zero);
}

char *flp_pf_wdth_handler(t_print *tab, char *s, char sign)
{
	char *str_wdth;

	str_wdth = ft_strdup(s);
	if (sign == '-')
		str_wdth = flp_utils_joinswap_reverse("-", str_wdth);
	else if (sign == '+')
		str_wdth = flp_utils_joinswap_reverse("+", str_wdth);
	while (ft_strlen(str_wdth) < (size_t)tab->wdth)
		str_wdth = flp_utils_joinswap_reverse(" ", str_wdth);
	free(s);
	return (str_wdth);
}
