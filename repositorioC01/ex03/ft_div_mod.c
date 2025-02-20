/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochahid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 11:43:39 by mochahid          #+#    #+#             */
/*   Updated: 2025/02/10 11:44:00 by mochahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 13;
	b = 5;
	ft_div_mod(a, b, &div, &mod);
	div = div + '0';
	mod = mod + '0';
	write(1, &div, 1);
	write(1, "\n", 2);
	write(1, &mod, 2);
}*/
