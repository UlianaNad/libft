/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unadoroz <unadoroz@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 12:32:07 by unadoroz          #+#    #+#             */
/*   Updated: 2025/04/23 10:00:04 by unadoroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *temp_dest;
	unsigned char *temp_src;

	if (dest == (void*)0 && src == (void *)0)
		return (dest);

	temp_dest = (unsigned char *) dest;
	temp_src = (unsigned char *) src;

	size_t	i;
	i = 0;
	
	if(temp_dest > temp_src)
	{
		while(n-- > 0)
		{
			temp_dest[n] = temp_src[n];	
		}
	}
	else
	{
	 while(n-- > 0)
        {
			temp_dest[i] = temp_src[i];
			i++;
		}  
	}
	return (dest);
}
#include <stdio.h>
int main(void)
{
    char buffer1[50] = "Hello, world!";
    char buffer2[50] = "Hello, world!";

    ft_memmove(buffer1 + 13, buffer1, 0);   
    memmove(buffer2 + 13, buffer2, 0);      
    printf("Custom:  %s\n", buffer1);
    printf("Standard:%s\n\n", buffer2);

	strcpy(buffer1, "Hello, world!");
	strcpy(buffer2, "Hello, world!");

	ft_memmove(buffer1, buffer1 + 7, 5);
    memmove(buffer2, buffer2 + 7, 5);
    printf("Custom:  %s\n", buffer1);
    printf("Standard:%s\n\n", buffer2);

    return 0;
}
