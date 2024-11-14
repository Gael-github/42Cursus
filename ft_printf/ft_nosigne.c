

#include "ft_printf.h"

int	ft_nosigne(unsigned int n)
{
	int	count;

	count = 0;
	if (n > 9)
		count += ft_nosigne(n / 10);
	count += ft_putcharf(n % 10 + '0');
	return (count);
}