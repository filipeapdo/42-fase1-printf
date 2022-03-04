/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flp_pf_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiaparec <fiaparec@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 15:34:11 by fiaparec          #+#    #+#             */
/*   Updated: 2022/03/04 07:33:32 by fiaparec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft/libft.h"
#include "ft_printf_bonus.h"

char	*flp_pf_utils_joinswap(char *s1, char *s2, int	reverse)
{
	char *s_join;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	s_join = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!s_join)
		return (NULL);
	ft_strlcpy(s_join, s1, ft_strlen(s1) + 1);
	ft_strlcat(s_join, s2, ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!reverse)
		free(s1);
	else
		free(s2);
	return (s_join);
}

char	*flp_pf_utils_substrswap (char *s, int start, int len)
{
	char	*s_substr;

	s_substr = ft_substr(s, start, len);
	free(s);
	return (s_substr);
}
