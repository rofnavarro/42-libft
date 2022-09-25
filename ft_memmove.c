/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferrero <rferrero@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 03:40:09 by rferrero          #+#    #+#             */
/*   Updated: 2022/09/23 19:44:20 by rferrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*source;
	unsigned char	*destination;

	source = (unsigned char *) src;
	destination = (unsigned char *) dest;
	if (source < destination)
	{
		while (n--)
		{
			destination[n] = source[n];
		}
		return (dest);
	}
	ft_memcpy(destination, source, n);
	return (dest);
}
