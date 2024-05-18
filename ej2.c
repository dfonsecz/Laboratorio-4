#include <stdio.h>

/*
Universidad de Costa Rica
Programacion Bajo Plataformas Abiertas
Laboratorio 4
Elaborado por: Daniela Fonseca Zumbado B93070

Ejercicio 2: Uso de arreglos y punteros en C
*/

/*
findMinimum
-
Esta funcion recibe un arreglo como parametro y retorna el valor minimo
@ array: es el arreglo desordenado que se indica en la funcion main
@ size: es el tamaño del arreglo ingresado
*/

int findMinimum(int array[], int size) {
    int i;
    int minimum = array[0];

    for (i = 1; i < size; i++) {
        if (array[i] < minimum) {
            minimum = array[i];
        }
    }

    return minimum;
}

/*
findMaximum
-
Esta funcion recibe un arreglo como parametro y retorna el valor maximo
@ array: es el arreglo desordenado que se indica en la funcion main
@ size: es el tamaño del arreglo ingresado
*/

int findMaximum(int array[], int size) {
    int i;
    int maximum = array[0];

    for (i = 1; i < size; i++) {
        if (array[i] > maximum) {
            maximum = array[i];
        }
    }

    return maximum;
}

/*
findMinMax
-
Esta funcion obtiene tanto el minimo como el maximo, utilizando punteros
@ array: es el arreglo desordenado que se indica en la funcion main
@ *minimum:
@ *maximum:
@ size: es el tamaño del arreglo ingresado
*/

int findMinMax (int *array, int *minimum, int *maximum, int size) {
    int i;
    
    *minimum = array[0];
    *maximum = array[0];

    for (i = 1; i < size; i++) {
        if (array[i] < *minimum) {
            *minimum = array[i];
        }
        else if (array[i] > *maximum) {
            *maximum = array[i];
        }
    }

    return 0;
}

/*
Funcion principal del programa
-
1- Define un arreglo desordenado
2- Con este arreglo, y su tamaño, utiliza las funciones findMinimum y findMaximum para calcular
los numeros minimo y maximo del arreglo
3- Posteriormente, realiza el mismo procedimiento pero calcula el minimo y maximo con la funcion
findMinMax, la cual utiliza punteros
*/

int main() {
    // Arreglo desordenado
    int array[] = {21, 24, 65, 3, 56, 12, 35, 15};
    int size = sizeof(array) / sizeof(array[0]); // tamaño del arreglo desordenado

    // Metodo sin punteros

    printf("Funciones separadas:\n");

    int minimum = findMinimum(array, size);
    int maximum = findMaximum(array, size);

    printf("Minimo: %d\n", minimum);
    printf("Maximo: %d\n", maximum);

    // Punteros

    printf("\nPunteros:\n");

    findMinMax(array, &minimum, &maximum, size);

    printf("Minimo: %d\n", minimum);
    printf("Maximo: %d\n", maximum);

    return 0;
}