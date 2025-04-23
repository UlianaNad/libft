/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unadoroz <unadoroz@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 11:53:37 by unadoroz          #+#    #+#             */
/*   Updated: 2025/04/22 12:28:42 by unadoroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *temp_dest;
	unsigned char *temp_src;

	if (dest == (void *)0 && src == (void *)0)
		return (dest);

	temp_dest = (unsigned char *) dest;
	temp_src = (unsigned char *) src;

	size_t i;
	i = 0;
	while(i < n)
	{
		temp_dest[i] = temp_src[i];
		i++;
	}
	
	return (dest);
}

#include <stdio.h>
int main (void)
{
	char s1[] = "Hello, world!";
	char s2[30] ;
	char *s3 = ft_memcpy(s2, s1, 24);
	printf("%s\n", s3);
	char *s4 = memcpy(s2, s1, 24);
    printf("%s\n", s4);

}
