#include <stdio.h>
#include <limits.h>
#include "ft_printf_bonus.h"

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 0;

	i = printf("%%%");
	printf("\n");
	j = ft_printf("%%%");
	printf("\n%d=%d\n\n", i, j);

	return (0);
}
