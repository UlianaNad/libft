/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unadoroz <unadoroz@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 11:19:35 by unadoroz          #+#    #+#             */
/*   Updated: 2025/04/22 11:46:22 by unadoroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
void	ft_bzero(void *s, size_t len)
{
	char	*temp;
	temp = (char *)s;
	size_t	 i;
	i = 0;
	while(i < len)
	{
		temp[i] = 0;
		i++;
	}
}

#include <stdio.h>
int	main()
{
	char str[] = "akdjfglkkljdfhgksdjfhgkbcdcdee";
    int c = 6;
	printf("String before |%d| bytes changes to 0 is - |%s|\n", c, str);
 
    ft_bzero(str, c);
    printf("String after first |%d| bytes changes to 0 is - |%s|\n", c, str);
    bzero(str, c);
	printf("String after first |%d| bytes changes to 0 is - |%s|\n", c, str);
	return(0);
}
