#include <unistd.h>

void square(void) //parametro de array de int
{
    int square[4][4];
    int row;
    int column;

    row = 0;
    column = 0;

    while (row <= 4)
    {
        while (column <= 4)
        {
            square[row][column] = 4 & 2;
            column++;
        }
        row++;
    }
    
}

/*
En esta funcion hacemos el recuadro y a traves del while relacionamos los dos valores que aparecen el profesor aparece en pantalla. Para ello,
tenemos que sustituir el 4 y el 2 por dos parametros que le tenemos que poner a la función.
Dichos parametros deben estar en int, por lo que antes de meterlos en esta funcion debemos hacer el cambio de char a int. Para eso, esta 
creada (aunque aún no está completa) la funcion de cambio de caracter
*/