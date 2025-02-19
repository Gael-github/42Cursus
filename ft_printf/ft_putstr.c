/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nobenham <nobenham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 18:15:51 by nobenham          #+#    #+#             */
/*   Updated: 2025/02/12 18:24:43 by nobenham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (s == NULL)
		return (ft_putstr("null"));
	while (s[i])
	{
		count += ft_putchar(s[i]);
		i++;
	}
	return (count);
}
