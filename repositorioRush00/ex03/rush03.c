/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancanale <ancanale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 20:44:33 by ancanale          #+#    #+#             */
/*   Updated: 2025/02/01 11:09:04 by ancanale         ###   ########.fr       */
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
			if ((row == 1 && column == 1) || (row == y && column == 1))
				ft_putchar('A');
			else if ((row == y && column == x) || (row == 1 && column == x))
				ft_putchar('C');
			else if ((row > 1 && column > 1) && (column < x && row < y))
				ft_putchar(' ');
			else
				ft_putchar('B');
			column++;
		}
		column = 1;
		ft_putchar('\n');
		row++;
	}
}
