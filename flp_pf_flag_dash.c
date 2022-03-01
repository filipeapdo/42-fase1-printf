/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flp_pf_flag_dash.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiaparec <fiaparec@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 10:57:49 by fiaparec          #+#    #+#             */
/*   Updated: 2022/03/01 14:31:39 by fiaparec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft/libft.h"
#include "ft_printf_bonus.h"

int	flp_pf_flag_dash(t_print *tab, const char *format, int pos)
{
	static char	*conv_allowed_2 = "cspdiuxX\%";
	static char	*flag_allowed = ".";
	char		*str_width;
	int			width;

	tab->dash = 1;
	width = 0;
	while (!ft_strchr(flag_allowed, *(format + pos))
		&& !ft_strchr(conv_allowed_2, *(format + pos)))
	{
		if (*(format + pos) == '-')
			pos++;
		else
		{
			width++;
			pos++;
		}
	}
	str_width = (char *)malloc(sizeof(char) * width + 1);
	if (!str_width)
		return (-1);
	ft_strlcpy(str_width, format + pos - width, width + 1);
	tab->wdth = ft_atoi(str_width);
	free(str_width);
	return (pos);
}
