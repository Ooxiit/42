/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_with_no_printable.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cferrero <cferrero@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 19:42:00 by cferrero          #+#    #+#             */
/*   Updated: 2021/09/04 22:41:56 by cferrero         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_bullshit(char c)
{
	unsigned int a;
	unsigned int b;
	char magical_stuff[]={'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};

	a = c / 16;
	b = c % 16;

	ft_putchar('\\');
	ft_putchar(magical_stuff[a]);
	ft_putchar(magical_stuff[b]);
}

void	ft_putstr_with_non_printable(char *str)
{
	int	i;
	
	i = 0;
	while(str[i] != '\0')
	{
		if (str[i] < 32)
			ft_bullshit(str[i]);
		else
			ft_putchar(str[i]);
		i++;
	}
}
int main(void)
{
	char src[]="Coucou\ntu vas bien ?";

	ft_putstr_with_no_printable(src);
}
