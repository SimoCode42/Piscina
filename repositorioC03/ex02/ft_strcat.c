/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochahid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 20:29:06 by mochahid          #+#    #+#             */
/*   Updated: 2025/02/18 20:46:08 by mochahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	dest[100] = "Hola";
	char	*src = " mundo";
	char	*frase = ft_strcat(dest, src);
	int	i = 0;
	while (frase[i] != '\0')
	{
		write(1, &frase[i], 1);
		i++;
	}
}*/
