#include <stdio.h>
#include <limits.h>
#include "ft_printf_bonus.h"

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	
	// TEST(1, print("%c", '0'));
	// TEST(2, print(" %c ", '0'));
	// TEST(3, print(" %c", '0' - 256));
	// TEST(4, print("%c ", '0' + 256));
	// TEST(5, print(" %c %c %c ", '0', 0, '1'));
	// TEST(6, print(" %c %c %c ", ' ', ' ', ' '));
	// TEST(7, print(" %c %c %c ", '1', '2', '3'));
	// TEST(8, print(" %c %c %c ", '2', '1', 0));
	// TEST(9, print(" %c %c %c ", 0, '1', '2'));

	// bonus %c
	printf("{{{ bonus %%c }}}\n");
	i = printf(" %c %c %c %c %c %c %c", '3', '2', '0' - 256, '0' + 256, '1', 0, '0');
	printf("\n");
	j = ft_printf(" %c %c %c %c %c %c %c", '3', '2', '0' - 256, '0' + 256, '1', 0, '0');
	printf("\n%d = %d\n\n", i, j);
	
	// bonus %-d
	// printf("{{{ bonus %%-d }}}\n");
	// i = printf(" %-d %-d %-d %-d %-d %-d %-d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// // // // // // // printf("\n### i = %d\n\n", i);
	// i = ft_printf(" %-d %-d %-d %-d %-d %-d %-d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// // // // // // // printf("\n### i = %d\n\n", i);
	
	// bonus %-'n'd
	// printf("{{{ bonus %%-'n'd }}}\n");
	// i = printf(" %-9d %-10d %-11d %-12d %-13d %-14d %-15d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// // // // // // // printf("\n### i = %d\n\n", i);
	// i = ft_printf(" %-9d %-10d %-11d %-12d %-13d %-14d %-15d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// // // // // // // printf("\n### i = %d\n\n", i);
	
	// bonus %0d
	// printf("{{{ bonus %%0d }}}\n");
	// i = printf(" %0d %0d %0d %0d %0d %0d %0d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// // // // // // // printf("\n### i = %d\n\n", i);
	// i = ft_printf(" %0d %0d %0d %0d %0d %0d %0d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// // // // // // // printf("\n### i = %d\n\n", i);

	// bonus %0'n'd
	// printf("{{{ bonus %%0'n'd }}}\n");
	// i = printf(" %09d %010d %011d %012d %013d %014d %015d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// // // // // // // printf("\n### i = %d\n\n", i);
	// i = ft_printf(" %09d %010d %011d %012d %013d %014d %015d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// // // // // // // printf("\n### i = %d\n\n", i);

	// bonus %0-0-00--'n'd
	// printf("{{{ bonus %%0-0-00--'n'd }}}\n");
	// i = printf(" %0-0----0000----0000009d %0-0----0000----00000010d %0-0----0000----00000011d %0-0----0000----00000012d %0-0----0000----00000013d %0-0----0000----00000014d %0-0----0000----00000015d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// // // // // // // printf("\n### i = %d\n\n", i);
	// i = ft_printf(" %0-0----0000----0000009d %0-0----0000----00000010d %0-0----0000----00000011d %0-0----0000----00000012d %0-0----0000----00000013d %0-0----0000----00000014d %0-0----0000----00000015d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// // // // // // // printf("\n### i = %d\n\n", i);
	
	// bonus %'n'd
	// printf("{{{ bonus %%'n'[wdth]d }}}\n");
	// i = printf(" %9d %10d %11d %12d %13d %14d %15d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// // // // // // // printf("\n### i = %d\n\n", i);
	// i = ft_printf(" %9d %10d %11d %12d %13d %14d %15d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// // // // // // // printf("\n### i = %d\n\n", i);

	// bonus %.'n'd
	// printf("{{{ bonus %%.'n'd }}}\n");
	// i = printf(" %.9d %.10d %.11d %.12d %.13d %.14d %.15d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// // // // // // // printf("\n### i = %d\n\n", i);
	// i = ft_printf(" %.9d %.10d %.11d %.12d %.13d %.14d %.15d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// // // // // // // printf("\n### i = %d\n\n", i);

	// bonus %-'m'.'n'd
	// printf("{{{ bonus %%-'m'.'n'd }}}\n");
	// i = printf(" %-19.9d %-20.10d %-21.11d %-22.12d %-23.13d %-24.14d %-25.15d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// // // // // // // printf("\n### i = %d\n\n", i);
	// i = ft_printf(" %-19.9d %-20.10d %-21.11d %-22.12d %-23.13d %-24.14d %-25.15d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// // // // // // // printf("\n### i = %d\n\n", i);

	// bonus %0'm'.'n'd
	// printf("{{{ bonus %%0'm'.'n'd }}}\n");
	// i = printf(" %019.9d %020.10d %021.11d %022.12d %023.13d %024.14d %025.15d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// // // // // // // printf("\n### i = %d\n\n", i);
	// i = ft_printf(" %019.9d %020.10d %021.11d %022.12d %023.13d %024.14d %025.15d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// // // // // // // printf("\n### i = %d\n\n", i);

	// bonus %0-0-00--'m'.'n'd
	// printf("{{{ bonus %%0-0-00--'m'.'n'd }}}\n");
	// i = printf(" %0-0----0000----00000019.9d %0-0----0000----00000020.10d %0-0----0000----00000021.11d %0-0----0000----00000022.12d %0-0----0000----00000023.13d %0-0----0000----00000024.14d %0-0----0000----00000025.15d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// // // // // // // printf("\n### i = %d\n\n", i);
	// i = ft_printf(" %0-0----0000----00000019.9d %0-0----0000----00000020.10d %0-0----0000----00000021.11d %0-0----0000----00000022.12d %0-0----0000----00000023.13d %0-0----0000----00000024.14d %0-0----0000----00000025.15d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// // // // // // // printf("\n### i = %d\n\n", i);

	// bonus %+d
	// printf("{{{ bonus %%+d }}}\n");
	// i = printf(" %+d %+d %+d %+d %+d %+d %+d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// // // // // // // printf("\n### i = %d\n\n", i);
	// i = ft_printf(" %+d %+d %+d %+d %+d %+d %+d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// // // // // // // printf("\n### i = %d\n\n", i);
	
	// bonus %+'n'd
	// printf("{{{ bonus %%+'n'd }}}\n");
	// i = printf(" %+9d %+10d %+11d %+12d %+13d %+14d %+15d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// // // // // // // printf("\n### i = %d\n\n", i);
	// i = ft_printf(" %+9d %+10d %+11d %+12d %+13d %+14d %+15d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// // // // // // // printf("\n### i = %d\n\n", i);

	// bonus %+-'m'.'n'd
	// printf("{{{ bonus %%+-'m'.'n'd }}}\n");
	// i = printf(" %+-19.9d %+-20.10d %+-21.11d %+-22.12d %+-23.13d %+-24.14d %+-25.15d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// // // // // // // printf("\n### i = %d\n\n", i);
	// i = ft_printf(" %+-19.9d %+-20.10d %+-21.11d %+-22.12d %+-23.13d %+-24.14d %+-25.15d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// // // // // // // printf("\n### i = %d\n\n", i);

	// bonus %+0'm'.'n'd
	// printf("{{{ bonus %%+0'm'.'n'd }}}\n");
	// i = printf(" %+019.9d %+020.10d %+021.11d %+022.12d %+023.13d %+024.14d %+025.15d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// // // // // // // printf("\n### i = %d\n\n", i);
	// i = ft_printf(" %+019.9d %+020.10d %+021.11d %+022.12d %+023.13d %+024.14d %+025.15d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// // // // // // // printf("\n### i = %d\n\n", i);

	// bonus %+-0+0-+-++00--'m'.'n'd
	// printf("{{{ bonus %%+-0+0-+-++00--'m'.'n'd }}}\n");
	// i = printf(" %+0-+0--+++--0++000--+++--00000019.9d %+0-+0--+++--0++000--+++--00000020.10d %+0-+0--+++--0++000--+++--00000021.11d %+0-+0--+++--0++000--+++--00000022.12d %+0-+0--+++--0++000--+++--00000023.13d %+0-+0--+++--0++000--+++--00000024.14d %+0-+0--+++--0++000--+++--00000025.15d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// // // // // // // printf("\n### i = %d\n\n", i);
	// i = ft_printf(" %+0-+0--+++--0++000--+++--00000019.9d %+0-+0--+++--0++000--+++--00000020.10d %+0-+0--+++--0++000--+++--00000021.11d %+0-+0--+++--0++000--+++--00000022.12d %+0-+0--+++--0++000--+++--00000023.13d %+0-+0--+++--0++000--+++--00000024.14d %+0-+0--+++--0++000--+++--00000025.15d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// // // // // // // printf("\n### i = %d\n\n", i);

	// bonus % d
	// printf("{{{ bonus %% d }}}\n");
	// i = printf(" % d % d % d % d % d % d % d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// // // // // // // printf("\n### i = %d\n\n", i);
	// i = ft_printf(" % d % d % d % d % d % d % d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// // // // // // // printf("\n### i = %d\n\n", i);
	
	// bonus % 'n'd
	// printf("{{{ bonus %% 'n'd }}}\n");
	// i = printf(" % 9d % 10d % 11d % 12d % 13d % 14d % 15d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// // // // // // // printf("\n### i = %d\n\n", i);
	// i = ft_printf(" % 9d % 10d % 11d % 12d % 13d % 14d % 15d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// // // // // // // printf("\n### i = %d\n\n", i);

	// bonus % -'m'.'n'd
	// printf("{{{ bonus %% -'m'.'n'd }}}\n");
	// i = printf(" % -19.9d % -20.10d % -21.11d % -22.12d % -23.13d % -24.14d % -25.15d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// // // // // // // printf("\n### i = %d\n\n", i);
	// i = ft_printf(" % -19.9d % -20.10d % -21.11d % -22.12d % -23.13d % -24.14d % -25.15d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// // // // // // // printf("\n### i = %d\n\n", i);

	// bonus % -'m'.'n'd >>> alternating
	// printf("{{{ bonus %% -'m'.'n'd >>> alternating }}}\n");
	// i = printf(" % -19.39d % -20.40d % -21.41d % -22.d % -23.d % -24.1d % -25.d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// // // // // // // printf("\n### i = %d\n\n", i);
	// i = ft_printf(" % -19.39d % -20.40d % -21.41d % -22.d % -23.d % -24.1d % -25.d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// // // // // // // printf("\n### i = %d\n\n", i);

	// bonus % -'m'.'n'd >>> alternating - especific: LONG_MIN
	// printf("{{{ bonus %% -'m'.'n'd >>> alternating - especific: LONG_MIN }}}\n");
	// i = printf("|% -22.d|", LONG_MIN);
	// // // // // // // printf("\n### i = %d\n\n", i);
	// i = ft_printf("|% -22.d|", LONG_MIN);
	// // // // // // // printf("\n### i = %d\n\n", i);

	// bonus % 0'm'.'n'd
	// printf("{{{ bonus %% 0'm'.'n'd }}}\n");
	// i = printf(" % 019.9d % 020.10d % 021.11d % 022.12d % 023.13d % 024.14d % 025.15d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// // // // // // // printf("\n### i = %d\n\n", i);
	// i = ft_printf(" % 019.9d % 020.10d % 021.11d % 022.12d % 023.13d % 024.14d % 025.15d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// // // // // // // printf("\n### i = %d\n\n", i);

	// bonus % -0 0- -  00--'m'.'n'd
	// printf("{{{ bonus %% -0 0- -  00--'m'.'n'd }}}\n");
	// i = printf(" % 0- 0-- +++  --0  +++000--   --00000019.9d % 0- 0-- +++  --0  +++000--   --00000020.10d % 0- 0-- +++  --0  +++000--   --00000021.11d % 0- 0-- +++  --0  +++000--   --00000022.12d % 0- 0-- +++  --0  +++000--   --00000023.13d % 0- 0-- +++  --0  +++000--   --00000024.14d % 0- 0-- +++  --0  +++000--   --00000025.15d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// // // // // // // printf("\n### i = %d\n\n", i);
	// i = ft_printf(" % 0- 0-- +++  --0  +++000--   --00000019.9d % 0- 0-- +++  --0  +++000--   --00000020.10d % 0- 0-- +++  --0  +++000--   --00000021.11d % 0- 0-- +++  --0  +++000--   --00000022.12d % 0- 0-- +++  --0  +++000--   --00000023.13d % 0- 0-- +++  --0  +++000--   --00000024.14d % 0- 0-- +++  --0  +++000--   --00000025.15d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// // // // // // // printf("\n### i = %d\n\n", i);

	// bonus %.0d
	// printf("{{{ bonus %%.0d }}}\n");
	// i = printf("%.0d", 0);
	// // // // // // // printf("\n### i = %d\n\n", i);
	// i = ft_printf("%.0d", 0);
	// // // // // // // printf("\n### i = %d\n\n", i);

	// bonus %
	// printf("{{{ %% }}}\n");
	// i = printf("%");
	// // // // // // // printf("\n### i = %d\n\n", i);
	// i = ft_printf("%");
	// // // // // // // printf("\n### i = %d\n\n", i);
	
	// // // // // // // i = printf("%kjjjjjj%jjjd%d%%%jjjd%", 0.0, INT_MAX);
	// // // // // // // printf("\n### i = %d\n\n", i);

	// // // // // // // i = ft_printf("%kjjjjjj%jjjd%d%%%jjjd%", 0.0, INT_MAX);
	// // // // // // // printf("\n### i = %d\n\n", i);

	// // // // // // // i = printf("%kjjjjjjjlllllli");
	// // // // // // // printf("\n### i = %d\n\n", i);

	// // // // // // // i = ft_printf("%kjjjjjjjlllllli");
	// // // // // // // printf("\n### i = %d\n\n", i);
	
	// // // // // // // i = printf("%kkk%rrr%iii");
	// // // // // // // printf("\n### i = %d\n\n", i);

	// // // // // // // i = ft_printf("%kkk%rrr%iii");
	// // // // // // // printf("\n### i = %d\n\n", i);

	// // // // // // // i = printf("|%c|", '0');
	// // // // // // // printf("\n### i = %d\n\n", i);

	// // // // // // // i = printf("|%-c|", '0');
	// // // // // // // printf("\n### i = %d\n\n", i);

	// // // // // // // i = printf("|%-10c|", '0');
	// // // // // // // printf("\n### i = %d\n\n", i);

	// // // // // // // i = printf("|%010c|", '0');
	// // // // // // // printf("\n### i = %d\n\n", i);
	
	// printf("\n\n");

	return (0);
}
