/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochahid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 19:10:07 by mochahid          #+#    #+#             */
/*   Updated: 2025/02/16 19:16:40 by mochahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;
	int	digit;

	i = 0;
	digit = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			digit = 1;
		}
		else
		{
			digit = 0;
			return (digit);
		}
		i++;
	}
	return (digit);
}
/*
int	main(void)
{
	int	digito;
	char	conversion;
	char	*str = "grefdsg     ";

	digito = ft_str_is_printable(str);
	conversion = digito + '0';
	write(1, &conversion, 1);
}*/
