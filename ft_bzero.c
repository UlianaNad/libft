/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unadoroz <unadoroz@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 11:19:35 by unadoroz          #+#    #+#             */
/*   Updated: 2025/04/22 11:46:22 by unadoroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
void	ft_bzero(void *s, size_t len)
{
	char	*temp;
	temp = (char *)s;
	size_t	 i;
	i = 0;
	while(i < len)
	{
		temp[i] = 0;
		i++;
	}
}
