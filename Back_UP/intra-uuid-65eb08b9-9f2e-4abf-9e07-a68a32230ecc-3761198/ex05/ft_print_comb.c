/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cferrero <cferrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 10:57:17 by cferrero          #+#    #+#             */
/*   Updated: 2021/09/02 16:40:03 by cferrero         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0' - 1;
	while (a ++ < '7')
	{
		b = a;
		while (b ++ < '8')
		{
			c = b;
			while (c ++ < '9')
			{	
				ft_putchar(a);
				ft_putchar(b);
				ft_putchar(c);
				if (!((a == '7') && (b == '8') && (c == '9')))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}	
	}
}
