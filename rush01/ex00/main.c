#include <unistd.h>

int isPosible(char *str);

char	ft_strcpy(char *dest, char *src)
{
	int	size;
	int	cont;

	size = 0;
	cont = 0;
	while (src[size] != '\0')
	{
		size++;
	}
	while (cont < size)
	{
		dest[cont] = src[cont];
		cont++;
	}
	return (*dest);
}

int	main(int argc, char **argv)
{
		if (argc < 2)
		{
			write(1,"ppçasame los argumentos", 25);
			return 1;
		}
		if (argv)
		{
			
		}
		
		char str;
		ft_strcpy(&str, "hola");
		char cond = (isPosible(&str)) + '0';
		write(1,&cond,1);
	
	return (0);
}