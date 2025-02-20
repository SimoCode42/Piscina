/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochahid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 20:02:01 by mochahid          #+#    #+#             */
/*   Updated: 2025/02/16 22:17:19 by mochahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	cap;
	int	word;

	cap = 0;
	word = 0;
	while (str[cap] != '\0')
	{
		if (word == 0 && (str[cap] >= 'a' && str[cap] <= 'z'))
		{
			str[cap] -= 'a' - 'A';
			word++;
		}
		else if (word > 0 && (str[cap] >= 'A' && str[cap] <= 'Z'))
			str[cap] += 'a' - 'A';
		else if ((str[cap] < '0') || (str[cap] > '9' && str[cap] < 'A')
			|| (str[cap] > 'Z' && str[cap] < 'a') || (str[cap] > 'z'))
			word = 0;
		else
			word++;
		cap++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = "salut, comMe*nt tu vas ? 42Mots quaḉra/nte-de7ux; \
ciN5quante+et+un";
	char	*frase = ft_strcapitalize(str);

	while (*frase != '\0')
	{
		write(1, frase, 1);
		frase++;
	}
}*/
