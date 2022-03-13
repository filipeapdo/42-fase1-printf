#include <stdio.h>
#include <limits.h>
#include "../bonus/ft_printf_bonus.h"

int	main(int argc, char **argv)
{
	int	i;
	int	j;

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

	ft_printf(" %c %c %c %c %c %c %c", '3', '2', '0' - 256, '0' + 256, '1', 0, '0');
	ft_printf(" %10c %11c %12c %13c %14c %15c %16c", '3', '2', '0' - 256, '0' + 256, '1', 0, '0');
	ft_printf(" %-10c %-11c %-12c %-13c %-14c %-15c %-16c", '3', '2', '0' - 256, '0' + 256, '1', 0, '0');
	
	// i = printf(" %09p %010p %011p %012p %013p %014p %015p", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// printf("\n");
	// j = ft_printf(" %09p %010p %011p %012p %013p %014p %015p", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// printf("\n%d=%d\n\n", i, j);

	return (0);
}
