/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush03.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochahid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 18:30:48 by mochahid          #+#    #+#             */
/*   Updated: 2025/02/01 18:37:28 by mochahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar (char c)
{
	write (1,&c,1);
}

void 	rush (int x, int y)
{
	int row;
	int column;
	
	row = 1;
	column = 1;
	
	while (row <= x) 
	{
		while (column <= y)
		{
			if (column == 1 && (row == 1 || row == x)) 
				ft_putchar ('A');
			else if (row
			else if (column == y && (row == 1 || row == x))
				ft_putchar ('C');
			
			else
				ft_putchar ('B');		
			column++;
		}
	
		column = 1;
		row++;
		ft_putchar ('\n');
		
	}	
}

int	main (void)
{
	rush (10, 5);
	return 0;
}	
