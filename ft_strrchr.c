/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferrero <rferrero@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 13:14:33 by rferrero          #+#    #+#             */
/*   Updated: 2022/09/23 19:45:00 by rferrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*end;

	end = s;
	while (*end)
	{
		end++;
	}
	while (end != s)
	{
		if (*end == (char) c)
		{
			return ((char *) end);
		}
		end--;
	}
	if (*end == (char) c)
	{
		return ((char *) end);
	}
	return (NULL);
}
