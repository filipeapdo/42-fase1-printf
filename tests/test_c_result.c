#include <stdio.h>
#include <limits.h>
#include "../bonus/ft_printf_bonus.h"

int	main(void)
{
	ft_printf(" %c %c %c %c %c %c %c", '3', '2', '0' - 256, '0' + 256, '1', 0, '0');
	ft_printf(" %10c %11c %12c %13c %14c %15c %16c", '3', '2', '0' - 256, '0' + 256, '1', 0, '0');
	ft_printf(" %-10c %-11c %-12c %-13c %-14c %-15c %-16c", '3', '2', '0' - 256, '0' + 256, '1', 0, '0');
	return (0);
}
