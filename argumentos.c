#include <unistd.h>

int	main(int argc, char **argv)
{
	char *frase = argv[1];
	int i = 0;
	while (frase[i] != '\0')
	{
		write(1, &frase[i], 1);
		i++;
	}
	(void)argc;
}
