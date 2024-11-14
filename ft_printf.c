
#include "ft_printf.h"

static int	ft_check(va_list *end, const char *type, int i) //permanece en la memoria mientras se ejecuta el programa //
{//end: una lista de argumentos variable usando valist; type: una cadena de caracteres qe contiene el formato de la cadena; i: el indice para eterminar que tipo de formato utilizar//
	int	total;
//total llevara la cuenta de la cantidad de caracteres que se an escrito durante el procesamiento de un especificador//
	total = 0;
	if (type[i] == 'c')//toma un char que en realidad con las va es int//
		total += ft_putcharf((char) va_arg(*end, int));
	if (type[i] == 's')//cadena de carateres y se asa a putstr //
		total += ft_putstrf(va_arg(*end, char *));
	if (type[i] == 'p')//se obtiene un puntero y se pasa a ponter que maneja la impresion de la direccion del puntero en formato hexadecimal//
		total += ft_pointer(va_arg(*end, intptr_t));
	if (type[i] == 'd' || type[i] == 'i')//se pasa a la funcion putnbrf se encarga de convertir el numero entero enuna cadena y escribirlo//
		total += ft_putnbrf(va_arg(*end, int));
	if (type[i] == 'u')//se toma un unsigned int y se pasa a la nosigne que se encargara d escribir el numero sin signo//
		total += ft_nosigne(va_arg(*end, unsigned int));
	if (type[i] == 'x' || type[i] == 'X')//se toma un unsigned y se pasa a la numhex que convierte el numero en una cadena hezadecimal teniendo en cuenta minusculas o mayusculas//
		total += ft_numhex(va_arg(*end, unsigned int), type[i]);
	if (type[i] == '%')
		total += ft_putcharf('%');
	return (total);
}

int	ft_printf(char const *str, ...)//numero variable de argumentos//
{
	int		count;//caracteres escritos los cuenta//
	int		i;//indice que recorre la cadena//
	va_list	list;// lista de argumentos qe se extraen con la macro; se inicializa con va_start//

	count = 0;
	i = 0;
	va_start(list, str);
	while (str[i])//el bucle recorre cada caracter de la cadena str// 
	{
		if (str[i] != '%')// si no es un % significa que es regular asi q lo pasamos al puchar  se suma a count//
			count += ft_putcharf(str[i]);
		if (str[i] == '%')
		{
			i++;
			count += ft_check(&list, str, i);
		}
		i++;
	}
	va_end(list);
	return (count);
}