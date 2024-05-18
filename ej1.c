#include <stdio.h>
#include <stdlib.h>

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
    @n = numero ingresado por el usuario
    @array = array definido en la funcion principal
*/

int busqueda_binaria(int n, int array[], int size) {
    int i;
}

int busqueda_lineal_recursiva() {

}

int main(int argc, char *argv[]) {

    int array[] = {2, 4, 6, 23, 56, 79};

    int n = atoi(argv[1]);
    int size = sizeof(array) / sizeof(array[0]); // Se calcula el tamaño del array

    int posicion_lineal = busqueda_lineal(n, array, size);

    if (posicion_lineal != -1) {
        printf("Busqueda lineal:\narray[%d] = %d\n", posicion_lineal, n);
    } else {
        printf("El numero %d no se encuentra en el array\n", n);
    }

    return 0;
}