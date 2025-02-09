/*******PRESENTACION********
NOMBRE: Juan Manuel Valdez Lopez
FECHA:09 de Febrero de 2025
PROGRAMA: Actividad de programacion.c
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
PROFESOR: Sergio Franco Casillas
DESCRIPCION: En este programa el usuario proporciona un nmero de entre 0 y mil, el programa debe encontrar todos los multiplos de 3 y 5
********************************************************************/



#include <stdio.h>

int main() {
    int numero, multiplos_de_3 = 0, multiplos_de_5 = 0;
    int suma_3 = 0, suma_5 = 0;

    printf("Introduce un numero entre 0 y 1000: ");
    scanf("%d", &numero);

    if (numero < 0 || numero > 1000) {
        printf("Numero fuera del rango permitido.\n");
        return 1;
    }

    printf("Multiplos de 3 y 5 en el rango 0 a %d:\n", numero);
    for (int i = 0; i <= numero; i++) {
        if (i % 3 == 0) {
            printf("%d es multiplo de 3\n", i);
            multiplos_de_3++;
            suma_3 += i;
        }
        if (i % 5 == 0) {
            printf("%d es multiplo de 5\n", i);
            multiplos_de_5++;
            suma_5 += i;
        }
    }

    printf("Cantidad de multiplos de 3: %d\n", multiplos_de_3);
    printf("Suma de multiplos de 3: %d\n", suma_3);
    printf("Cantidad de multiplos de 5: %d\n", multiplos_de_5);
    printf("Suma de multiplos de 5: %d\n", suma_5);

    return 0;
}
