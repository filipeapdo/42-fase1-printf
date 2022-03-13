#include <stdio.h>
#include <limits.h>
#include "../bonus/ft_printf_bonus.h"

int	main(void)
{
	printf(" %i %i %i %i", INT_MAX, INT_MIN, 0, -42);
	printf(" %-i %-i %-i %-i", INT_MAX, INT_MIN, 0, -42);
	printf(" %-10i %-11i %-12i %-13i", INT_MAX, INT_MIN, 0, -42);
	printf(" %0i %0i %0i %0i", INT_MAX, INT_MIN, 0, -42);
	printf(" %010i %011i %012i %013i", INT_MAX, INT_MIN, 0, -42);
	printf(" %10i %11i %12i %13i", INT_MAX, INT_MIN, 0, -42);
	printf(" %.10i %.11i %.12i %.13i", INT_MAX, INT_MIN, 0, -42);
	printf(" %-10.10i %-20.11i %-30.12i %-1.13i", INT_MAX, INT_MIN, 0, -42);	
	printf(" %+i %+i %+i %+i", INT_MAX, INT_MIN, 0, -42);
	printf(" %+10i %+11i %+12i %+13i", INT_MAX, INT_MIN, 0, -42);
	printf(" %+-10i %+-11i %+-12i %+-13i", INT_MAX, INT_MIN, 0, -42);
	printf(" %+-10.10i %+-20.11i %+-30.12i %+-1.13i", INT_MAX, INT_MIN, 0, -42);
	printf(" % i % i % i % i", INT_MAX, INT_MIN, 0, -42);
	printf(" % 10i % 11i % 12i % 13i", INT_MAX, INT_MIN, 0, -42);
	printf(" % -10i % -11i % -12i % -13i", INT_MAX, INT_MIN, 0, -42);
	printf(" % -10.10i % -20.11i % -30.12i % -1.13i", INT_MAX, INT_MIN, 0, -42);
	printf("%.0i", 0);

	return (0);
}
