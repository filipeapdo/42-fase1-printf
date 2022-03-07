#include <stdio.h>
#include <limits.h>
#include "ft_printf_bonus.h"

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	
	// TEST(1, print("%.s", ""));
	// TEST(2, print(" %.1s", ""));
	// TEST(3, print("%.1s ", ""));
	// TEST(4, print(" %.s ", ""));
	// TEST(5, print(" %.s ", "-"));
	// TEST(6, print(" %.2s %.1s ", "", "-"));
	// TEST(7, print(" %.3s %.2s ", " - ", ""));
	// TEST(8, print(" %.1s %.2s %.3s %.4s ", " - ", "", "4", ""));
	// TEST(9, print(" %.2s %.3s %.4s %.5s %.1s ", " - ", "", "4", "", "2 "));
	// TEST(10, print(" NULL %s NULL ", NULL));
	
	printf("{{{ bonus %%.0s, 0 }}}\n");
	i = printf("%.0s", 0);
	printf("\n");
	j = ft_printf("%.0s", 0);
	printf("\n%d = %d\n\n", i, j);
	
	printf("{{{ bonus %%s == NULL }}}\n");
	i = printf(" NULL %s NULL ", NULL);
	printf("\n");
	j = ft_printf(" NULL %s NULL ", NULL);
	printf("\n%d = %d\n\n", i, j);
	
	printf("{{{ bonus %%s }}}\n");
	i = printf("|%s|;|%s|;|%s|;|%s|;|%s|;", "abc", "123", "", "   ", "qwertyuiop");
	printf("\n");
	j = ft_printf("|%s|;|%s|;|%s|;|%s|;|%s|;", "abc", "123", "", "   ", "qwertyuiop");
	printf("\n%d = %d\n\n", i, j);

	printf("{{{ bonus %%.s }}}\n");
	i = printf("|%.s|;|%.s|;|%.s|;|%.s|;|%.s|;", "abc", "123", "", "   ", "qwertyuiop");
	printf("\n");
	j = ft_printf("|%.s|;|%.s|;|%.s|;|%.s|;|%.s|;", "abc", "123", "", "   ", "qwertyuiop");
	printf("\n%d = %d\n\n", i, j);

	printf("{{{ bonus %%.'n's }}}\n");
	i = printf("|%.100s|;|%.2s|;|%.3s|;|%.4s|;|%.700s|;", "abc", "123", "", "   ", "qwertyuiop");
	printf("\n");
	j = ft_printf("|%.100s|;|%.2s|;|%.3s|;|%.4s|;|%.700s|;", "abc", "123", "", "   ", "qwertyuiop");
	printf("\n%d = %d\n\n", i, j);

	printf("{{{ bonus %%-'n's }}}\n");
	i = printf("|%-10s|;|%-11s|;|%-12s|;|%-13s|;|%-14s|;", "abc", "123", "", "   ", "qwertyuiop");
	printf("\n");
	j = ft_printf("|%-10s|;|%-11s|;|%-12s|;|%-13s|;|%-14s|;", "abc", "123", "", "   ", "qwertyuiop");
	printf("\n%d = %d\n\n", i, j);

	printf("{{{ bonus %%0'n's }}}\n");
	i = printf("|%010s|;|%011s|;|%012s|;|%013s|;|%014s|;", "abc", "123", "", "   ", "qwertyuiop");
	printf("\n");
	j = ft_printf("|%010s|;|%011s|;|%012s|;|%013s|;|%014s|;", "abc", "123", "", "   ", "qwertyuiop");
	printf("\n%d = %d\n\n", i, j);

	printf("{{{ bonus %%+'n's }}}\n");
	i = printf("|%+10s|;|%+11s|;|%+12s|;|%+13s|;|%+14s|;", "abc", "123", "", "   ", "qwertyuiop");
	printf("\n");
	j = ft_printf("|%+10s|;|%+11s|;|%+12s|;|%+13s|;|%+14s|;", "abc", "123", "", "   ", "qwertyuiop");
	printf("\n%d = %d\n\n", i, j);

	printf("{{{ bonus %% 'n's }}}\n");
	i = printf("|% 10s|;|% 11s|;|% 12s|;|% 13s|;|% 14s|;", "abc", "123", "", "   ", "qwertyuiop");
	printf("\n");
	j = ft_printf("|% 10s|;|% 11s|;|% 12s|;|% 13s|;|% 14s|;", "abc", "123", "", "   ", "qwertyuiop");
	printf("\n%d = %d\n\n", i, j);

	printf("{{{ bonus %%#'n's }}}\n");
	i = printf("|%#10s|;|%#11s|;|%#12s|;|%#13s|;|%#14s|;", "abc", "123", "", "   ", "qwertyuiop");
	printf("\n");
	j = ft_printf("|%#10s|;|%#11s|;|%#12s|;|%#13s|;|%#14s|;", "abc", "123", "", "   ", "qwertyuiop");
	printf("\n%d = %d\n\n", i, j);

	printf("{{{ bonus %% CRAZY }}}\n");
	i = printf("|%#-0 +++###-----      100.10s|;|%#-0 +++###-----      100.11s|;|%#-0 +++###-----      100.12s|;|%#-0 +++###-----      100.13s|;|%#-0 +++###-----      100.14s|;", "abc", "123", "", "   ", "qwertyuiop");
	printf("\n");
	j = ft_printf("|%#-0 +++###-----      100.10s|;|%#-0 +++###-----      100.11s|;|%#-0 +++###-----      100.12s|;|%#-0 +++###-----      100.13s|;|%#-0 +++###-----      100.14s|;", "abc", "123", "", "   ", "qwertyuiop");
	printf("\n%d = %d\n\n", i, j);

	// printf("{{{ bonus %%c }}}\n");
	// i = printf("|%c|-|%c|-|%c|", '2', '1', 0);
	// printf("\n");
	// j = ft_printf("|%c|-|%c|-|%c|", '2', '1', 0);
	// printf("\n%d = %d\n\n", i, j);

	// printf("{{{ bonus %%.'n'c }}}\n");
	// i = printf("|%.10c|-|%.11c|-|%.12c|", '2', '1', 0);
	// printf("\n");
	// j = ft_printf("|%.10c|-|%.11c|-|%.12c|", '2', '1', 0);
	// printf("\n%d = %d\n\n", i, j);

	// printf("{{{ bonus %%'n'c }}}\n");
	// i = printf("|%10c|-|%11c|-|%12c|", '2', '1', 0);
	// printf("\n");
	// j = ft_printf("|%10c|-|%11c|-|%12c|", '2', '1', 0);
	// printf("\n%d = %d\n\n", i, j);

	// printf("{{{ bonus %%-'n'c }}}\n");
	// i = printf("|%-10c|-|%-11c|-|%-12c|", '2', '1', 0);
	// printf("\n");
	// j = ft_printf("|%-10c|-|%-11c|-|%-12c|", '2', '1', 0);
	// printf("\n%d = %d\n\n", i, j);

	// printf("{{{ bonus %%0'n'c }}}\n");
	// i = printf("|%010c|-|%011c|-|%012c|", '2', '1', 0);
	// printf("\n");
	// j = ft_printf("|%010c|-|%011c|-|%012c|", '2', '1', 0);
	// printf("\n%d = %d\n\n", i, j);

	// printf("{{{ bonus %%+'n'c }}}\n");
	// i = printf("|%+10c|-|%+11c|-|%+12c|", '2', '1', 0);
	// printf("\n");
	// j = ft_printf("|%+10c|-|%+11c|-|%+12c|", '2', '1', 0);
	// printf("\n%d = %d\n\n", i, j);

	// printf("{{{ bonus %%+-'n'c }}}\n");
	// i = printf("|%+-10c|-|%+-11c|-|%+-12c|", '2', '1', 0);
	// printf("\n");
	// j = ft_printf("|%+-10c|-|%+-11c|-|%+-12c|", '2', '1', 0);
	// printf("\n%d = %d\n\n", i, j);

	// printf("{{{ bonus %% 'n'c }}}\n");
	// i = printf("|% 10c|-|% 11c|-|% 12c|", '2', '1', 0);
	// printf("\n");
	// j = ft_printf("|% 10c|-|% 11c|-|% 12c|", '2', '1', 0);
	// printf("\n%d = %d\n\n", i, j);

	// printf("{{{ bonus %% -'m'.'n'c }}}\n");
	// i = printf("|% -20.10c|-|% -21.11c|-|% -22.12c|", '2', '1', 0);
	// printf("\n");
	// j = ft_printf("|% -20.10c|-|% -21.11c|-|% -22.12c|", '2', '1', 0);
	// printf("\n%d = %d\n\n", i, j);

	// bonus %c
	// printf("{{{ bonus %%c }}}\n");
	// i = printf("|%-10c|-|%-11c|-|%-12c|-|%-13c|-|%-14c|-|%-15c|-|%-16c|", '3', '2', '0' - 256, '0' + 256, '1', 0, '0');
	// printf("\n");
	// j = ft_printf("|%-10c|-|%-11c|-|%-12c|-|%-13c|-|%-14c|-|%-15c|-|%-16c|", '3', '2', '0' - 256, '0' + 256, '1', 0, '0');
	// printf("\n%d = %d\n\n", i, j);
	
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
