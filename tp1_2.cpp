#include <stdio.h>

int cuadradoNumero(int num){

    int cuadrado = num*num;

    return cuadrado;
}

void cuadradoNumero2(int num){

    int cuadrado = num*num;

    printf("\nEl cuadrado del numero es: %d", cuadrado);
}

void funcionVariable(int var){

    printf("\nDireccion de la variable: %d \n Contenido de la variable:", &var, var);
}

void invertir(int a, int b) {

    int aux = a;
    a = b;
    b = aux;
}

void orden(int a, int b) {

    if (a > b)
    {
        int aux = b;
        b = a;
        a = aux;
    }
    
}