#include "ft_printf.h"
#include <limits.h>
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	a = printf("%X\n", INT_MIN);
	b = ft_printf("%X\n", INT_MIN);
	printf("printf => %d , ft_printf => %d", a, b);
}
