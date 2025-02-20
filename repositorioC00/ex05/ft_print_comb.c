/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochahid <mochahid@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 12:46:59 by mochahid          #+#    #+#             */
/*   Updated: 2025/02/03 12:47:07 by mochahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	escribe(char x, char y, char z)
{
	write (1, &x, 1);
	write (1, &y, 1);
	write (1, &z, 1);
}

void	ft_print_comb(void)
{
	char	x;
	char	y;
	char	z;

	x = '0';
	while (x <= '7')
	{
		y = x + 1;
		while (y <= '8')
		{
			z = y +1;
			while (z <= '9')
			{
				escribe(x, y, z);
				if (x < '7' || y < '8' || z < '9')
				{
					write(1, ", ", 2);
				}
				z++;
			}
			y++;
		}
		x++;
	}
}
