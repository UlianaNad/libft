/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unadoroz <unadoroz@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 09:25:50 by unadoroz          #+#    #+#             */
/*   Updated: 2025/04/24 10:04:49 by unadoroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	i;
	unsigned char b;
	const unsigned char *ptr;

	i = 0;
	b = (unsigned char)c;
	ptr = s;

	while(i < n && ptr[i])
	{
		if(ptr[i] == b)
			return ((void *)(ptr + i));
		i++;
	}
	return (NULL);
}

#include <stdio.h>

int	main()
{
	char str[] = "hello you!";
	char w = 'o';
	size_t n = 28;

	char *res = ft_memchr(str, w, n);
	printf("%s\n", res);
	char *res2 = ft_memchr(str, w, n);
	printf("%s\n", res2);
	return(0); 
}

