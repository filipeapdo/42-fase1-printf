#include <stdio.h>
#include <limits.h>
#include "../bonus/ft_printf_bonus.h"

int	main(void)
{
	printf(" %x %x %x %x", UINT_MAX, INT_MIN, 0, -42);
	printf(" %-x %-x %-x %-x", UINT_MAX, INT_MIN, 0, -42);
	printf(" %-10x %-11x %-12x %-13x", UINT_MAX, INT_MIN, 0, -42);
	printf(" %0x %0x %0x %0x", UINT_MAX, INT_MIN, 0, -42);
	printf(" %010x %011x %012x %013x", UINT_MAX, INT_MIN, 0, -42);
	printf(" %10x %11x %12x %13x", UINT_MAX, INT_MIN, 0, -42);
	printf(" %.10x %.11x %.12x %.13x", UINT_MAX, INT_MIN, 0, -42);
	printf(" %-10.10x %-20.11x %-30.12x %-1.13x", UINT_MAX, INT_MIN, 0, -42);
	printf(" %#x %#x %#x %#x", UINT_MAX, INT_MIN, 0, -42);
	printf(" %#10x %#11x %#12x %#13x", UINT_MAX, INT_MIN, 0, -42);
	printf(" %#-10x %#-11x %#-12x %#-13x", UINT_MAX, INT_MIN, 0, -42);
	printf(" %#010x %#011x %#012x %#013x", UINT_MAX, INT_MIN, 0, -42);
	printf(" %#.10x %#.11x %#.12x %#.13x", UINT_MAX, INT_MIN, 0, -42);
	printf(" %#-10.10x %#-20.11x %#-30.12x %#-1.13x", UINT_MAX, INT_MIN, 0, -42);
	printf("%.0x", 0);
	printf("%#.0x", 0);

	return (0);
}
