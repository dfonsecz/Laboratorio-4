### Universidad de Costa Rica
#### IE0117 Programación Bajo Plataformas Abiertas
#### B93070 Daniela Fonseca Zumbado
---
# Laboratorio-4

## Introducción
A través de este laboratorio, se aborda tres aspectos importantes en el desarrollo de software, para el programa de C. Estos aspectos son el uso de arreglos, de recursividad y de punteros. Los arreglos son un tipo de dato que brinda ciertas facilidades a la hora de elaboración y ejecución de un programa, ya que permiten contener varios datos dentro de sí.

## Implementación
### Arreglos y recursividad
Este programa recibe un parámetro ingresado por el usuario, el cual debe corresponder a un número entero. El objetivo de este programa es tomar este número entero y compararlo con los números que se encuentran dentro de un arreglo ordenado, el cual se detalla a continuación.

$$array = (2, 4, 6, 23, 56, 79)$$

Se detalla la implementación de las funciones del programa:

_**Búsqueda Lineal**_

Recibe como parámetros el número ingresado por el usuario, el arreglo ordenado mencionado anteriormente, y el tamaño del arreglo, que se calcula en la función principal. Itera sobre los valores del arreglo en orden secuencial, y retorna la posición del número dentro del arreglo que coincide con el número ingresado por el usuario, en caso de que lo haya.

_**Búsqueda Binaria**_

Recibe como parámetros el número ingresado por el usuario y el arreglo ordenado, pero también un número $f$. Este número f coincide debe coincidir con el tamaño del arreglo, ya que corresponde a la posición del último número dentro del arreglo. No se solicita un parámetro de la primera función del arreglo ya que se asume que es cero, y la función no es recursiva.

Esta función utiliza un loop de _while_. Se calcula el valor medio entre la posición inicial $0$ y la posición final $f$. Se compara el número ingresado por el usuario, con el valor del arreglo que se encuentra en la posición media $h$.

1. Si se determina que $h$ es mayor, en el siguiente ciclo de _while_, la posición inicial pasa a ser $h-1$.
2. Si se determina que $h$ es menor, en el siguiente ciclo de _while_, la posición final pasa a ser $h+1$.

_**Búsqueda Binaria Recursiva**_

Recibe como parámetros el número ingresado por el usuario, el arreglo ordenado, un número inicial $i$, y un número inicial $f$. Al inicializar esta función por primera vez, se ingresan los parámetros $i = 0$ y $f = size$ (tamaño del arreglo). Sin embargo, debido a que esta función debe operar de manera recursiva, estos dos parámetros cambian conforme se complete cada ciclo de operación de la función.

La funcionalidad es similar a la de la función anterior. Se calcula un valor medio, y se determina el nuevo rango de la misma manera.

1. Si se determina que $h$ es mayor, en el siguiente ciclo de _while_, la posición inicial pasa a ser $h-1$.
2. Si se determina que $h$ es menor, en el siguiente ciclo de _while_, la posición final pasa a ser $h+1$.

La diferencia es que en vez de cambiar las variables locales, se llama de nuevo a la misma función con los nuevos parámetros.

### Arreglos y punteros
Este programa no recibe argumentos de parte del usuario que lo ejecuta. Simplemente se espera su ejecución. En la función principal se define un arreglo desordenado, el cual se presenta a continuación.

$$array = (21, 24, 65, 3, 56, 12, 35, 15)$$

## Resultados

### Arreglos y recursividad

Al ejecutar el programa e ingresar como argumento el número $4$, el cual se sabe de antemano que se encuentra dentro del arreglo, se obtiene el mismo resultado con las tres funciones implementadas. Se encuentra la posición dentro del arreglo de este número. Por otra parte, al ingresar como argumento el número $5$, que no se encuentra dentro del arreglo definido, se imprime un mensaje que indica que este número no se encuentra dentro del arreglo. Esto se puede confirmar en la figura que se presenta a continuación.

![ej1.c](images/ej1.png)

### Arreglos y punteros

![ej2.c](images/ej2.png)

## Conclusiones y recomendaciones
## Referencias
