#include <stdio.h>
#include <limits.h>
#include "ft_printf_bonus.h"

int	main(int argc, char **argv)
{
	printf(" %i %i %i %i %i %i %i", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %-i %-i %-i %-i %-i %-i %-i", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %-9i %-10i %-11i %-12i %-13i %-14i %-15i", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %0i %0i %0i %0i %0i %0i %0i", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %09i %010i %011i %012i %013i %014i %015i", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %0-0----0000----0000009i %0-0----0000----00000010i %0-0----0000----00000011i %0-0----0000----00000012i %0-0----0000----00000013i %0-0----0000----00000014i %0-0----0000----00000015i", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %9i %10i %11i %12i %13i %14i %15i", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %.9i %.10i %.11i %.12i %.13i %.14i %.15i", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %-19.9i %-20.10i %-21.11i %-22.12i %-23.13i %-24.14i %-25.15i", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %019.9i %020.10i %021.11i %022.12i %023.13i %024.14i %025.15i", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %0-0----0000----00000019.9i %0-0----0000----00000020.10i %0-0----0000----00000021.11i %0-0----0000----00000022.12i %0-0----0000----00000023.13i %0-0----0000----00000024.14i %0-0----0000----00000025.15i", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %+i %+i %+i %+i %+i %+i %+i", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %+9i %+10i %+11i %+12i %+13i %+14i %+15i", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %+-19.9i %+-20.10i %+-21.11i %+-22.12i %+-23.13i %+-24.14i %+-25.15i", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %+019.9i %+020.10i %+021.11i %+022.12i %+023.13i %+024.14i %+025.15i", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %+0-+0--+++--0++000--+++--00000019.9i %+0-+0--+++--0++000--+++--00000020.10i %+0-+0--+++--0++000--+++--00000021.11i %+0-+0--+++--0++000--+++--00000022.12i %+0-+0--+++--0++000--+++--00000023.13i %+0-+0--+++--0++000--+++--00000024.14i %+0-+0--+++--0++000--+++--00000025.15i", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" % i % i % i % i % i % i % i", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" % 9i % 10i % 11i % 12i % 13i % 14i % 15i", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" % -19.9i % -20.10i % -21.11i % -22.12i % -23.13i % -24.14i % -25.15i", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" % -19.39i % -20.40i % -21.41i % -22.i % -23.i % -24.1i % -25.i", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("|% -22.i|", LONG_MIN);
	printf(" % 019.9i % 020.10i % 021.11i % 022.12i % 023.13i % 024.14i % 025.15i", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" % 0- 0-- +++  --0  +++000--   --00000019.9i % 0- 0-- +++  --0  +++000--   --00000020.10i % 0- 0-- +++  --0  +++000--   --00000021.11i % 0- 0-- +++  --0  +++000--   --00000022.12i % 0- 0-- +++  --0  +++000--   --00000023.13i % 0- 0-- +++  --0  +++000--   --00000024.14i % 0- 0-- +++  --0  +++000--   --00000025.15i", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("%.0i", 0);
	printf("%");

	return (0);
}
