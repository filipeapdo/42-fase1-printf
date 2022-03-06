#include <stdio.h>
#include <limits.h>
#include "ft_printf_bonus.h"

int	main(int argc, char **argv)
{
	printf(" %d %d %d %d %d %d %d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %-d %-d %-d %-d %-d %-d %-d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %-9d %-10d %-11d %-12d %-13d %-14d %-15d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %0d %0d %0d %0d %0d %0d %0d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %09d %010d %011d %012d %013d %014d %015d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %0-0----0000----0000009d %0-0----0000----00000010d %0-0----0000----00000011d %0-0----0000----00000012d %0-0----0000----00000013d %0-0----0000----00000014d %0-0----0000----00000015d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %9d %10d %11d %12d %13d %14d %15d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %.9d %.10d %.11d %.12d %.13d %.14d %.15d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %-19.9d %-20.10d %-21.11d %-22.12d %-23.13d %-24.14d %-25.15d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %019.9d %020.10d %021.11d %022.12d %023.13d %024.14d %025.15d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %0-0----0000----00000019.9d %0-0----0000----00000020.10d %0-0----0000----00000021.11d %0-0----0000----00000022.12d %0-0----0000----00000023.13d %0-0----0000----00000024.14d %0-0----0000----00000025.15d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %+d %+d %+d %+d %+d %+d %+d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %+9d %+10d %+11d %+12d %+13d %+14d %+15d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %+-19.9d %+-20.10d %+-21.11d %+-22.12d %+-23.13d %+-24.14d %+-25.15d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %+019.9d %+020.10d %+021.11d %+022.12d %+023.13d %+024.14d %+025.15d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %+0-+0--+++--0++000--+++--00000019.9d %+0-+0--+++--0++000--+++--00000020.10d %+0-+0--+++--0++000--+++--00000021.11d %+0-+0--+++--0++000--+++--00000022.12d %+0-+0--+++--0++000--+++--00000023.13d %+0-+0--+++--0++000--+++--00000024.14d %+0-+0--+++--0++000--+++--00000025.15d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" % d % d % d % d % d % d % d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" % 9d % 10d % 11d % 12d % 13d % 14d % 15d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" % -19.9d % -20.10d % -21.11d % -22.12d % -23.13d % -24.14d % -25.15d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" % -19.39d % -20.40d % -21.41d % -22.d % -23.d % -24.1d % -25.d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("|% -22.d|", LONG_MIN);
	printf(" % 019.9d % 020.10d % 021.11d % 022.12d % 023.13d % 024.14d % 025.15d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" % 0- 0-- +++  --0  +++000--   --00000019.9d % 0- 0-- +++  --0  +++000--   --00000020.10d % 0- 0-- +++  --0  +++000--   --00000021.11d % 0- 0-- +++  --0  +++000--   --00000022.12d % 0- 0-- +++  --0  +++000--   --00000023.13d % 0- 0-- +++  --0  +++000--   --00000024.14d % 0- 0-- +++  --0  +++000--   --00000025.15d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("%.0d", 0);
	printf("%");

	return (0);
}
