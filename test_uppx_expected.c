#include <stdio.h>
#include <limits.h>
#include "ft_printf_bonus.h"

int	main(int argc, char **argv)
{
	printf(" %X %X %X %X %X %X %X", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %-X %-X %-X %-X %-X %-X %-X", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %-9X %-10X %-11X %-12X %-13X %-14X %-15X", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %0X %0X %0X %0X %0X %0X %0X", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %09X %010X %011X %012X %013X %014X %015X", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %0-0----0000----0000009X %0-0----0000----00000010X %0-0----0000----00000011X %0-0----0000----00000012X %0-0----0000----00000013X %0-0----0000----00000014X %0-0----0000----00000015X", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %9X %10X %11X %12X %13X %14X %15X", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %.9X %.10X %.11X %.12X %.13X %.14X %.15X", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %-19.9X %-20.10X %-21.11X %-22.12X %-23.13X %-24.14X %-25.15X", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %019.9X %020.10X %021.11X %022.12X %023.13X %024.14X %025.15X", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %0-0----0000----00000019.9X %0-0----0000----00000020.10X %0-0----0000----00000021.11X %0-0----0000----00000022.12X %0-0----0000----00000023.13X %0-0----0000----00000024.14X %0-0----0000----00000025.15X", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %+X %+X %+X %+X %+X %+X %+X", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %+9X %+10X %+11X %+12X %+13X %+14X %+15X", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %+-19.9X %+-20.10X %+-21.11X %+-22.12X %+-23.13X %+-24.14X %+-25.15X", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %+019.9X %+020.10X %+021.11X %+022.12X %+023.13X %+024.14X %+025.15X", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %+0-+0--+++--0++000--+++--00000019.9X %+0-+0--+++--0++000--+++--00000020.10X %+0-+0--+++--0++000--+++--00000021.11X %+0-+0--+++--0++000--+++--00000022.12X %+0-+0--+++--0++000--+++--00000023.13X %+0-+0--+++--0++000--+++--00000024.14X %+0-+0--+++--0++000--+++--00000025.15X", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" % X % X % X % X % X % X % X", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" % 9X % 10X % 11X % 12X % 13X % 14X % 15X", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" % -19.9X % -20.10X % -21.11X % -22.12X % -23.13X % -24.14X % -25.15X", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" % -19.39X % -20.40X % -21.41X % -22.X % -23.X % -24.1X % -25.X", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("|% -22.x|", LONG_MIN);
	printf(" % 019.9X % 020.10X % 021.11X % 022.12X % 023.13X % 024.14X % 025.15X", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" % 0- 0-- +++  --0  +++000--   --00000019.9X % 0- 0-- +++  --0  +++000--   --00000020.10X % 0- 0-- +++  --0  +++000--   --00000021.11X % 0- 0-- +++  --0  +++000--   --00000022.12X % 0- 0-- +++  --0  +++000--   --00000023.13X % 0- 0-- +++  --0  +++000--   --00000024.14X % 0- 0-- +++  --0  +++000--   --00000025.15X", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" % ####0- 0-- +++##  --0 ## +++000--   --000000#19.9X % ####0- 0-- +++##  --0 ## +++000--   --000000#20.10X % ####0- 0-- +++##  --0 ## +++000--   --000000#21.11X % ####0- 0-- +++##  --0 ## +++000--   --000000#22.12X % ####0- 0-- +++##  --0 ## +++000--   --000000#23.13X % ####0- 0-- +++##  --0 ## +++000--   --000000#24.14X % ####0- 0-- +++##  --0 ## +++000--   --000000#25.15X", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("%.0X", 0);
	printf("%#.0X", 0);
	printf("%#0X", 0);
	printf("%");

	return (0);
}
