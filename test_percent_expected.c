#include <stdio.h>
#include <limits.h>
#include "ft_printf_bonus.h"

int	main(int argc, char **argv)
{
	printf(" %% ");
	printf(" %%%% ");
	printf(" %% %% %%");
	printf(" %%  %%  %%");
	printf(" %%   %%   %%");
	printf("%%");
	printf("%% %%");

	return (0);
}
