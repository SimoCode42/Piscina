/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochahid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 20:50:21 by mochahid          #+#    #+#             */
/*   Updated: 2025/02/18 21:01:52 by mochahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (nb != 0 && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
		nb--;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	dest[100] = "Hola";
	char	*src = " mundo";
	unsigned int	nb = 3;
	char	*frase = ft_strncat(dest, src, nb);
	int	i = 0;
	while (frase[i] != '\0')
	{
		write(1, &frase[i], 1);
		i++;
	}
}*/
