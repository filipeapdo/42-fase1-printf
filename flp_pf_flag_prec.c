/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flp_pf_flag_prec.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiaparec <fiaparec@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 07:45:53 by fiaparec          #+#    #+#             */
/*   Updated: 2022/03/03 08:09:42 by fiaparec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft/libft.h"
#include "ft_printf_bonus.h"

int	flp_pf_flag_prec(t_print *tab, const char *format, int pos)
{
	char		*str_prec;
	int			prec;

	prec = 0;
	pos++;
	while (!ft_strchr("cspdiuxX\%", *(format + pos))
		&& ft_strchr("1234567890", *(format + pos)))
	{
		prec++;
		pos++;
	}
	str_prec = (char *)malloc(sizeof(char) * prec + 1);
	if (!str_prec)
		return (-1);
	ft_strlcpy(str_prec, format + pos - prec, prec + 1);
	tab->prec = ft_atoi(str_prec);
	free(str_prec);
	return (pos);
}
