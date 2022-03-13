#include <stdio.h>
#include <limits.h>
#include "../bonus/ft_printf_bonus.h"

int	main(void)
{
	char *str = NULL;

	printf(" NULL %s NULL ", str);
	printf(" NULL %.0s NULL ", str);
	printf(" NULL %.1s NULL ", str);
	printf(" NULL %.5s NULL ", str);
	printf(" NULL %.2147483647s NULL ", str);
	printf(" NULL %.2147483648s NULL ", str);
	printf(" %s %s %s %s %s", "abc", "123", "", "   ", "qwertyuiop");
	printf(" %.s %.s %.s %.s %.s", "abc", "123", "", "   ", "qwertyuiop");
	printf(" %.10s %.11s %.12s %.13s %.14s", "abc", "123", "", "   ", "qwertyuiop");
	printf(" %-10s %-11s %-12s %-13s %-14s", "abc", "123", "", "   ", "qwertyuiop");
	printf(" %10s %11s %12s %13s %14s", "abc", "123", "", "   ", "qwertyuiop");
	printf(" %-10.100s %-11.100s %-12.100s %-13.100s %-14.100s", "abc", "123", "", "   ", "qwertyuiop");
	printf(" %10.100s %11.100s %12.100s %13.100s %14.100s", "abc", "123", "", "   ", "qwertyuiop");

	return (0);
}
