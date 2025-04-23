/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unadoroz <unadoroz@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 15:07:15 by unadoroz          #+#    #+#             */
/*   Updated: 2025/04/23 15:20:04 by unadoroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	i = 0;

	while (i < n && s1[i] && s1[i] == s2[i])
		i++;

	if(i < n)
		return (s1[i] - s2[i]);
	
	return (0);
}

#include <stdio.h>
int main()
{
	char s[] = "Hello you!";
	char w[] = "Hello you!";
	printf("%d\n", ft_strncmp(s, w, 8)); 
	printf("%d\n", strncmp(s, w, 8));
}
