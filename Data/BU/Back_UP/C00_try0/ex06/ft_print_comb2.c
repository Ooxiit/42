/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cferrero <cferrero@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 16:35:42 by cferrero          #+#    #+#             */
/*   Updated: 2021/09/02 13:25:44 by cferrero         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n > 9)
	{
		ft_putchar(n / 10 + '0');
		ft_putchar(n % 10 + '0');
	}
	else
	{
		ft_putchar('0');
		ft_putchar(n + '0');
	}
}

void	ft_print_digit(int n1, int n2)
{
	ft_putnbr(n1);
	ft_putchar(' ');
	ft_putnbr(n2);
	if (!((n1 == 98) && (n2 == 99)))
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = -1;
	while (a++ < 98)
	{
		b = -1;
		while (b++ < 99)
		{
			if (a != b)
				ft_print_digit(a, b);
		}
	}
}
