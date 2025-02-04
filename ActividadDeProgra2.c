/*******PRESENTACION********
NOMBRE: Juan Manuel Valdez Lopez
FECHA:04 de Febrero de 2025
PROGRAMA: Actividad de programacion2.c
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
PROFESOR: Sergio Franco Casillas
DESCRIPCION: Realizar un programa en C/C++ en donde pongas en pr�ctica al menos  6 caracteres de escape y 6 cadenas de control de tipos de salida, s� espec�fico en tu programa en donde las est�s usando"
********************************************************************/

#include <stdio.h>
//inicio de main
int main() {
    // Uso de caracteres de escape
    printf("Ejemplo de caracteres de escape:\n"); // \n Salto de l�nea
    printf("Este es un tabulador:\t\t\tEste es un tabulador de espacio.\n"); // \t Tabulador
    printf("Aqu� se imprime una comilla doble: \"\n"); // \" Comilla doble
    printf("Aqu� se imprime una barra invertida: \\\n"); // \\ Barra invertida
    printf("Un texto con un retorno de carro:\rEste es el texto despu�s del retorno de carro.\n"); // \r Retorno de carro
    printf("Un texto con una alarma (beep): \a\n"); // \a Alarma (beep)

    // Uso de cadenas de control de tipos de salida
    printf("\nEjemplo de cadenas de control de tipos de salida:\n");
    printf("Imprimir un entero: %d\n", 123); // %d Entero
    printf("Imprimir un flotante: %.2f\n", 3.14159); // %.2f Flotante (con 2 decimales)
    printf("Imprimir un car�cter: %c\n", 'A'); // %c Car�cter
    printf("Imprimir una cadena de texto: %s\n", "Hola, mundo!"); // %s Cadena de texto
    printf("Imprimir un n�mero en octal: %o\n", 100); // %o Octal
    printf("Imprimir un n�mero en hexadecimal: %x\n", 255); // %x Hexadecimal

    return 0;
}
