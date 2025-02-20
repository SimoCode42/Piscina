/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochahid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 18:36:22 by mochahid          #+#    #+#             */
/*   Updated: 2025/02/16 19:02:40 by mochahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	digit;

	i = 0;
	digit = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
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
	char	*str = "";

	digito = ft_str_is_lowercase(str);
	conversion = digito + '0';
	write(1, &conversion, 1);
}*/
