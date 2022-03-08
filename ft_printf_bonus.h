/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiaparec <fiaparec@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 08:01:45 by fiaparec          #+#    #+#             */
/*   Updated: 2022/03/08 07:11:44 by fiaparec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_BONUS_H
# define FT_PRINTF_BONUS_H

# include <stdarg.h>
# include "libft/libft.h"

typedef struct s_print
{
	va_list	args;
	int		rtrn;
	int		dash;
	int		zero;
	int		sign;
	int		spce;
	int		hash;
	int		wdth;
	int		prec;
}	t_print;

// ft_printf main function
int		ft_printf(const char *format, ...);

// flags, wdth, prec identifier
int		flp_pf_flag_identifier(t_print *tab, const char *format,
			int pos, char flag);
int		flp_pf_wdth_prec_identifier(t_print *tab, const char *format,
			int pos, char prec);

// flags handler
char	*flp_pf_dash_zero_handler(t_print *tab, char *s, char *fill);
char	*flp_pf_sign_spce_handler(t_print *tab, char *s);
char	*flp_pf_hash_handler(char *s, char x);

// wdth, prec handler
char	*flp_pf_prec_handler(t_print *tab, char *s);
char	*flp_pf_wdth_handler(t_print *tab, char *s);

// utils
char	*flp_pf_utils_joinswap(char *s1, char *s2, int reverse);
char	*flp_pf_utils_substrswap(char *s, int start, int len);
int		flp_pf_utils_intlen_base_ul(unsigned long int n, int base);
char	*flp_pf_utils_itoa_base_ul(unsigned long int n, int base, char conv);

// conversions
int		flp_printf_c(t_print *tab, char c);
int		flp_printf_s(t_print *tab, char *s);
int		flp_printf_p(unsigned long int n);
int		flp_printf_d(t_print *tab, int n);
int		flp_printf_i(t_print *tab, int n);
int		flp_printf_u(t_print *tab, unsigned int n);
int		flp_printf_x(t_print *tab, unsigned int n);
int		flp_printf_uppx(unsigned int n);
int		flp_printf_percent(t_print *tab);

#endif
