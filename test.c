#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	printf("\n\nargc = %d\n", argc);
	while (i < argc)
	{
		printf("argv[%d] = %s\n", i, *(argv + i));
		i++;
	}
	printf("\n\n");

	i = 0;
	i = ft_printf("%-10d|", 101);
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