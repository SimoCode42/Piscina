/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochahid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 19:34:39 by mochahid          #+#    #+#             */
/*   Updated: 2025/02/18 19:35:48 by mochahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				value;

	i = 0;
	value = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && (value == 0) && (i < n))
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
	char	*s1 = "Kola mundo";
	char	*s2 = "";
	int	n = 3;
	int out = ft_strncmp(s1, s2, n);
	char	escribe = out + '0';
	write(1, &escribe, 1);
}*/
