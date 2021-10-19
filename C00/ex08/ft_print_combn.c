/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cferrero <cferrero@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 18:11:51 by cferrero          #+#    #+#             */
/*   Updated: 2021/09/02 16:37:22 by cferrero         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}
void	ft_aff_tab(int &tab, int  n)
{
	int i;

	i = 0;
	while (i < n)
	{
		ft_putchar(tab[i]); 
		write(1, ", ", 2);
		i++;
	}
}

void init_tab(int *tab, int n)
{
	int i;

	i = 0;
	while (i < n)
		tab[i++] = 0;
}

void ft_print_combn(int n)
{
	int tab[9];
	int i;
	int cpt;

	init_tab(tab, n);
	i = -1;
	cpt = -1;
	while (cpt++ < n)
		while (i++ <= 9)
		{
			tab[cpt] = i;
	        ft_aff_tab(&tab, n);
		}
}
int	main(void)
{
	ft_print_combn(2);
	return 0;
}

