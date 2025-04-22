/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unadoroz <unadoroz@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 09:20:29 by unadoroz          #+#    #+#             */
/*   Updated: 2025/04/22 10:08:54 by unadoroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
void *ft_memset(void *s, int c, size_t len)
{
    unsigned char *b;
    size_t i;

    b = (unsigned char *)s; 

    i = 0;
    while (i < len)
    {
        b[i] = (unsigned char)c;
        i++;
    }
    return (b);
}

int main()
{
    char str[] = "Hello, world!";
    ft_memset(str, 0, sizeof(str));
    printf("%s\n", str);
	memset(str, 0, sizeof(str));
    printf("%s\n", str);
}
