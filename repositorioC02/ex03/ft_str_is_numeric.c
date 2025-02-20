/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochahid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 18:26:31 by mochahid          #+#    #+#             */
/*   Updated: 2025/02/16 18:26:46 by mochahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	digit;

	i = 0;
	digit = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
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
char	*f(char *str)
{
	return (str);
}

int	main(void)
{
	char	*str;
	char	numero;
	int		digito;

	str = f("3");
	digito = ft_str_is_numeric(str);
	numero = digito + '0';
	write(1, &numero, 1);
}*/
