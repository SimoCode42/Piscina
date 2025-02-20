/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochahid <mochahid@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 23:09:44 by mochahid          #+#    #+#             */
/*   Updated: 2025/02/06 23:10:53 by mochahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
/*
int	main(void)
{
	int	c;

	ft_ft(&c);
	// c = c + '0'; quiero probar para que me imprime el numero, pero es mas
 	//complejo pq hay que tirar de ascii, tener en cuenta que son dos digitos 
 	//por lo que tendria que hacerme 2 writes y demas.
	write(1, &c, 1);
}*/
