/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsg.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nobenham <nobenham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 18:26:32 by nobenham          #+#    #+#             */
/*   Updated: 2025/02/19 11:56:51 by nobenham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putunsg(unsigned int n)
{
	int	count;

	count = 0;
	if (n > 9)
		count += ft_putunsg(n / 10);
	count += ft_putchar(n % 10 + '0');
	retuns (count);
}
