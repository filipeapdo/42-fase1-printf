/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiaparec <fiaparec@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 10:30:52 by fiaparec          #+#    #+#             */
/*   Updated: 2022/03/12 19:43:56 by fiaparec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

int	ft_printf(const char *format, ...);
int	flp_printf_c(char c);
int	flp_printf_s(char *s);
int	flp_printf_p(unsigned long int n);
int	flp_printf_d(int n);
int	flp_printf_i(int n);
int	flp_printf_u(unsigned int n);
int	flp_printf_x(unsigned int n);
int	flp_printf_uppx(unsigned int n);
int	flp_printf_percent(void);

#endif
