/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nobenham <nobenham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:58:56 by nobenham          #+#    #+#             */
/*   Updated: 2024/10/16 14:01:19 by nobenham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*dest, const void *src, size_t n)

{
	size_t	i;
	char	*source;
	char	*dst;

	i = 0;
	source = (char *)src;
	dst = (char *)dest;
	if (!source && !dst)
		return (0);
	while (i < n)
	{
		dst[i] = source[i];
		i++;
	}
	return (dst);
}
/*#include <stdio.h>

int main()
{
    char    src[] = "hola";
    char    dest[] = "buenas tardes";

    ft_memcpy(dest, src, 4);

    printf("%s", ft_memcpy(dest, dest, 4));
    return (0);
}*/