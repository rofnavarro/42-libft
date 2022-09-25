/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferrero <rferrero@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 13:12:55 by rferrero          #+#    #+#             */
/*   Updated: 2022/09/23 19:44:52 by rferrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	counter;

	counter = 0;
	if (s == NULL)
	{
		return (0);
	}
	while (s[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}
