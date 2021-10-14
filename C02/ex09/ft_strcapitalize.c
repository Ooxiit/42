/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cferrero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 21:38:35 by cferrero          #+#    #+#             */
/*   Updated: 2021/09/04 15:56:29 by cferrero         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	capitalize(char *str, int i)
{
	str[i] -= 32;
}

char	*ft_strcapitalize(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[0] >= 'a' && str[0] <= 'z')
			capitalize(str, 0);
		if (str[i] >= 32 && str[i] <= 64)
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				capitalize(str, i + 1);
		i++;
	}
	return (str);
}
