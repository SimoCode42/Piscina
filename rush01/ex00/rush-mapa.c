/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-mapa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-cag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 12:26:58 by jose-cag          #+#    #+#             */
/*   Updated: 2025/02/08 12:27:00 by jose-cag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	isPosible2(char *arr1, char *arr2, char *arr3, char *arr4)
{
	int	cont;
	int	good;
	int	isNum1;

	cont = 0;
	good = 1;
	isNum1 = 0;
	if (arr1[0] == 1)
	{
		if (arr3[0] != 1)
		{
			write(1,"ERROR",5);
			good = 0;
		}
	}

	while (arr1[cont] != '\n')
	{
		
		if(arr1[cont] == 1)
		{
			isNum1++;
		}
		if (arr1[cont] == 4)
		{
			if (arr2[cont] != 1)
			{
				write(1,"ERROR",5);
				good = 0;
			}
		}
		cont++;
		if (cont >= 4)
		{
			break;
		}
		
		
	}
	
	if (isNum1 != 1)
	{
		write(1,"ERROR",5);
		good = 0;
	}

	isNum1 = 0;
	cont = 0;

	while (arr2[cont] != '\n')
	{
		
		if(arr2[cont] == 1)
		{
			isNum1++;
		}
		cont++;
		if (cont >= 4)
		{
			break;
		}
	}
	if (isNum1 != 1)
	{
		write(1,"ERROR",5);
		good = 0;
	}

	isNum1 = 0;
	cont = 0;
	while (arr3[cont] != '\n')
	{
		
		if(arr3[cont] == 1)
		{
			isNum1++;
		}
		if (arr3[cont] == 4)
		{
			if (arr4[cont] != 1)
			{
				write(1,"ERROR",5);
				good = 0;
			}
		}
		cont++;
		if (cont >= 4)
		{
			break;
		}
	}
	
	if (isNum1 != 1)
	{
		write(1,"ERROR",5);
		good = 0;
	}

	isNum1 = 0;
	cont = 0;

	while (arr4[cont] != '\n')
	{
		
		if(arr4[cont] == 1)
		{
			isNum1++;
		}
		cont++;
		if (cont >= 4)
		{
			break;
		}
	}
	
	
	if (isNum1 != 1)
	{
		write(1,"ERROR",5);
		good = 0;
	}

	isNum1 = 0;
	cont = 0;

	if (arr1[3] == 1)
	{
		if (arr4[0] != 1)
		{
			write(1,"ERROR",5);
			good = 0;
		}
		
	}
	if (arr4[3] == 1)
	{
		if (arr2[3] != 1)
		{
			write(1,"ERROR",5);
			good = 0;
		}
		
	}
	
	if (arr2[0] == 1)
	{
		if (arr3[3] != 1)
		{
			write(1,"ERROR",5);
			good = 0;
		}
	}

	/*while (arr1[cont] != "\n")
	{
		if (arr1[cont])
		{
			
		}
		
		cont++;
	}
	cont = 0;*/

	return (good);
	
}

int	isPosible(char *str)
{
	int	cont;
	int cont2;
	char	arr1[4];
	char	arr2[4];
	char	arr3[4];
	char	arr4[4];

	cont = 0;
	cont2 = 0;
	while (str[cont] != '\n')
	{
		cont++;
		if (cont >= 32)
		{
			break;
		}
		
	}
	if (cont == 32)
	{
		cont = 0;
		while (cont <= 32)
		{
			if (str[cont] != ' ')
			{
				if (cont <= 7)
				{
					arr1[cont2] = str[cont];
					cont2++;
					if (cont2 >= 4)
					{
						cont2 = 0;
					}
				}
				else if (cont <= 14)
				{
					arr2[cont2] = str[cont];
					cont2++;
					if (cont2 >= 4)
						cont2 = 0;
				}
				else if (cont <= 21)
				{
					arr2[cont2] = str[cont];
					cont2++;
					if (cont2 >= 4)
					{
						cont2 = 0;
					}
				}
				else
				{
					arr2[cont2] = str[cont];
					cont2++;
					if (cont2 >= 4)
					{
						cont2 = 0;
					}
				}
			}	
			cont++;
		}
			return (isPosible2(arr1,arr2,arr3,arr4));
	}
	else
	{
		write(1,"ERROR",5);
		return 0;
	}
}
