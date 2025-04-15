/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isascii.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unadoroz <unadoroz@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 12:33:25 by unadoroz          #+#    #+#             */
/*   Updated: 2025/04/15 12:50:24 by unadoroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if(c >= 1 && c <= 127)
		return (1);
	return(0);
}
#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	char c = 5;
	printf("When %c is passed, return value is %d\n", c, ft_isascii(c));
	printf("When %c is passed, return value is %d\n", c, isascii(c));
}
