#include <stdio.h>

int main() {

    printf("Hola Mundo");

    int var = 10, *p_var;
    p_var = &var;

    printf("\nEl contenido del puntero: %d \n La direccion de memoria almacenada en el puntero: %d \n La direccion de memoria de la variable: %d \n La direccion de memoria del puntero: %d \n El tamaño de memoria utilizado por la variable: %d", *p_var, p_var, &var, &p_var, sizeof(var));
}