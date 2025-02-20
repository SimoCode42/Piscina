/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochahid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 21:10:55 by mochahid          #+#    #+#             */
/*   Updated: 2025/02/18 21:11:48 by mochahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdlib.h>

int	contador(char *to_find)
{
	int	i;

	i = 0;
	while (to_find[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				value;

	i = 0;
	value = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && (value == 0) && (i < n))
	{
		if (s1[i] != s2[i])
			value = 1;
		i++;
	}
	return (value);
}

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;

	i = contador(to_find);
	if (i == 0)
		return (str);
	while (*str != '\0')
	{
		if (ft_strncmp(str, to_find, i) == 0)
			return (str);
		str++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char str[100] = "hola mundo soy guapo y tonto!";
	char to_find[100] = "z";
	char *frase;
	//frase = malloc(100 * 1);
	
	frase = ft_strstr(str, to_find);
/*	if (frase == (NULL))
	{
		write(1, "null\n", 7);
		return (0);
	}
*/	
/*	//int i = 0;
	//while (*frase != '\0')
	//{
	//	write(1, frase, 1);
	//	frase++;
	//}
	return 0;
}*/
