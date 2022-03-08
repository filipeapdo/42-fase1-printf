/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flp_printf_percent.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiaparec <fiaparec@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 10:27:48 by fiaparec          #+#    #+#             */
/*   Updated: 2022/03/08 07:12:28 by fiaparec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	flp_printf_percent(t_print *tab)
{
	ft_putchar_fd('%', 1);
	tab->rtrn += 1;
	return (tab->rtrn);
}
