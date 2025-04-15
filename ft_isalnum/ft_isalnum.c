/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unadoroz <unadoroz@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:28:52 by unadoroz          #+#    #+#             */
/*   Updated: 2025/04/15 12:21:52 by unadoroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if((c >= 'a' && c <= 'z') || (c >= 'A' &&  c <= 'Z') || (c >= '0' && c <= '9'))
			return (1);

	return(0);
}
#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	char c = '3';
	printf("When %c is passed, return value is %d\n", c, ft_isalnum(c));
	printf("When %c is passed, return value is %d\n", c, isalnum(c));
}

