/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flp_printf_s.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiaparec <fiaparec@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 10:50:15 by fiaparec          #+#    #+#             */
/*   Updated: 2022/03/06 17:12:05 by fiaparec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	flp_printf_s(t_print *tab, char *s)
{
	if (!s)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	ft_putstr_fd(s, 1);
	tab->rtrn += ft_strlen(s);
	return (tab->rtrn);
}
