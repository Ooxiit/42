/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cferrero <cferrero@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 18:13:06 by cferrero          #+#    #+#             */
/*   Updated: 2021/09/04 19:37:57 by cferrero         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int				i;
	unsigned int	buff;

	i = 0;
	buff = 0;
	while (i++ < size)
		dest[i] = src[i];
	dest[i + 1] = '\0';
	while (*src++)
		buff++;
	return (buff);
}
