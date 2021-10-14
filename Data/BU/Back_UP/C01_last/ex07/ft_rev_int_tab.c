/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cferrero <cferrero@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 14:29:56 by cferrero          #+#    #+#             */
/*   Updated: 2021/09/03 21:04:13 by cferrero         ###   ########lyon.fr   */
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
