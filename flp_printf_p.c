/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flp_printf_p.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiaparec <fiaparec@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 17:11:31 by fiaparec          #+#    #+#             */
/*   Updated: 2022/03/12 19:44:29 by fiaparec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	flp_intlen_ul(unsigned long int n)
{
	int	len;

	if (n > 0)
		len = 0;
	else
		len = 1;
	while (n != 0)
	{
		len++;
		n /= 16;
	}
	return (len);
}

static char	*flp_itox_ul(unsigned long int n)
{
	int		len;
	char	*nptr;

	len = flp_intlen_ul(n);
	nptr = (char *)malloc(sizeof(char) * (len + 1));
	if (!nptr)
		return (NULL);
	if (n == 0 && ft_strlcpy(nptr, "0\0", 2))
		return (nptr);
	*(nptr + len) = '\0';
	while (n > 0)
	{
		len--;
		if ((n % 16) < 10)
			*(nptr + len) = n % 16 + '0';
		else
			*(nptr + len) = n % 16 + 87;
		n /= 16;
	}
	return (nptr);
}

int	flp_printf_p(unsigned long int n)
{
	int		cnt;
	char	*str;

	if (n == 0)
	{
		ft_putstr_fd("(nil)", 1);
		return (5);
	}
	cnt = 0;
	str = flp_itox_ul(n);
	cnt += flp_printf_s("0x");
	cnt += flp_printf_s(str);
	free(str);
	return (cnt);
}
