/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nobenham <nobenham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:25:28 by nobenham          #+#    #+#             */
/*   Updated: 2024/10/16 15:26:00 by nobenham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned int	i;
	int				res;
	int				sign;

	i = 0;
	res = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while ((str[i] != '\0') && (str[i] >= '0' && str[i] <= '9'))
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (res * sign);
}
