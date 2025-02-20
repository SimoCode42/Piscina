/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochahid <mochahid@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 12:32:42 by mochahid          #+#    #+#             */
/*   Updated: 2025/01/31 13:40:22 by mochahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	hola;

	hola = 'z';
	while (hola >= 'a' )
	{
		write (1, &hola, 1);
		hola--;
	}
}
