/*******PRESENTACION********
NOMBRE: Juan Manuel Valdez Lopez
FECHA:09 de Febrero de 2025
PROGRAMA: Actividad de programacion.c
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
PROFESOR: Sergio Franco Casillas
DESCRIPCION: En este programa determinamos la suma de los cuadrados de una secuencia de n�meros dada por un usuario
********************************************************************/

#include <stdio.h>
#include <limits.h>  // Para obtener el l�mite de long
//inicio de main
int main() {
    long numero, suma = 0;

    // Solicitar al usuario que ingrese un n�mero
    printf("Introduce un numero: ");
    scanf("%ld", &numero);

    // Verificar si el n�mero es menor que 0
    if (numero < 0) {
        printf("Error: El n�mero no puede ser menor que 0.\n");
        return 1;  // Termina el programa si el n�mero es inv�lido
    }

    // Verificar si el n�mero es mayor que el l�mite permitido para 'long'
    if (numero > LONG_MAX) {
        printf("Error: El n�mero es demasiado grande para un tipo de datos long.\n");
        return 1;  // Termina el programa si el n�mero es demasiado grande
    }

    // Calcular la suma de los cuadrados y mostrar la operaci�n
    printf("Operacion: ");
    for (long i = 1; i <= numero; i++) {
        suma += i * i;
        printf("%ld^2", i);
        if (i < numero) {
            printf(" + ");
        }
    }

    // Mostrar el resultado de la suma
    printf(" = %ld\n", suma);

    return 0;
}
