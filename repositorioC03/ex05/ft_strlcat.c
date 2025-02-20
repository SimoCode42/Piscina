/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochahid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 12:22:17 by mochahid          #+#    #+#             */
/*   Updated: 2025/02/19 12:24:26 by mochahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	srcl;
	unsigned int	destl;
	unsigned int	i;

	srcl = 0;
	destl = 0;
	i = 0;
	while (src[srcl] != '\0')
		srcl++;
	while (dest[destl] != '\0')
		destl++;
	if (size <= destl)
		return (size + srcl);
	while (i < srcl && destl + i < size - 1)
	{
		dest[destl + i] = src[i];
		i++;
	}
	dest[destl + i] = '\0';
	return (srcl + destl);
}
/*
int	main(void)
{
	char	dest[50] = "Hola, ";
	char	src[] = "mundo!";
	
	unsigned int	size = 50;
	unsigned int	result;

	result = ft_strlcat(dest, src, size);

	write(1, dest, 50);
	write(1, "\n", 1);
	write(1, "Resultado de ft_strlcat: ", 24);
	char result_str[10]; 
	int i = 0;
	if (result == 0)
	{
		write(1, "0", 1);
	}
	else
	{
		while (result != 0)
		{
			result_str[i] = (result % 10) + '0'; 
			result /= 10;
			i++;
		}
		for (int j = i - 1; j >= 0; j--) // Invertir y escribir el número
			write(1, &result_str[j], 1);
	}
	write(1, "\n", 1);
	return (0);
}*/
