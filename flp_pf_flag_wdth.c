/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flp_pf_flag_wdth.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiaparec <fiaparec@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 16:59:39 by fiaparec          #+#    #+#             */
/*   Updated: 2022/03/03 06:29:18 by fiaparec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft/libft.h"
#include "ft_printf_bonus.h"

int	flp_pf_flag_wdth(t_print *tab, const char *format, int pos)
{
	char		*str_width;
	int			width;

	width = 0;
	while (!ft_strchr(".", *(format + pos))
		&& !ft_strchr("cspdiuxX\%", *(format + pos))
		&& ft_strchr("1234567890", *(format + pos)))
	{
		width++;
		pos++;
	}
	str_width = (char *)malloc(sizeof(char) * width + 1);
	if (!str_width)
		return (-1);
	ft_strlcpy(str_width, format + pos - width, width + 1);
	tab->wdth = ft_atoi(str_width);
	free(str_width);
	return (pos);
}
