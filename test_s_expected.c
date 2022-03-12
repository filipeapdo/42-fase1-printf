#include <stdio.h>
#include <limits.h>
#include "ft_printf_bonus.h"

int	main(int argc, char **argv)
{
	printf(" NULL %s NULL ", NULL);
	printf(" %s %s %s %s %s", "abc", "123", "", "   ", "qwertyuiop");
	printf(" %.s %.s %.s %.s %.s", "abc", "123", "", "   ", "qwertyuiop");
	printf(" %.10c %.11c %.12c %.13c %.14c", "abc", "123", "", "   ", "qwertyuiop");
	printf(" %-10c %-11c %-12c %-13c %-14c", "abc", "123", "", "   ", "qwertyuiop");
	printf(" %010c %011c %012c %013c %014c", "abc", "123", "", "   ", "qwertyuiop");
	printf(" %+10c %+11c %+12c %+13c %+14c", "abc", "123", "", "   ", "qwertyuiop");
	printf(" % 10c % 11c % 12c % 13c % 14c", "abc", "123", "", "   ", "qwertyuiop");
	printf(" %#10c %#11c %#12c %#13c %#14c", "abc", "123", "", "   ", "qwertyuiop");
	printf(" %#-0 +++###-----      100.10c %#-0 +++###-----      100.11c %#-0 +++###-----      100.12c %#-0 +++###-----      100.13c %#-0 +++###-----      100.14c", "abc", "123", "", "   ", "qwertyuiop");
	printf("%.0s", 0);
	printf("%");

	return (0);
}
