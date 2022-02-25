/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiaparec <fiaparec@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 10:26:15 by fiaparec          #+#    #+#             */
/*   Updated: 2022/02/25 15:57:57 by fiaparec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/src/libft.h"
#include "libftprintf.h"

static void	flp_check_type(char c, va_list ptr)
{
	// char	crt;

	if (c == 'c')
	{
		ft_putchar_fd(va_arg(ptr, int), 1);
	}
}

int	ft_printf(const char *list, ...)
{
	int		i;
	// char	c;
	char 	*str;
	va_list	ptr;

	// va_start
	va_start(ptr, list);

	str = ft_strdup(list);

	i = 0;
	while (*(str + i))
	{
		if (*(str + i) == '%')
		{
			// chamar alguma função para o str++
			i++;
			flp_check_type(*(str + i++), ptr);
		}
		else
		{
			ft_putchar_fd(*(str + i++), 1);
		}
	}

	free(str);

	// va_end
	va_end(ptr);

	return (0);
}
