/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unadoroz <unadoroz@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 11:32:31 by unadoroz          #+#    #+#             */
/*   Updated: 2025/04/29 12:37:55 by unadoroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Allocates memory (using malloc(3)) and returns a substring from the string ’s’.
The substring starts at index ’start’ and has a maximum length of ’len’.
Returns - The substring. NULL if the allocation fails.*/

#include <stdlib.h>
#include <string.h>
#include "libft.h"
char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char const *str;
	char *sub_str;
	size_t total;

	str = s;
	
	if(!*str)
		return (NULL);
	if (start >= ft_strlen(str))
		return(NULL);
	total = ft_strlen(str + start);
	if (total > len)
		total = len;
	sub_str = malloc((total + 1) *  sizeof(char));
	if(!sub_str)
		return(NULL);
	ft_strlcpy(sub_str, str + start, total + 1 );
	return(sub_str);
}
