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

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"
static int count_words(const char *s, char c)
{
	int words;

    words = 0;
    if(!s)
    {
        return(0);
    }
        
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
void ft_free(void **ptr)
{
    if (ptr && *ptr)
    {
        free(*ptr);
        *ptr = NULL;
     }
}
char **ft_split(char const *s, char c)
{
     int word_len;
     int word_index;
     char **sub_str;
 
     if(!s)
         return(NULL);
     sub_str = (char **)malloc((count_words((char *)s, c) + 1) * sizeof(char *));
     if(!sub_str)
         return(NULL);
     word_index = 0;
     while(*s)
     {
         while (*s && *s == c)
             s++;
         if(*s)
         {
             word_len = 0;
             while(s[word_len] && s[word_len] != c)
                 word_len++;
             sub_str[word_index] = ft_substr(s, 0, word_len);
             if(!sub_str[word_index])
             {
                while(word_index > 0)
                    ft_free((void **)&sub_str[--word_index]);
                ft_free((void **)&sub_str);
                return(NULL);
             }
             word_index++;
             s += word_len;
          }
    }
    sub_str[word_index] = NULL;
    return (sub_str);
}
