/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiaparec <fiaparec@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 10:26:15 by fiaparec          #+#    #+#             */
/*   Updated: 2022/02/28 15:22:04 by fiaparec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft/libft.h"
#include "ft_printf.h"

static int	flp_check_format(char conv_spec, va_list arg)
{
	int		cnt = 0;

	if (conv_spec == '%')
		cnt += flp_printf_percent();
	else if (conv_spec == 'c')
		cnt += flp_printf_c((char)va_arg(arg, int));
	else if (conv_spec == 's')
		cnt += flp_printf_s((char *)va_arg(arg, void *));
	else if (conv_spec == 'd')
		cnt += flp_printf_d(va_arg(arg, int));
	else if (conv_spec == 'i')
		cnt += flp_printf_i(va_arg(arg, int));
	return (cnt);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		cnt;
	char	*str;
	va_list	arg;

	va_start(arg, format);
	str = ft_strdup(format);
	i = 0;
	cnt = 0;
	while (*(str + i))
	{
		if (*(str + i) == '%')
		{
			i++;
			cnt += flp_check_format(*(str + i++), arg);
		}
		else if (*(str + i) != '\0')
		{
			ft_putchar_fd(*(str + i++), 1);
			cnt++;
		}
	}
	free(str);
	va_end(arg);
	return (cnt);
}
