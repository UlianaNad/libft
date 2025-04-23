/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unadoroz <unadoroz@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 14:12:56 by unadoroz          #+#    #+#             */
/*   Updated: 2025/04/23 14:43:10 by unadoroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char *ft_strchr(const char *s, int c)
{
	int	i;
	i = 0;
	while(s[i])
	{
		if(s[i] == c)
			return ((char *)(s + i));

		i++;
	}
	if (c == 0)
		return ((char *)(s + i));
	
	return (NULL);
}

#include <stdio.h>
int	main()
{
	char s[] = "Hello you!";
	char w = 'l';
	printf("%s\n", ft_strchr(s, w)); 
}
