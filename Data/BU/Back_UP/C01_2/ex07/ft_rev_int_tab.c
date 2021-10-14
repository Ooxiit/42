/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cferrero <cferrero@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 14:29:56 by cferrero          #+#    #+#             */
/*   Updated: 2021/09/04 19:12:12 by cferrero         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	buff;

	i = 0;
	while (i < size / 2)
	{
		buff = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = buff;
		i++;
	}
}
#include <stdio.h>
void	ft_print_int_array(int *tab, int size)
{
	int i;

	i = 0;
	while(i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
}

int	main()
{
	int tab[] = {0, 1, 2, 3, 4, 5};
	ft_rev_int_tab(tab, 6);
	ft_print_int_array(tab, 6);
	return 0;
}
