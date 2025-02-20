/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochahid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 22:42:39 by mochahid          #+#    #+#             */
/*   Updated: 2025/02/13 23:00:43 by mochahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	digit;

	i = 0;
	digit = 1;
	while (str[i] != '\0' )
	{
		if ((str[i] >= 'A' && str[i] <= 'Z'))
		{
			digit = 1;
		}
		else if ((str[i] >= 'a') && (str[i] <= 'z'))
		{
			digit = 1;
		}
		else
			return (0);
		i++;
	}
	return (digit);
}
/*
int	main(void)
{
	int		digito;
	char	conversion;
	char	*str = "t78t";

	digito = ft_str_is_alpha(str);
	conversion = digito + '0';
	write(1, &conversion, 1);
}*/
