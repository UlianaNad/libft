/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unadoroz <unadoroz@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 13:52:34 by unadoroz          #+#    #+#             */
/*   Updated: 2025/04/29 14:06:36 by unadoroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Parameters 
s1: The string to be trimmed.
set: The string containing the set of characters to be removed.
Description: Allocates memory (using malloc(3)) and returns a copy of ’s1’ with characters from ’set’ removed
from the beginning and the end.
*/

#include <string.h>
#include "libft.h"
char *ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (start < end && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	return (ft_substr(s1, start, end - start));	
}
