
#include "ft_printf.h"

int	ft_putstrf(char *s)//ft_putstrf que recibe como parámetro un puntero a char (char *s), lo que significa que espera una cadena de caracteres (string). //
//La función devuelve un int, que será el total de caracteres impresos.//
{
	int	i;//i: Se usará como índice para recorrer cada caracter de la cadena//
	int	count;//los cuenta//

	count = 0;
	i = 0;
	if (s == NULL)
		return (ft_putstrf("(Null)"));
	while (s[i] != '\0')
	{
		count += ft_putcharf(s[i]); 
		i++;
	}
	return (count);
}