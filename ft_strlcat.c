/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unadoroz <unadoroz@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 11:45:35 by unadoroz          #+#    #+#             */
/*   Updated: 2025/04/29 10:50:03 by unadoroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t dst_len = 0;
    size_t src_len = ft_strlen(src);
    size_t i;

    while (dst_len < size && dst[dst_len])
        dst_len++;

    if (dst_len == size)
        return (size + src_len);

    i = 0;
    while (src[i] && (dst_len + i + 1) < size)
    {
        dst[dst_len + i] = src[i];
        i++;
    }

    if (dst_len + i < size)
        dst[dst_len + i] = '\0';

    return (dst_len + src_len);
}
