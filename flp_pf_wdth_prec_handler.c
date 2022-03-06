/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flp_pf_wdth_prec_handler.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiaparec <fiaparec@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 06:18:32 by fiaparec          #+#    #+#             */
/*   Updated: 2022/03/06 07:15:42 by fiaparec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf_bonus.h"

char	*flp_pf_prec_handler(t_print *tab, char *s)
{
	char	*str_prec;

	str_prec = ft_strdup(s);
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
