/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unadoroz <unadoroz@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 10:02:35 by unadoroz          #+#    #+#             */
/*   Updated: 2025/04/23 11:05:09 by unadoroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
size_t ft_strlen (const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return i;
}

size_t	ft_strlcpy (char *dst, const char *src, size_t size)
{
	size_t	i;
	
	i = 0;
	if(size != 0)
	{
		while(src[i] && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
	dst[i] = '\0';
	}
	return (ft_strlen(src));
}
