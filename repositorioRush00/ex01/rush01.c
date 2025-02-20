/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochahid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 19:11:06 by mochahid          #+#    #+#             */
/*   Updated: 2025/02/02 19:11:11 by mochahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int		column;
	int		row;

	column = 1;
	row = 1;
	while (row <= y)
	{
		while (column <= x)
		{
			if ((row == 1 && column == 1) || (row == y && column == x))
				ft_putchar('/');
			else if ((row == y && column == 1) || (row == 1 && column == x))
				ft_putchar('\\');
			else if ((row > 1 && column > 1) && (column < x && row < y))
				ft_putchar(' ');
			else
				ft_putchar('*');
			column++;
		}
		column = 1;
		ft_putchar('\n');
		row++;
	}
}
