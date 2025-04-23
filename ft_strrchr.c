/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unadoroz <unadoroz@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 14:45:35 by unadoroz          #+#    #+#             */
/*   Updated: 2025/04/23 15:06:01 by unadoroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
char *ft_strrchr(const char *s, int c)
{
	int	i;
	i = 0;

	while(s[i])
		i++;

	if (c == 0)
        return ((char *)(s + i));

	while(i >= 0)
	{
		if(s[i] == (char)c)
		{
			return ((char *)(s + i));
		}
		i--;
	}
	
	return (NULL);	
}
#include <stdio.h>
int	main()
{
	char s[] = "Hello you!";
	char w = '\0';
	printf("%s\n", ft_strrchr(s, w)); 
	printf("%s\n", strrchr(s, w));
}
