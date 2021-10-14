/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cferrero <cferrero@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 09:57:41 by cferrero          #+#    #+#             */
/*   Updated: 2021/09/03 13:46:37 by cferrero         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *tab, int i)
{
	int	buff;

	buff = tab[i];
	tab[i] = tab[i - 1];
	tab[i - 1] = buff;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;

	i = 1;
	while (i < size)
	{
		if (tab[i] < tab[i - 1])
		{
			ft_swap(tab, i);
			ft_sort_int_tab(tab, size);
		}
		i++;
	}
}
