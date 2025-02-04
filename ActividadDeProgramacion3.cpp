/*******PRESENTACION********
NOMBRE: Juan Manuel Valdez Lopez
FECHA:30 de Enero de 2025
PROGRAMA: Actividad de programacion.c
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
PROFESOR: Sergio Franco Casillas
DESCRIPCION: En este programa le pedimos al usuario que ingrese un numero y si este es >0 500< suba de 5 en 5 100 veces y si es >500 1000< subir de 10 en 10 50 veces
********************************************************************/

#include <stdio.h>

int main() {
    int numero;
    char continuar;
    int contadorOperaciones; // Esto es para contar las veces que se realizó una operación

    do {
        contadorOperaciones = 0; // Reiniciamos el contador de operaciones cada vez que el ciclo se repite
        printf("Ingrese un número: ");
        scanf("%d", &numero);

        if (numero > 0 && numero < 500) {
            // Subir de 5 en 5, 100 veces
            printf("El número está entre 0 y 500. Subiendo de 5 en 5, 100 veces.\n");
            for (int i = 0; i < 100; i++) {
                numero += 5;
                contadorOperaciones++;
                printf("Operacion #%d: %d\n", contadorOperaciones, numero);
            }
        }
        else if (numero > 500 && numero < 1000) {
            // Subir de 10 en 10, 50 veces
            printf("El número está entre 500 y 1000. Subiendo de 10 en 10, 50 veces.\n");
            for (int i = 0; i < 50; i++) {
                numero += 10;
                contadorOperaciones++;
                printf("Operacion #%d: %d\n", contadorOperaciones, numero);
            }
        }
        else if (numero > 1000) {
            printf("No se puede calcular el valor, el número es mayor a 1000.\n");
        } else {
            printf("El número debe ser mayor que 0 para realizar operaciones.\n");
        }

        printf("¿Desea continuar (s/n)? ");
        scanf(" %c", &continuar);

    } while (continuar == 's' || continuar == 'S');

    printf("Programa terminado.\n");
    return 0;
}

