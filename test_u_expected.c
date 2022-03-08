#include <stdio.h>
#include <limits.h>
#include "ft_printf_bonus.h"

int	main(int argc, char **argv)
{
	printf(" %u %u %u %u %u %u %u", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %-u %-u %-u %-u %-u %-u %-u", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %-9u %-10u %-11u %-12u %-13u %-14u %-15u", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %0u %0u %0u %0u %0u %0u %0u", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %09u %010u %011u %012u %013u %014u %015u", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %0-0----0000----0000009u %0-0----0000----00000010u %0-0----0000----00000011u %0-0----0000----00000012u %0-0----0000----00000013u %0-0----0000----00000014u %0-0----0000----00000015u", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %9u %10u %11u %12u %13u %14u %15u", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %.9u %.10u %.11u %.12u %.13u %.14u %.15u", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %-19.9u %-20.10u %-21.11u %-22.12u %-23.13u %-24.14u %-25.15u", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %019.9u %020.10u %021.11u %022.12u %023.13u %024.14u %025.15u", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %0-0----0000----00000019.9u %0-0----0000----00000020.10u %0-0----0000----00000021.11u %0-0----0000----00000022.12u %0-0----0000----00000023.13u %0-0----0000----00000024.14u %0-0----0000----00000025.15u", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %+u %+u %+u %+u %+u %+u %+u", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %+9u %+10u %+11u %+12u %+13u %+14u %+15u", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %+-19.9u %+-20.10u %+-21.11u %+-22.12u %+-23.13u %+-24.14u %+-25.15u", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %+019.9u %+020.10u %+021.11u %+022.12u %+023.13u %+024.14u %+025.15u", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %+0-+0--+++--0++000--+++--00000019.9u %+0-+0--+++--0++000--+++--00000020.10u %+0-+0--+++--0++000--+++--00000021.11u %+0-+0--+++--0++000--+++--00000022.12u %+0-+0--+++--0++000--+++--00000023.13u %+0-+0--+++--0++000--+++--00000024.14u %+0-+0--+++--0++000--+++--00000025.15u", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" % u % u % u % u % u % u % u", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" % 9u % 10u % 11u % 12u % 13u % 14u % 15u", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" % -19.9u % -20.10u % -21.11u % -22.12u % -23.13u % -24.14u % -25.15u", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" % -19.39u % -20.40u % -21.41u % -22.u % -23.u % -24.1u % -25.u", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("|% -22.u|", LONG_MIN);
	printf(" % 019.9u % 020.10u % 021.11u % 022.12u % 023.13u % 024.14u % 025.15u", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" % 0- 0-- +++  --0  +++000--   --00000019.9u % 0- 0-- +++  --0  +++000--   --00000020.10u % 0- 0-- +++  --0  +++000--   --00000021.11u % 0- 0-- +++  --0  +++000--   --00000022.12u % 0- 0-- +++  --0  +++000--   --00000023.13u % 0- 0-- +++  --0  +++000--   --00000024.14u % 0- 0-- +++  --0  +++000--   --00000025.15u", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" % ####0- 0-- +++##  --0 ## +++000--   --000000#19.9u % ####0- 0-- +++##  --0 ## +++000--   --000000#20.10u % ####0- 0-- +++##  --0 ## +++000--   --000000#21.11u % ####0- 0-- +++##  --0 ## +++000--   --000000#22.12u % ####0- 0-- +++##  --0 ## +++000--   --000000#23.13u % ####0- 0-- +++##  --0 ## +++000--   --000000#24.14u % ####0- 0-- +++##  --0 ## +++000--   --000000#25.15u", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("%.0u", 0);
	printf("%");

	return (0);
}
