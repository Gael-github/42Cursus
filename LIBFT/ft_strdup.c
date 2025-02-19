/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nobenham <nobenham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:27:40 by nobenham          #+#    #+#             */
/*   Updated: 2024/10/16 15:28:26 by nobenham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	void	*buffer;
	size_t	count;

	count = ft_strlen(str);
	buffer = (char *)malloc((count + 1) * sizeof(char));
	if (buffer == 0)
		return (0);
	else
	{
		ft_memcpy(buffer, str, count + 1);
	}
	return (buffer);
}
