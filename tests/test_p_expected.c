#include <stdio.h>
#include <limits.h>
#include "../bonus/ft_printf_bonus.h"

int	main(void)
{
	printf(" %p %p %p %p", (void *)ULONG_MAX, (void *)INT_MIN, (void *)0, (void *)-42);
	printf(" %-p %-p %-p %-p", (void *)ULONG_MAX, (void *)INT_MIN, (void *)0, (void *)-42);
	printf(" %-10p %-11p %-12p %-13p", (void *)ULONG_MAX, (void *)INT_MIN, (void *)0, (void *)-42);
	printf(" %10p %11p %12p %13p", (void *)ULONG_MAX, (void *)INT_MIN, (void *)0, (void *)-42);

	return (0);
}
