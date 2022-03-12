#include <stdio.h>
#include <limits.h>
#include "ft_printf_bonus.h"

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 0;

	i = printf(" %+p %+p %+p %+p %+p %+p %+p", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("\n");
	j = ft_printf(" %+p %+p %+p %+p %+p %+p %+p", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("\n%d=%d\n\n", i, j);
	
	// i = printf(" %.9p %.10p %.11p %.12p %.13p %.14p %.15p", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// printf("\n");
	// j = ft_printf(" %.9p %.10p %.11p %.12p %.13p %.14p %.15p", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// printf("\n%d=%d\n\n", i, j);
	
	// i = printf(" %09p %010p %011p %012p %013p %014p %015p", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// printf("\n");
	// j = ft_printf(" %09p %010p %011p %012p %013p %014p %015p", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// printf("\n%d=%d\n\n", i, j);

	return (0);
}
