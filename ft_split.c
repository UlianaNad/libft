/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unadoroz <unadoroz@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 14:08:43 by unadoroz          #+#    #+#             */
/*   Updated: 2025/04/29 15:34:19 by unadoroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
s: The string to be split.
c: The delimiter character.
The array of new strings resulting from the split. NULL if the allocation fails.
Allocates memory (using malloc(3)) and returns an array of strings obtained by splitting ’s’ using
the character ’c’ as a delimiter. The array must end with a NULL pointer.
*/
/*

Count how many words there is in the string, depending on the delimiter

Allocate an array of arrays (words array) big enough to hold all words + 1 that we can set to 0

Allocate a string for each words in our words array and copy the words in it

Free everything if we have a memory allocation error.
*/

#include "libft.h"
static int count_words(char *s, char c)
{
	int words;
	words = 0;
	while (*s && *s == c)
        s++;
	while (*s)
	{
		if(ft_isalnum(*s))
			{
				if(*(s + 1) == c || *(s + 1) == '\0')
					words++; 
			}
		s++;
	}
	return (words);
}

#include <stdio.h>
int main()
{
	char s[] = "Hello guys how are you";
	char w = ' ';
	printf("%d\n", count_words(s, w));
}
/*
char **ft_split(char const *s, char c)
{
	int i = 0;

	while(str[i] == ' ' || str[i] >= '\t' || str[i] <= '\r')
	{
		i++;
	}
	while(s[i])
	{
		if(s[i] == c)
			{
				
			}
	}
	
	
}
*/
