/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nobenham <nobenham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:32:38 by nobenham          #+#    #+#             */
/*   Updated: 2024/10/16 15:32:41 by nobenham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	i;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (ft_strchr(set, *s1) && s1[i] != '\0')
		s1++;
	i = ft_strlen((char *)s1);
	while (ft_strchr(set, s1[i]) && i != 0)
		i--;
	return (ft_substr((char *)s1, 0, i + 1));
}
/*#include <stdio.h>

int main()
{
    char    *st1;
    char    *set1;
p
    st1 = "..hola..";
    set1 = ".";

    printf("%s", ft_strtrim(st1, set1));
    return (0);
}*/