/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nobenham <nobenham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 17:34:43 by nobenham          #+#    #+#             */
/*   Updated: 2025/02/12 17:54:04 by nobenham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer(uintptr_t ptr)
{
	size_t	counter;

	counter = 0;
	counter += write (1, "0x", 2);
	counter += ft_puthex (ptr, 'x');
	return (counter);
}
