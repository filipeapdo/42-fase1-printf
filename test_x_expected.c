#include <stdio.h>
#include <limits.h>
#include "ft_printf_bonus.h"

int	main(int argc, char **argv)
{
	printf(" %x %x %x %x %x %x %x", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %-x %-x %-x %-x %-x %-x %-x", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %-9x %-10x %-11x %-12x %-13x %-14x %-15x", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %0x %0x %0x %0x %0x %0x %0x", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %09x %010x %011x %012x %013x %014x %015x", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %0-0----0000----0000009x %0-0----0000----00000010x %0-0----0000----00000011x %0-0----0000----00000012x %0-0----0000----00000013x %0-0----0000----00000014x %0-0----0000----00000015x", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %9x %10x %11x %12x %13x %14x %15x", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %.9x %.10x %.11x %.12x %.13x %.14x %.15x", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %-19.9x %-20.10x %-21.11x %-22.12x %-23.13x %-24.14x %-25.15x", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %019.9x %020.10x %021.11x %022.12x %023.13x %024.14x %025.15x", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %0-0----0000----00000019.9x %0-0----0000----00000020.10x %0-0----0000----00000021.11x %0-0----0000----00000022.12x %0-0----0000----00000023.13x %0-0----0000----00000024.14x %0-0----0000----00000025.15x", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %+x %+x %+x %+x %+x %+x %+x", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %+9x %+10x %+11x %+12x %+13x %+14x %+15x", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %+-19.9x %+-20.10x %+-21.11x %+-22.12x %+-23.13x %+-24.14x %+-25.15x", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %+019.9x %+020.10x %+021.11x %+022.12x %+023.13x %+024.14x %+025.15x", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %+0-+0--+++--0++000--+++--00000019.9x %+0-+0--+++--0++000--+++--00000020.10x %+0-+0--+++--0++000--+++--00000021.11x %+0-+0--+++--0++000--+++--00000022.12x %+0-+0--+++--0++000--+++--00000023.13x %+0-+0--+++--0++000--+++--00000024.14x %+0-+0--+++--0++000--+++--00000025.15x", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" % x % x % x % x % x % x % x", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" % 9x % 10x % 11x % 12x % 13x % 14x % 15x", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" % -19.9x % -20.10x % -21.11x % -22.12x % -23.13x % -24.14x % -25.15x", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" % -19.39x % -20.40x % -21.41x % -22.x % -23.x % -24.1x % -25.x", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("|% -22.x|", LONG_MIN);
	printf(" % 019.9x % 020.10x % 021.11x % 022.12x % 023.13x % 024.14x % 025.15x", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" % 0- 0-- +++  --0  +++000--   --00000019.9x % 0- 0-- +++  --0  +++000--   --00000020.10x % 0- 0-- +++  --0  +++000--   --00000021.11x % 0- 0-- +++  --0  +++000--   --00000022.12x % 0- 0-- +++  --0  +++000--   --00000023.13x % 0- 0-- +++  --0  +++000--   --00000024.14x % 0- 0-- +++  --0  +++000--   --00000025.15x", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" % ####0- 0-- +++##  --0 ## +++000--   --000000#19.9x % ####0- 0-- +++##  --0 ## +++000--   --000000#20.10x % ####0- 0-- +++##  --0 ## +++000--   --000000#21.11x % ####0- 0-- +++##  --0 ## +++000--   --000000#22.12x % ####0- 0-- +++##  --0 ## +++000--   --000000#23.13x % ####0- 0-- +++##  --0 ## +++000--   --000000#24.14x % ####0- 0-- +++##  --0 ## +++000--   --000000#25.15x", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("%.0x", 0);
	printf("%#.0x", 0);
	printf("%#0x", 0);
	printf("%");

	return (0);
}
