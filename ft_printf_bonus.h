/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiaparec <fiaparec@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 08:01:45 by fiaparec          #+#    #+#             */
/*   Updated: 2022/03/04 07:33:43 by fiaparec         ###   ########.fr       */
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
	int		sign;
	int		spce;
	int		hash;
	int		wdth;
	int		prec;
}	t_print;

// ft_printf main function
int		ft_printf(const char *format, ...);

// conversions
int		flp_printf_c(t_print *tab, char c);
int		flp_printf_s(t_print *tab, char *s);
int		flp_printf_p(unsigned long int n);
int		flp_printf_d(t_print *tab, int n);
int		flp_printf_i(int n);
int		flp_printf_u(unsigned int n);
int		flp_printf_x(unsigned int n);
int		flp_printf_uppx(unsigned int n);
int		flp_printf_percent(void);

// flags, wdth, prec identifier
int		flp_pf_flag(t_print *tab, const char *format, int pos, char flag);
int		flp_pf_wdth_prec(t_print *tab, const char *format, int pos, char prec);

// flags, wdth, prec handler
char	*flp_pf_prec_handler(t_print *tab, char *s);
char	*flp_pf_dash_handler(t_print *tab, char *s, char sign);
char	*flp_pf_zero_handler(t_print *tab, char *s, char sign);
char	*flp_pf_wdth_handler(t_print *tab, char *s, char sign);

// utils
char	*flp_pf_utils_joinswap(char *s1, char *s2, int	reverse);
char	*flp_pf_utils_substrswap (char *s, int start, int len);

#endif
