/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flp_pf_wdth_prec_handler.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiaparec <fiaparec@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 06:18:32 by fiaparec          #+#    #+#             */
/*   Updated: 2022/03/07 21:05:47 by fiaparec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

char	*flp_pf_prec_handler(t_print *tab, char *s)
{
	char	*str_prec;

	str_prec = ft_strdup(s);
	if (tab->sign == (int) '-')
		str_prec = flp_pf_utils_substrswap(str_prec, 1, ft_strlen(str_prec));
	while (ft_strlen(str_prec) < (size_t)tab->prec)
		str_prec = flp_pf_utils_joinswap("0", str_prec, 1);
	free(s);
	return (str_prec);
}

char	*flp_pf_wdth_handler(t_print *tab, char *s)
{
	char	*str_wdth;

	str_wdth = ft_strdup(s);
	while (ft_strlen(str_wdth) < (size_t)tab->wdth)
		str_wdth = flp_pf_utils_joinswap(" ", str_wdth, 1);
	free(s);
	return (str_wdth);
}
