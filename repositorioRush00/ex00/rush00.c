/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrosio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 11:33:39 by jbrosio           #+#    #+#             */
/*   Updated: 2025/02/01 21:16:35 by jbrosio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int y, int x)
{
	int	column;
	int	row;

	column = 1;
	row = 1;
	while (row <= x)
	{
		while (column <= y)
		{
			if ((row == 1 && column == 1) || (row == x && column == 1))
				ft_putchar('o');
			else if ((row == x && column == y) || (row == 1 && column == y))
				ft_putchar('o');
			else if ((row > 1 && row < x) && (column > 1 && column < y))
				ft_putchar(' ');
			else if ((row == 1 && column < y) || (row == x && column < y))
				ft_putchar('-');
			else
				ft_putchar('|');
			column++;
		}
		column = 1;
		ft_putchar('\n');
		row++;
	}
}
