#include <stdio.h>
#include <limits.h>
#include "../bonus/ft_printf_bonus.h"

int	main(void)
{
	char *str = NULL;

	ft_printf(" %c %c %c %c %c %c %c", '3', '2', '0' - 256, '0' + 256, '1', 0, '0');
	ft_printf(" NULL %s NULL ", str);
	ft_printf(" %s %s %s %s %s", "abc", "123", "", "   ", "qwertyuiop");
	ft_printf(" %d %d %d %d", INT_MAX, INT_MIN, 0, -42);
	ft_printf(" %i %i %i %i", INT_MAX, INT_MIN, 0, -42);
	ft_printf(" %u %u %u %u", UINT_MAX, INT_MIN, 0, -42);
	ft_printf(" %x %x %x %x", UINT_MAX, INT_MIN, 0, -42);
	ft_printf(" %X %X %X %X", UINT_MAX, INT_MIN, 0, -42);
	ft_printf(" %p %p %p %p", (void *)ULONG_MAX, (void *)INT_MIN, (void *)0, (void *)-42);
	ft_printf(" %% ");
	ft_printf(" %%%% ");
	ft_printf(" %% %% %%");
	ft_printf(" %%  %%  %%");
	ft_printf(" %%   %%   %%");
	ft_printf("%%");
	ft_printf("%% %%");

	return (0);
}
