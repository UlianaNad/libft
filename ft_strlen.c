/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unadoroz <unadoroz@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 14:40:34 by unadoroz          #+#    #+#             */
/*   Updated: 2025/04/15 14:49:32 by unadoroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
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

int	main(void)
{
	char a[]="length";
	char b[20]={'P','r','o','g','r','a','m','\0'};

// using the %zu format specifier to print size_t

	printf("%zu\n", ft_strlen(a));
	printf("%zu\n", ft_strlen(b));
	printf("%zu\n", strlen(a));
        printf("%zu\n", strlen(b));
	
	return(0);
}
