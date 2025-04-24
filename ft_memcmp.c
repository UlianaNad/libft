/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unadoroz <unadoroz@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 10:07:08 by unadoroz          #+#    #+#             */
/*   Updated: 2025/04/24 10:37:30 by unadoroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *str1;
	const unsigned char *str2;
	size_t i;

	str1 = s1;
	str2 = s2;
	i = 0;
	if (n == 0)
		return (0);
	while(i < n)
	{
		if(str1[i] != str2[i])
		{
			return(str1[i] - str2[i]);
		}
		i++;
	}
	return(0);
}

#include <stdio.h>

int	 main()
{
	char s1[] = "heullo, world";
	char s2[] = "hello, world";
	int n = 0;
	printf("%d\n", ft_memcmp(s1, s2, n));
	printf("%d\n", memcmp(s1, s2, n));
}
