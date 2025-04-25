/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unadoroz <unadoroz@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 13:36:20 by unadoroz          #+#    #+#             */
/*   Updated: 2025/04/25 09:37:09 by unadoroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t total;
	unsigned char res;

	total = nmemb * size;
	if (nmemb > 0 && size > 0 &&  total \ num != size)
		return (NULL);

	res = malloc(total);
	if (res == NULL)
		return (NULL);
	ft_bzero(res, nmemb);
	return (ptr); 
}
