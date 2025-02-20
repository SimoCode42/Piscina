/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochahid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 22:34:39 by mochahid          #+#    #+#             */
/*   Updated: 2025/02/11 14:47:22 by mochahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	*inicio;
	int	*final;
	int	aux;

	inicio = tab;
	final = tab;
	aux = size;
	while (aux > 1)
	{
		final++;
		aux--;
	}
	while (inicio < final)
	{
		ft_swap(inicio, final);
		inicio++;
		final--;
	}
}

/*int	main(void)
{
	int *numero = 123456;
	
}*/
/*
int main()
{
	int arr[] = {1, 2, 3, 4, 5};  // Un array de ejemplo
	int size = sizeof(arr) / sizeof(arr[0]);

	// Mostrar el array original
	printf("Array original: ");
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	// Llamar a ft_rev_int_tab para invertir el array
	ft_rev_int_tab(arr, size);

	// Mostrar el array invertido
	printf("Array invertido: ");
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}*/
