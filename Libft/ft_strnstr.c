/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nobenham <nobenham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 19:00:16 by nobenham          #+#    #+#             */
/*   Updated: 2024/10/16 16:03:41 by nobenham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str1, const char *tofind, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (tofind[i] == '\0')
		return ((char *)str1);
	while (str1[i] && i < n)
	{
		j = 0;
		if (str1[i] == tofind[j])
		{
			while (str1[i + j] == tofind[j] && (i + j) < n)
			{
				if (tofind[j + 1] == '\0')
					return ((char *)str1 + i);
				j++;
			}
		}
		i++;
	}
	return (0);
}
/*#include <stdio.h>

int main()
{
    printf("%s", ft_strnstr("hola mundo", "mundo", 11));
    return (0);
}*/