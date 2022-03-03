/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flp_pf_flag_zero.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiaparec <fiaparec@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 06:41:00 by fiaparec          #+#    #+#             */
/*   Updated: 2022/03/03 06:41:47 by fiaparec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft/libft.h"
#include "ft_printf_bonus.h"

int	flp_pf_flag_zero(t_print *tab, const char *format, int pos)
{
	tab->zero = 1;
	while (*(format + pos) == '0')
		pos++;
	return (pos);
}
