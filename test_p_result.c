#include <stdio.h>
#include <limits.h>
#include "ft_printf_bonus.h"

int	main(int argc, char **argv)
{
	ft_printf(" %p %p %p %p %p %p %p", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	ft_printf(" %-p %-p %-p %-p %-p %-p %-p", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	ft_printf(" %-9p %-10p %-11p %-12p %-13p %-14p %-15p", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	ft_printf(" %0p %0p %0p %0p %0p %0p %0p", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	ft_printf(" %09p %010p %011p %012p %013p %014p %015p", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	ft_printf(" %0-0----0000----0000009p %0-0----0000----00000010p %0-0----0000----00000011p %0-0----0000----00000012p %0-0----0000----00000013p %0-0----0000----00000014p %0-0----0000----00000015p", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	ft_printf(" %9p %10p %11p %12p %13p %14p %15p", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	ft_printf(" %.9p %.10p %.11p %.12p %.13p %.14p %.15p", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	ft_printf(" %-19.9p %-20.10p %-21.11p %-22.12p %-23.13p %-24.14p %-25.15p", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	ft_printf(" %019.9p %020.10p %021.11p %022.12p %023.13p %024.14p %025.15p", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	ft_printf(" %0-0----0000----00000019.9p %0-0----0000----00000020.10p %0-0----0000----00000021.11p %0-0----0000----00000022.12p %0-0----0000----00000023.13p %0-0----0000----00000024.14p %0-0----0000----00000025.15p", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	ft_printf(" %+p %+p %+p %+p %+p %+p %+p", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	ft_printf(" %+9p %+10p %+11p %+12p %+13p %+14p %+15p", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	ft_printf(" %+-19.9p %+-20.10p %+-21.11p %+-22.12p %+-23.13p %+-24.14p %+-25.15p", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	ft_printf(" %+019.9p %+020.10p %+021.11p %+022.12p %+023.13p %+024.14p %+025.15p", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	ft_printf(" %+0-+0--+++--0++000--+++--00000019.9p %+0-+0--+++--0++000--+++--00000020.10p %+0-+0--+++--0++000--+++--00000021.11p %+0-+0--+++--0++000--+++--00000022.12p %+0-+0--+++--0++000--+++--00000023.13p %+0-+0--+++--0++000--+++--00000024.14p %+0-+0--+++--0++000--+++--00000025.15p", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	ft_printf(" % p % p % p % p % p % p % p", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	ft_printf(" % 9p % 10p % 11p % 12p % 13p % 14p % 15p", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	ft_printf(" % -19.9p % -20.10p % -21.11p % -22.12p % -23.13p % -24.14p % -25.15p", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	ft_printf(" % -19.39p % -20.40p % -21.41p % -22.p % -23.p % -24.1p % -25.p", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	ft_printf("|% -22.x|", LONG_MIN);
	ft_printf(" % 019.9p % 020.10p % 021.11p % 022.12p % 023.13p % 024.14p % 025.15p", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	ft_printf(" % 0- 0-- +++  --0  +++000--   --00000019.9p % 0- 0-- +++  --0  +++000--   --00000020.10p % 0- 0-- +++  --0  +++000--   --00000021.11p % 0- 0-- +++  --0  +++000--   --00000022.12p % 0- 0-- +++  --0  +++000--   --00000023.13p % 0- 0-- +++  --0  +++000--   --00000024.14p % 0- 0-- +++  --0  +++000--   --00000025.15p", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	ft_printf(" % ####0- 0-- +++##  --0 ## +++000--   --000000#19.9p % ####0- 0-- +++##  --0 ## +++000--   --000000#20.10p % ####0- 0-- +++##  --0 ## +++000--   --000000#21.11p % ####0- 0-- +++##  --0 ## +++000--   --000000#22.12p % ####0- 0-- +++##  --0 ## +++000--   --000000#23.13p % ####0- 0-- +++##  --0 ## +++000--   --000000#24.14p % ####0- 0-- +++##  --0 ## +++000--   --000000#25.15p", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	ft_printf("%.0p", 0);
	ft_printf("%#.0p", 0);
	ft_printf("%#0p", 0);
	ft_printf("%");

	return (0);
}
