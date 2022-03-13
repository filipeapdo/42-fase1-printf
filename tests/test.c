#include <stdio.h>
#include <limits.h>
#include "../bonus/ft_printf_bonus.h"

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	// char *str = "NULL";

	i = 0;
	j = 0;

	i = printf("   printf_argc:|%d|", argc);
	printf("\n");
	j = ft_printf("ft_printf_argc:|%d|", argc);
	printf("\n%d=%d\n\n", i, j);

	i = printf("   printf_argv[0]:|%s|", *argv);
	printf("\n");
	j = ft_printf("ft_printf_argv[0]:|%s|", *argv);
	printf("\n%d=%d\n\n", i, j);

	// printf("%.2147483648s\n\n", str);

	i = printf(" %u %u %u %u", UINT_MAX + 10, INT_MIN, 0, -42);
	printf("\n");
	j = ft_printf(" %u %u %u %u", UINT_MAX + 10, INT_MIN, 0, -42);
	printf("\n%d=%d\n\n", i, j);

	return (0);
}
