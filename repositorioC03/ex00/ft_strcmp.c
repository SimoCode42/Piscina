/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochahid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 22:31:27 by mochahid          #+#    #+#             */
/*   Updated: 2025/02/18 01:06:32 by mochahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	value;

	i = 0;
	value = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && value == 0)
	{
		if (s1[i] != s2[i])
			value = s1[i] - s2[i];
		i++;
	}
	return (value);
}
/*
int	main(void)
{
	char	*s1 = "Hola mundo";
	char	*s2 = "Hola mundo";
	int n = ft_strcmp(s1, s2);
	char	escribe = n + '0';
	write(1, &escribe, 1);
}*/
