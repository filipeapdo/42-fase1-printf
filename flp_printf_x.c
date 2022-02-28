/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flp_printf_x.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiaparec <fiaparec@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 16:24:33 by fiaparec          #+#    #+#             */
/*   Updated: 2022/02/28 18:07:14 by fiaparec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

static int	flp_intlen_u(unsigned int n)
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

static char	*flp_itox_u(unsigned int n)
{
	int		len;
	char	*nptr;

	len = flp_intlen_u(n);
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

int	flp_printf_x(unsigned int n)
{
	int		cnt;
	char	*str;

	cnt = 0;
	str = flp_itox_u(n);
	cnt = flp_printf_s(str);
	free(str);
	return (cnt);
}
