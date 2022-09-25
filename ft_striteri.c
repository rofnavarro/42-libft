/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferrero <rferrero@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 15:22:53 by rferrero          #+#    #+#             */
/*   Updated: 2022/09/23 19:44:42 by rferrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	counter;

	if (!s || !f)
	{
		return ;
	}
	counter = 0;
	while (s[counter] != '\0')
	{
		f(counter, &s[counter]);
		counter++;
	}
}
