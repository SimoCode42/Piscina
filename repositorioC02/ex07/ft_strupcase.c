/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochahid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 19:18:37 by mochahid          #+#    #+#             */
/*   Updated: 2025/02/16 19:49:43 by mochahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = "gt4158reg";
	
	char *frase = ft_strupcase(str);
	while (*frase != '\0')
	{
		write(1, frase, 1);
		frase++;
	}
}*/
