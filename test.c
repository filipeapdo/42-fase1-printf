#include <stdio.h>
#include <limits.h>
// #include "ft_printf.h"
#include "ft_printf_bonus.h"

int	main(int argc, char **argv)
{
	int	i;

	// i = 0;
	// printf("\n\nargc = %d\n", argc);
	// while (i < argc)
	// {
	// 	printf("argv[%d] = %s\n", i, *(argv + i));
	// 	i++;
	// }
	printf("\n\n");

	i = 0;
	i = printf(" %-9d %-10d %-11d %-12d %-13d %-14d %-15d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("\n### i = %d\n\n", i);
	i = ft_printf(" %-9d %-10d %-11d %-12d %-13d %-14d %-15d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("\n### i = %d\n\n", i);
	// i = printf("%-10.10d|", 101);
	// printf("\n### i = %d\n\n", i);
	// i = printf(" %+.10d ", 2);
	// printf("\n### i = %d\n\n", i);
	// i = printf(" %+9d ", INT_MAX);
	// printf("\n### i = %d\n\n", i);
	// i = ft_printf("\0");
	// printf("\n### i = %d\n\n", i);
	
	printf("\n\n");

	return (0);
}