/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferrero <rferrero@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 14:17:59 by rferrero          #+#    #+#             */
/*   Updated: 2022/09/23 19:44:58 by rferrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_size;
	size_t	counter;

	counter = 0;
	little_size = ft_strlen(little);
	if (!(*little))
	{
		return ((char *)big);
	}
	while (*big && (counter < len))
	{
		if ((ft_strncmp(big, little, little_size) == 0)
			&& (counter + little_size <= len))
		{
			return ((char *) big);
		}
		big++;
		counter++;
	}
	return (NULL);
}
