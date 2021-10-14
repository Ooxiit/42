/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cferrero <cferrero@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 22:44:41 by cferrero          #+#    #+#             */
/*   Updated: 2021/09/06 02:15:13 by cferrero         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

void	base10to16(unsigned long c)
{
	const char magical_stuff[]={'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'}; 
	if (c > 16)
	{
		base10to16(c / 16);
		ft_putchar(magical_stuff[c % 16]);
	}
    else
        ft_putchar(magical_stuff[c]);
}
void	strto16(char *str, int size, int offset)
{
	int i;
	int j;

	i = offset;
	j = (ft_strlen(str)) % 16;
		while ( i <= offset + 14)
		{	 
			base10to16(str[i++]);
			if ((j % 2) == 1 && i == j)
				base10to16(32);
			else
				base10to16(str[i++]);
				write(1, "  ",2);

		}
		i = offset;
		while (i <= offset + 16)
			ft_putchar(str[i++]);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
    int i;
    int offset; 

    i = 0;
    while (i <= size)
    { 		
			 offset = i;
    		 base10to16((unsigned long) &addr[i]);
    		 write(1," :", 2);
			 strto16(addr, size, offset); 
    		 ft_putchar('\n');
			i+=16;
    }

   return 0;
}
int main(void)
{
    char tab[] = "Bonjour les ankbdckbkkgkcgagcia";

	void *addr = &tab;
    ft_print_memory(addr, 17);
    
}
