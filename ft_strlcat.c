/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferrero <rferrero@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 13:11:49 by rferrero          #+#    #+#             */
/*   Updated: 2022/09/23 19:44:48 by rferrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	counter;
	size_t	ref;

	counter = 0;
	ref = 0;
	while (dest[counter] && counter < size)
	{
		counter++;
	}
	ref = counter;
	while (src[counter - ref] && (counter + 1) < size)
	{
		dest[counter] = src[counter - ref];
		counter++;
	}
	if (ref < size)
	{
		dest[counter] = '\0';
	}
	return (ref + ft_strlen(src));
}
