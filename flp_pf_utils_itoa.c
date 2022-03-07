/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flp_pf_utils_itoa.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiaparec <fiaparec@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 15:34:11 by fiaparec          #+#    #+#             */
/*   Updated: 2022/03/07 20:27:40 by fiaparec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	flp_pf_utils_intlen_base_ul(unsigned int n, int base)
{
	int	len;

	if (n > 0)
		len = 0;
	else
		len = 1;
	while (n != 0)
	{
		len++;
		n /= base;
	}
	return (len);
}

char	*flp_pf_utils_itoa_base_ul(unsigned int n, int base, char conv)
{
	int		len;
	char	*nptr;

	len = flp_intlen_base(n, base);
	nptr = (char *)malloc(sizeof(char) * (len + 1));
	if (!nptr)
		return (NULL);
	if (n == 0 && ft_strlcpy(nptr, "0\0", 2))
		return (nptr);
	*(nptr + len) = '\0';
	while (n > 0)
	{
		len--;
		if (base == 10 || (base == 16 && (n % base) < 10))
			*(nptr + len) = n % base + '0';
		else if (base == 16)
		{
			if (conv == 'x' || conv == 'p')
				*(nptr + len) = n % base + 55;
			else if (conv == 'X')
				*(nptr + len) = n % base + 87;
		}
		n /= base;
	}
	return (nptr);
}
