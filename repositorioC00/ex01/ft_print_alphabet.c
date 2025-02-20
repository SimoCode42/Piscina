/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochahid <mochahid@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 00:21:02 by mochahid          #+#    #+#             */
/*   Updated: 2025/01/31 00:48:47 by mochahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	alfabeto;

	alfabeto = 'a';
	while (alfabeto <= 'z')
	{
		write (1, &alfabeto, 1);
		alfabeto++;
	}
}
