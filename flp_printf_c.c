/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flp_printf_c.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiaparec <fiaparec@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 09:35:17 by fiaparec          #+#    #+#             */
/*   Updated: 2022/03/03 19:44:27 by fiaparec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf_bonus.h"

int	flp_printf_c(t_print *tab, char c)
{
	ft_putchar_fd(c, 1);
	tab->rtrn += 1;
	return (tab->rtrn);
}
