#include <stdio.h>
#include <limits.h>
#include "../bonus/ft_printf_bonus.h"

int	main(void)
{
	printf(" %d %d %d %d", INT_MAX, INT_MIN, 0, -42);
	printf(" %-d %-d %-d %-d", INT_MAX, INT_MIN, 0, -42);
	printf(" %-10d %-11d %-12d %-13d", INT_MAX, INT_MIN, 0, -42);
	printf(" %0d %0d %0d %0d", INT_MAX, INT_MIN, 0, -42);
	printf(" %010d %011d %012d %013d", INT_MAX, INT_MIN, 0, -42);
	printf(" %10d %11d %12d %13d", INT_MAX, INT_MIN, 0, -42);
	printf(" %.10d %.11d %.12d %.13d", INT_MAX, INT_MIN, 0, -42);
	printf(" %-10.10d %-20.11d %-30.12d %-1.13d", INT_MAX, INT_MIN, 0, -42);
	printf(" %+d %+d %+d %+d", INT_MAX, INT_MIN, 0, -42);
	printf(" %+10d %+11d %+12d %+13d", INT_MAX, INT_MIN, 0, -42);
	printf(" %+-10d %+-11d %+-12d %+-13d", INT_MAX, INT_MIN, 0, -42);
	printf(" %+-10.10d %+-20.11d %+-30.12d %+-1.13d", INT_MAX, INT_MIN, 0, -42);
	printf(" % d % d % d % d", INT_MAX, INT_MIN, 0, -42);
	printf(" % 10d % 11d % 12d % 13d", INT_MAX, INT_MIN, 0, -42);
	printf(" % -10d % -11d % -12d % -13d", INT_MAX, INT_MIN, 0, -42);
	printf(" % -10.10d % -20.11d % -30.12d % -1.13d", INT_MAX, INT_MIN, 0, -42);
	printf("%.0d", 0);

	return (0);
}
