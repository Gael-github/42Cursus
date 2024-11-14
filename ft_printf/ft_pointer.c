

#include "ft_printf.h"

int	ft_pointer(intptr_t ptr)
{
	size_t	count;

	if (ptr == 0)
		return (write(1, "(nil)", 5));
	count = 0;
	count += write(1, "0x", 2);
	count += ft_numhex(ptr, 'x');
	return (count);
}