/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochahid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 12:39:11 by mochahid          #+#    #+#             */
/*   Updated: 2025/02/10 12:53:03 by mochahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *a / *b;
	*b = c % *b;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 13;
	b = 5;
	ft_ultimate_div_mod(&a, &b);
	a = a + '0';
	b = b + '0';
	write(1, &a, 1);
	write(1, "\n", 1);
	write(1, &b, 1);
}*/
