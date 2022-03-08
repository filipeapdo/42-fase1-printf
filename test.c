#include <stdio.h>
#include <limits.h>
#include "ft_printf_bonus.h"

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 0;

	printf(" %+-19.9u %+-20.10u %+-21.11u %+-22.12u %+-23.13u %+-24.14u %+-25.15u", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("\n");
	ft_printf(" %+-19.9u %+-20.10u %+-21.11u %+-22.12u %+-23.13u %+-24.14u %+-25.15u", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("\n");

	return (0);
}
