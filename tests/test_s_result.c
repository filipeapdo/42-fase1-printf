#include <stdio.h>
#include <limits.h>
#include "../bonus/ft_printf_bonus.h"

int	main(void)
{
	char *str = NULL;

	ft_printf(" NULL %s NULL ", str);
	ft_printf(" NULL %.0s NULL ", str);
	ft_printf(" NULL %.1s NULL ", str);
	ft_printf(" NULL %.5s NULL ", str);
	ft_printf(" NULL %.2147483647s NULL ", str);
	ft_printf(" NULL %.2147483648s NULL ", str);
	ft_printf(" %s %s %s %s %s", "abc", "123", "", "   ", "qwertyuiop");
	ft_printf(" %.s %.s %.s %.s %.s", "abc", "123", "", "   ", "qwertyuiop");
	ft_printf(" %.10s %.11s %.12s %.13s %.14s", "abc", "123", "", "   ", "qwertyuiop");
	ft_printf(" %-10s %-11s %-12s %-13s %-14s", "abc", "123", "", "   ", "qwertyuiop");
	ft_printf(" %10s %11s %12s %13s %14s", "abc", "123", "", "   ", "qwertyuiop");
	ft_printf(" %-10.100s %-11.100s %-12.100s %-13.100s %-14.100s", "abc", "123", "", "   ", "qwertyuiop");
	ft_printf(" %10.100s %11.100s %12.100s %13.100s %14.100s", "abc", "123", "", "   ", "qwertyuiop");

	return (0);
}
