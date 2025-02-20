/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochahid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 20:35:13 by mochahid          #+#    #+#             */
/*   Updated: 2025/02/20 19:28:16 by mochahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	entero;
	int	signo;

	entero = 0;
	i = 0;
	signo = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n' \
	|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signo++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		entero = entero * 10 + (str[i] - '0');
		i++;
	}
	if (signo % 2 != 0)
		entero = -entero;
	return (entero);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*str = " ---+--+1234ab567";
	//ft_atoi(str);
	printf("%d", ft_atoi(str));
	return (0);
}*/
