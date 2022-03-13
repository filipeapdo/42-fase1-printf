#include <stdio.h>
#include <limits.h>
#include "../bonus/ft_printf_bonus.h"

int	main(void)
{
	ft_printf(" %X %X %X %X", UINT_MAX, INT_MIN, 0, -42);
	ft_printf(" %-X %-X %-X %-X", UINT_MAX, INT_MIN, 0, -42);
	ft_printf(" %-10X %-11X %-12X %-13X", UINT_MAX, INT_MIN, 0, -42);
	ft_printf(" %0X %0X %0X %0X", UINT_MAX, INT_MIN, 0, -42);
	ft_printf(" %010X %011X %012X %013X", UINT_MAX, INT_MIN, 0, -42);
	ft_printf(" %10X %11X %12X %13X", UINT_MAX, INT_MIN, 0, -42);
	ft_printf(" %.10X %.11X %.12X %.13X", UINT_MAX, INT_MIN, 0, -42);
	ft_printf(" %-10.10X %-20.11X %-30.12X %-1.13X", UINT_MAX, INT_MIN, 0, -42);
	ft_printf(" %#X %#X %#X %#X", UINT_MAX, INT_MIN, 0, -42);
	ft_printf(" %#10X %#11X %#12X %#13X", UINT_MAX, INT_MIN, 0, -42);
	ft_printf(" %#-10X %#-11X %#-12X %#-13X", UINT_MAX, INT_MIN, 0, -42);
	ft_printf(" %#010X %#011X %#012X %#013X", UINT_MAX, INT_MIN, 0, -42);
	ft_printf(" %#.10X %#.11X %#.12X %#.13X", UINT_MAX, INT_MIN, 0, -42);
	ft_printf(" %#-10.10X %#-20.11X %#-30.12X %#-1.13X", UINT_MAX, INT_MIN, 0, -42);
	ft_printf("%.0X", 0);
	ft_printf("%#.0X", 0);

	return (0);
}
