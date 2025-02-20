/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochahid <mochahid@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 14:25:12 by mochahid          #+#    #+#             */
/*   Updated: 2025/01/31 14:25:17 by mochahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	positivo;
	char	negativo;

	positivo = 'P';
	negativo = 'N';
	if (n >= 0)
	{
		write (1, &positivo, 1);
	}
	else
	{
		write (1, &negativo, 1);
	}
}
