/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flp_printf_d.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiaparec <fiaparec@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 15:05:29 by fiaparec          #+#    #+#             */
/*   Updated: 2022/02/28 15:12:35 by fiaparec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

int	flp_printf_d(int n)
{
	int		cnt;
	char	*str;

	cnt = 0;
	str = ft_itoa(n);
	cnt = flp_printf_s(str);
	free(str);
	return (cnt);
}
