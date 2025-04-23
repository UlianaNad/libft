/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unadoroz <unadoroz@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:12:33 by unadoroz          #+#    #+#             */
/*   Updated: 2025/04/15 11:08:15 by unadoroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if(c >= '0' && c <= '9')
		return (1);
	
	return (0);
}

#include <stdio.h>
#include <ctype.h>
int	 main(void)
{
	char s = 't';
	printf("%d\n",ft_isdigit(s));
	printf("%d\n",isdigit(s));
}
