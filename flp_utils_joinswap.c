/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flp_utils_joinswap.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiaparec <fiaparec@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 15:34:11 by fiaparec          #+#    #+#             */
/*   Updated: 2022/03/04 06:10:43 by fiaparec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft/libft.h"
#include "ft_printf_bonus.h"

char	*flp_utils_joinswap(char *s1, const char *s2)
{
	size_t	i;
	size_t	j;
	char	*s_join;

	if (!s1)
	{
		s1 = (char *)malloc(sizeof(char));
		*s1 = '\0';
	}
	if (!s1 || !s2)
		return (NULL);
	s_join = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!s_join)
		return (NULL);
	i = 0;
	j = 0;
	while (*(s1 + i))
		*(s_join + j++) = *(s1 + i++);
	i = 0;
	while (*(s2 + i))
		*(s_join + j++) = *(s2 + i++);
	*(s_join + j) = '\0';
	free(s1);
	return (s_join);
}

char	*flp_utils_joinswap_reverse(const char *s1, char *s2)
{
	size_t	i;
	size_t	j;
	char	*s_join;

	if (!s2)
	{
		s2 = (char *)malloc(sizeof(char));
		*s2 = '\0';
	}
	if (!s1 || !s2)
		return (NULL);
	s_join = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!s_join)
		return (NULL);
	i = 0;
	j = 0;
	while (*(s1 + i))
		*(s_join + j++) = *(s1 + i++);
	i = 0;
	while (*(s2 + i))
		*(s_join + j++) = *(s2 + i++);
	*(s_join + j) = '\0';
	free(s2);
	return (s_join);
}

char	*flp_utils_substrswap (char *s)
{
	char	*s_substr;

	s_substr = ft_substr(s, 1, ft_strlen(s));
	free(s);
	return (s_substr);
}
