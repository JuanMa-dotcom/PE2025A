/*******PRESENTACION********
NOMBRE: Juan Manuel Valdez Lopez
FECHA:30 de Enero de 2025
PROGRAMA: Actividad de programacion.c
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
PROFESOR: Sergio Franco Casillas
DESCRIPCION: En este programa le pedimos al usuario un valor y que la maquina le diga la sucecion de fibonacci hasta el valor que ingreso el usuario
********************************************************************/
#include <stdio.h>
//inicio del programa
void fibonacciFor(int limite) {
    int a = 0, b = 1, c;
    printf("Serie de Fibonacci usando 'for':\n");
    for (int i = 0; a <= limite; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
}

void fibonacciWhile(int limite) {
    int a = 0, b = 1, c;
    printf("Serie de Fibonacci usando 'while':\n");
    while (a <= limite) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
}

void fibonacciDoWhile(int limite) {
    int a = 0, b = 1, c;
    printf("Serie de Fibonacci usando 'do-while':\n");
    do {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    } while (a <= limite);
    printf("\n");
}

int main() {
    int opcion, limite;
    char continuar;

    do {
        printf("Elija el ciclo para generar la serie de Fibonacci:\n");
        printf("1. For\n");
        printf("2. While\n");
        printf("3. Do-While\n");
        printf("Ingrese su opcion: ");
        scanf("%d", &opcion);

        printf("Ingrese el valor limite para la serie de Fibonacci: ");
        scanf("%d", &limite);

        if (opcion == 1) {
            fibonacciFor(limite);
        } else if (opcion == 2) {
            fibonacciWhile(limite);
        } else if (opcion == 3) {
            fibonacciDoWhile(limite);
        } else {
            printf("Opcion no valida.\n");
        }

        printf("¿Desea continuar? (s/n): ");
        scanf(" %c", &continuar); // El espacio antes de %c para evitar problemas con el buffer

    } while (continuar == 's' || continuar == 'S');

    printf("Programa terminado.\n");
    return 0;
}
