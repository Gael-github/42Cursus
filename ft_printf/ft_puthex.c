/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nobenham <nobenham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 18:31:15 by nobenham          #+#    #+#             */
/*   Updated: 2025/02/19 11:45:47 by nobenham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long long n, char a)
{
	unsigned long long	i;

	i = 0;
	if (n >= 16)
		i += ft_puthex(n / 16, a);
	if (a == 'x')
		ft_putchar("0123456789abcdef"[n % 16]);
	if (a == 'X')
		ft_putchar("0123456789ABCDEF"[n % 16]);
	i++;
	return (i);
}
