#include <unistd.h>

/*int *char_int_passer(char* numbers)
{
    int count;
    int i;
    int newArray[16];
    
    count = 0;
    i = 0;
    while(numbers[i] != '\0')
    {
        numbers[i]-= '0';
        numbers[i]+=1;

        numbers[count++] = newArray[i];
        i++;
    }
    return (newArray);
}*/

/*
#include <stdio.h>
#include <stdlib.h>  // Necesario para malloc

int* char_int_passer(char* numbers) {
    int i = 0;
    int length = 0;

    // Primero calculamos la longitud de la cadena
    while (numbers[length] != '\0') {
        length++;
    }

    // Asignamos memoria dinámica para el array de enteros
    int* result = (int*)malloc(length * sizeof(int));

    if (result == NULL) {
        // En caso de error de asignación de memoria
        printf("Error al asignar memoria.\n");
        return NULL;
    }

    // Convertimos cada caracter a un número entero y lo almacenamos en el array resultante
    while (numbers[i] != '\0') {
        result[i] = numbers[i] - '0';  // Convertimos el caracter a int
        i++;
    }

    return result;
}

int main() {
    char numbers[] = "123456789";  // Array de caracteres con los números

    // Llamamos a la función para convertir la cadena de caracteres a enteros
    int* result = char_int_passer(numbers);

    if (result != NULL) {
        // Mostramos el array de enteros resultante
        printf("Converted array of integers: ");
        for (int i = 0; numbers[i] != '\0'; i++) {
            printf("%d ", result[i]);
        }
        printf("\n");

        // Liberamos la memoria asignada para el array
        free(result);
    }

    return 0;
}

*/