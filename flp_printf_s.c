/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flp_printf_s.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiaparec <fiaparec@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 10:50:15 by fiaparec          #+#    #+#             */
/*   Updated: 2022/02/28 15:05:34 by fiaparec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

int	flp_printf_s(char *s)
{
	if (!s)
	{
		ft_putstr_fd("(null)", 1);
		return(6);
	}
	ft_putstr_fd(s, 1);
	return (ft_strlen(s));
}
