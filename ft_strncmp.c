/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferrero <rferrero@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 13:13:53 by rferrero          #+#    #+#             */
/*   Updated: 2022/09/23 19:44:56 by rferrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	counter;

	counter = 0;
	while ((s1[counter] || s2[counter]) && (counter < n))
	{
		if (s1[counter] != s2[counter])
		{
			return (((unsigned char *)s1)[counter]
					- ((unsigned char *)s2)[counter]);
		}
		counter++;
	}
	return (0);
}
