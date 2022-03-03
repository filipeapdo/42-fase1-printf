/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiaparec <fiaparec@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 08:01:45 by fiaparec          #+#    #+#             */
/*   Updated: 2022/03/03 07:46:32 by fiaparec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_BONUS_H
# define FT_PRINTF_BONUS_H

# include <stdarg.h>

typedef struct s_print
{
	va_list	args;
	int		rtrn;
	int		dash;
	int		zero;
	int		hash;
	int		spce;
	int		sign;
	int		wdth;
	int		prec;
}	t_print;

// ft_printf main function
int		ft_printf(const char *format, ...);

// conversion handler
int		flp_pf_conv_hand(t_print *tab, const char *format, int pos);

// conversions
int		flp_printf_c(t_print *tab, char c);
int		flp_printf_s(char *s);
int		flp_printf_p(unsigned long int n);
int		flp_printf_d(t_print *tab, int n);
int		flp_printf_i(int n);
int		flp_printf_u(unsigned int n);
int		flp_printf_x(unsigned int n);
int		flp_printf_uppx(unsigned int n);
int		flp_printf_percent(void);

// flags
int		flp_pf_flag_dash(t_print *tab, const char *format, int pos);
int		flp_pf_flag_zero(t_print *tab, const char *format, int pos);
int		flp_pf_flag_wdth(t_print *tab, const char *format, int pos);
int		flp_pf_flag_prec(t_print *tab, const char *format, int pos);

// utils
char	*flp_utils_joinswap(char *s1, const char *s2);
char	*flp_utils_joinswap_reverse(const char *s1, char *s2);

#endif
