/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unadoroz <unadoroz@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 09:35:00 by unadoroz          #+#    #+#             */
/*   Updated: 2025/04/15 10:51:49 by unadoroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) 
		return (1);

	return (0);
}

#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	char c = 'H';
	printf("%d\n", ft_isalpha(c));

	printf("%d\n", isalpha(c));
}

