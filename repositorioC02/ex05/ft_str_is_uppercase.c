/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochahid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 19:04:23 by mochahid          #+#    #+#             */
/*   Updated: 2025/02/16 19:08:56 by mochahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	digit;

	i = 0;
	digit = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
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
	char	*str = "ADE";

	digito = ft_str_is_uppercase(str);
	conversion = digito + '0';
	write(1, &conversion, 1);
}*/
