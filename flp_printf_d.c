/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flp_printf_d.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiaparec <fiaparec@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 15:05:29 by fiaparec          #+#    #+#             */
/*   Updated: 2022/03/01 17:35:39 by fiaparec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft/libft.h"
#include "ft_printf_bonus.h"

int	flp_printf_d(t_print *tab, int n)
{
	char	*str1;

	str1 = ft_itoa(n);
	if (ft_strlen(str1) < (size_t)tab->wdth)
	{
		if (tab->dash)
			while (ft_strlen(str1) < (size_t)tab->wdth)
				str1 = flp_utils_joinswap(str1, " ");
		else
			while (ft_strlen(str1) < (size_t)tab->wdth)
				str1 = flp_utils_joinswap_reverse(" ", str1);
	}
	tab->rtrn += flp_printf_s(str1);
	free(str1);
	return (tab->rtrn);
}
