

#include "ft_printf.h"

int	ft_numhex(unsigned long long nb, char c)
{
	unsigned long long	i;

	i = 0;
	if (nb >= 16)
		i += ft_numhex(nb / 16, c);
	if (c == 'x')
		ft_putcharf("0123456789abcdef"[nb % 16]);
	if (c == 'X')
		ft_putcharf("0123456789ABCDEF"[nb % 16]);
	i++;
	return (i);
}