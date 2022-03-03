/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flp_printf_d.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiaparec <fiaparec@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 15:05:29 by fiaparec          #+#    #+#             */
/*   Updated: 2022/03/03 08:03:30 by fiaparec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft/libft.h"
#include "ft_printf_bonus.h"

static char	*flp_handle_signal_flag(t_print *tab, char *s)
{
	char	*s_signal;

	s_signal = ft_substr(s, 1, ft_strlen(s));
	tab->wdth--;
	while (ft_strlen(s_signal) < (size_t)tab->wdth)
		s_signal = flp_utils_joinswap_reverse("0", s_signal);
	if (*s == '-')
		s_signal = flp_utils_joinswap_reverse("-", s_signal);
	else
		s_signal = flp_utils_joinswap_reverse("+", s_signal);
	free(s);
	return (s_signal);
}

static char	*flp_handle_signal_prec(t_print *tab, char *s)
{
	char	*s_signal;

	s_signal = ft_substr(s, 1, ft_strlen(s));
	while (ft_strlen(s_signal) < (size_t)tab->prec)
		s_signal = flp_utils_joinswap_reverse("0", s_signal);
	if (*s == '-')
		s_signal = flp_utils_joinswap_reverse("-", s_signal);
	else
		s_signal = flp_utils_joinswap_reverse("+", s_signal);
	free(s);
	return (s_signal);
}

int	flp_printf_d(t_print *tab, int n)
{
	char	*str1;

	str1 = ft_itoa(n);
	if (tab->prec > 0)
	{
		if (*str1 == '-' || *str1 == '+')
			str1 = flp_handle_signal_prec(tab, str1);
		else
			while (ft_strlen(str1) < (size_t)tab->prec)
				str1 = flp_utils_joinswap_reverse("0", str1);
	}
	if (ft_strlen(str1) < (size_t)tab->wdth)
	{
		if (tab->dash)
			while (ft_strlen(str1) < (size_t)tab->wdth)
				str1 = flp_utils_joinswap(str1, " ");
		else if (tab->zero && !tab->dash && !tab->prec)
		{	
			if (*str1 == '-' || *str1 == '+')
				str1 = flp_handle_signal_flag(tab, str1);
			else
				while (ft_strlen(str1) < (size_t)tab->wdth)
					str1 = flp_utils_joinswap_reverse("0", str1);
		}
		else
			while (ft_strlen(str1) < (size_t)tab->wdth)
				str1 = flp_utils_joinswap_reverse(" ", str1);
	}
	tab->rtrn += flp_printf_s(str1);
	free(str1);
	return (tab->rtrn);
}
