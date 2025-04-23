/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unadoroz <unadoroz@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 11:45:35 by unadoroz          #+#    #+#             */
/*   Updated: 2025/04/23 12:45:13 by unadoroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
size_t	strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;

	dst_len = strlen(dst);
	src_len = strlen(src);
	
	if(dst_len >= size)
		dst_len = size;
	if(dst_len == size)
		return (size + src_len);
	if(src_len < size - dst_len)
		ft_memcpy(dst + dst_len, src, src_len + 1);
	else
		{
			ft_memcpy(dst + dst_len, src, size - dst_len - 1);
			dst[size - 1] = '\0';	
		}

	return (dst_len + src_len );
}

#include <stdio.h>
int	main()
{
	char s1[30] = "Hi, my";
	char s2[] = "dear friend!";
	
	printf("%zu size for coping %s to %s", strlcat(s1, s2, sizeof(s1)), s1, s2);
}
