#include <stdio.h>
#include <limits.h>
#include "ft_printf_bonus.h"

int	main(int argc, char **argv)
{
	printf(" %c %c %c %c %c %c %c", '3', '2', '0' - 256, '0' + 256, '1', 0, '0');
	printf("%.0c", 0);
	printf("%");

	return (0);
}
