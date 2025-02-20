/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochahid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 19:15:45 by mochahid          #+#    #+#             */
/*   Updated: 2025/02/10 22:37:18 by mochahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	contador;

	contador = 0;
	while (*str != '\0')
	{
		contador++;
		str++;
	}
	return (contador);
}
/*
int	main(void)
{
	char	*frase = "Hola mundo!!! :D";
	int	x;
	int	mod;
	int	div;

	x = ft_strlen(frase);
	if (x <= 9){
		x = x +'0';
		write(1, &x, 1);
	}
	else if ((x > 9) && (x < 100)) {
		mod = x % 10;
		mod = mod + '0';
		div = x / 10;
		div = div + '0';
		write(1, &div, 1);
		write(1, &mod, 1);
	}
}*/
