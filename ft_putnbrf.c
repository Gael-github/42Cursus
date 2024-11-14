
#include "ft_printf.h"

int	ft_putnbrf(int nb)
{
	int	count;//almacenará la cantidad de caracteres impresos.//

	count = 0;
	if (nb == -2147483648)//INT_MIN)//
	{
		count += ft_putcharf('-');
		count += ft_putcharf('2');
		count += ft_putnbrf(147483648);
	}
	else if (nb < 0)
	{
		count += ft_putcharf('-');
		nb = -nb;
		count += ft_putnbrf(nb);
	}
	else if (nb > 9)
	{
		count += ft_putnbrf(nb / 10);
		count += ft_putnbrf(nb % 10);
	}
	else
	{
		count += ft_putcharf(nb + '0');//Convierte nb a su caracter 
      // ASCII sumando '0' y luego lo imprime usando ft_putcharf.//
	}
	return (count);
}