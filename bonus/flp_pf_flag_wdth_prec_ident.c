/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flp_pf_flag_wdth_prec_ident.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiaparec <fiaparec@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 07:45:53 by fiaparec          #+#    #+#             */
/*   Updated: 2022/03/13 10:47:41 by fiaparec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	flp_pf_flag_identifier(t_print *tab, int pos, char flag)
{
	if (flag == '-')
		tab->dash = 1;
	else if (flag == '0')
		tab->zero = 1;
	else if (flag == '+')
		tab->sign = 1;
	else if (flag == ' ')
		tab->spce = 1;
	else if (flag == '#')
		tab->hash = 1;
	else
		return (-1);
	return (++pos);
}

int	flp_pf_wdth_prec_identifier(t_print *tab, const char *format,
		int pos, char prec)
{
	char	*str;
	int		length;

	length = 0;
	while (!ft_strchr(".", *(format + pos))
		&& !ft_strchr("cspdiuxX\%", *(format + pos))
		&& ft_strchr("1234567890", *(format + pos)))
	{
		length++;
		pos++;
	}
	str = (char *)malloc(sizeof(char) * length + 1);
	if (!str)
		return (-1);
	ft_strlcpy(str, format + pos - length, length + 1);
	if (prec == '.')
		tab->prec = ft_atoi(str);
	else
		tab->wdth = ft_atoi(str);
	free(str);
	return (pos);
}
