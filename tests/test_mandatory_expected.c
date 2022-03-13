#include <stdio.h>
#include <limits.h>
#include "../bonus/ft_printf_bonus.h"

int	main(void)
{
	char *str = NULL;

	printf(" %c %c %c %c %c %c %c", '3', '2', '0' - 256, '0' + 256, '1', 0, '0');
	printf(" NULL %s NULL ", str);
	printf(" %s %s %s %s %s", "abc", "123", "", "   ", "qwertyuiop");
	printf(" %d %d %d %d", INT_MAX, INT_MIN, 0, -42);
	printf(" %i %i %i %i", INT_MAX, INT_MIN, 0, -42);
	printf(" %u %u %u %u", UINT_MAX, INT_MIN, 0, -42);
	printf(" %x %x %x %x", UINT_MAX, INT_MIN, 0, -42);
	printf(" %X %X %X %X", UINT_MAX, INT_MIN, 0, -42);
	printf(" %p %p %p %p", (void *)ULONG_MAX, (void *)INT_MIN, (void *)0, (void *)-42);
	printf(" %% ");
	printf(" %%%% ");
	printf(" %% %% %%");
	printf(" %%  %%  %%");
	printf(" %%   %%   %%");
	printf("%%");
	printf("%% %%");

	return (0);
}
