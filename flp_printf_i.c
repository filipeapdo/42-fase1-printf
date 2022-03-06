/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flp_printf_i.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiaparec <fiaparec@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 15:22:27 by fiaparec          #+#    #+#             */
/*   Updated: 2022/03/06 17:13:24 by fiaparec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	flp_printf_i(int n)
{
	int		cnt;
	char	*str;

	cnt = 0;
	str = ft_itoa(n);
	cnt = flp_printf_s(str);
	free(str);
	return (cnt);
}
