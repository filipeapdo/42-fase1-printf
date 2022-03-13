#include <stdio.h>
#include <limits.h>
#include "../bonus/ft_printf_bonus.h"

int	main(void)
{
	ft_printf(" %u %u %u %u", UINT_MAX, INT_MIN, 0, -42);
	ft_printf(" %-u %-u %-u %-u", UINT_MAX, INT_MIN, 0, -42);
	ft_printf(" %-10u %-11u %-12u %-13u", UINT_MAX, INT_MIN, 0, -42);
	ft_printf(" %0u %0u %0u %0u", UINT_MAX, INT_MIN, 0, -42);
	ft_printf(" %010u %011u %012u %013u", UINT_MAX, INT_MIN, 0, -42);
	ft_printf(" %10u %11u %12u %13u", UINT_MAX, INT_MIN, 0, -42);
	ft_printf(" %.10u %.11u %.12u %.13u", UINT_MAX, INT_MIN, 0, -42);
	ft_printf(" %-10.10u %-20.11u %-30.12u %-1.13u", UINT_MAX, INT_MIN, 0, -42);
	ft_printf("%.0u", 0);

	return (0);
}
