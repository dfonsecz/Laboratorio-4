#include <stdio.h>
#include <stdlib.h>

/*
Universidad de Costa Rica
Programacion Bajo Plataformas Abiertas
Laboratorio 4
Elaborado por: Daniela Fonseca Zumbado B93070
*/

/*
Bisqueda lineal
-
@n: numero ingresado por el usuario
@array: arreglo ordenado definido en la funcion principal
@f: tamaño del arreglo, se usa para saber la posicion del valor final en el arreglo
*/

int busqueda_lineal(int n, int array[], int size) {
    int i;

    for (i = 0; i < size; i++) {
        if (array[i] == n) {
            return i;
        }
    }

    return -1;
}

/*
Busqueda binaria
-
 @n: numero ingresado por el usuario
 @array: arreglo ordenado definido en la funcion principal
 @f: tamaño del arreglo, se usa para saber la posicion del valor final en el arreglo
*/

int busqueda_binaria(int n, int array[], int f) {
    int i = 0;
    int h;

    while (i <= f) {
        h = (i + f) / 2;
        if (array[h] == n) {
            return h; // Retorna h como la posicion del numero que se busca
        }
        else if (array[h] > n) {
            f = h - 1;
        }
        else {
            i = h + 1;
        }
    }
    return -1;
}

/*
Busqueda binaria recursiva
-
 @n: numero ingresado por el usuario
 @array: arreglo ordenado definido en la funcion principal
 @f: tamaño del arreglo, se usa para saber la posicion del valor final en el arreglo
*/

int busqueda_binaria_recursiva(int n, int array[], int i, int f) {
    int h = (i + f) / 2;

    if (i > f) {
        return -1;
    }

    if (array[h] == n) {
        return h; // Retorna h como la posicion del numero que se busca
    }
    else if (array[h] > n) {
        return busqueda_binaria_recursiva(n, array, i, h - 1); // Se busca en la mitad izquierda
    }
    else {
        return busqueda_binaria_recursiva(n, array, h + 1, f); // Se busca en la mitad derecha
    }
}

int main(int argc, char *argv[]) {

    int array[] = {2, 4, 6, 23, 56, 79};

    int n = atoi(argv[1]);
    int size = sizeof(array) / sizeof(array[0]); // Se calcula el tamaño del array

    // Busqueda lineal

    int posicion_lineal = busqueda_lineal(n, array, size);

    if (posicion_lineal != -1) {
        printf("Busqueda lineal:\narray[%d] = %d\n", posicion_lineal, n);
    } else {
        printf("El numero %d no se encuentra en el array\n", n);
    }

    // Busqueda binaria

    int posicion_binaria = busqueda_binaria(n, array, size);

    if (posicion_binaria != -1) {
        printf("Busqueda binaria:\narray[%d] = %d\n", posicion_binaria, n);
    } else {
        printf("El numero %d no se encuentra en el array\n", n);
    }

    // Busqueda binaria recursiva

    int posicion_binaria_recursiva = busqueda_binaria_recursiva(n, array, 0, size);

    if (posicion_binaria_recursiva != -1) {
        printf("Busqueda binaria recursiva:\narray[%d] = %d\n", posicion_binaria_recursiva, n);
    } else {
        printf("El numero %d no se encuentra en el array\n", n);
    }

    return 0;
}