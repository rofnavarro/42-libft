/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferrero <rferrero@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 18:46:40 by rferrero          #+#    #+#             */
/*   Updated: 2022/09/23 19:44:19 by rferrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*source;
	unsigned char	*destination;

	if (src == NULL && dest == NULL)
	{
		return (dest);
	}
	source = (unsigned char *) src;
	destination = (unsigned char *) dest;
	while (n--)
	{
		*destination = *source;
		destination++;
		source++;
	}
	return (dest);
}
