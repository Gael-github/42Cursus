/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nobenham <nobenham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 18:44:15 by nobenham          #+#    #+#             */
/*   Updated: 2025/02/12 19:12:44 by nobenham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_check(va_list *va, const char *type, int i)
{
	int	res;

	res = 0;
	if (type[i] == 'c')
		res += ft_putchar((char)va_arg(*va, int));
	else if (type[i] == 's')
		res += ft_putstr(va_arg(*va, char *));
	else if (type[i] == 'p')
		res += ft_pointer(va_arg(*va, uintptr_t));
	else if (type[i] == 'd' || type [i] == 'i')
		res += ft_putnbr(va_arg(*va, int));
	else if (type[i] == 'u')
		res += ft_putunsg(va_arg(*va, unsigned int));
	else if (type[i] == 'x' || type[i] == 'X')
		res += ft_puthex(va_arg(*va, unsigned int), type[i]);
	else if (type[i] == '%')
		res += ft_putchar('%');
	return (res);
}

int	ft_printf(const char *str, ...)
{
	va_list	va;
	int		count;
	int		i;

	count = 0;
	i = 0;
	va_start(va, str);
	while (str[i])
	{
		if (str[i] != '%')
			count += ft_putchar(str[i]);
		if (str[i] == '%')
		{
			i++;
			count += ft_check(&va, str, i);
		}
		i++;
	}
	va_end(va);
	return (count);
}
