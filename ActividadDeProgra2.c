/*******PRESENTACION********
NOMBRE: Juan Manuel Valdez Lopez
FECHA:04 de Febrero de 2025
PROGRAMA: Actividad de programacion2.c
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
PROFESOR: Sergio Franco Casillas
DESCRIPCION: Realizar un programa en C/C++ en donde pongas en práctica al menos  6 caracteres de escape y 6 cadenas de control de tipos de salida, sé específico en tu programa en donde las estás usando"
********************************************************************/

#include <stdio.h>
//inicio de main
int main() {
    // Uso de caracteres de escape
    printf("Ejemplo de caracteres de escape:\n"); // \n Salto de línea
    printf("Este es un tabulador:\t\t\tEste es un tabulador de espacio.\n"); // \t Tabulador
    printf("Aquí se imprime una comilla doble: \"\n"); // \" Comilla doble
    printf("Aquí se imprime una barra invertida: \\\n"); // \\ Barra invertida
    printf("Un texto con un retorno de carro:\rEste es el texto después del retorno de carro.\n"); // \r Retorno de carro
    printf("Un texto con una alarma (beep): \a\n"); // \a Alarma (beep)

    // Uso de cadenas de control de tipos de salida
    printf("\nEjemplo de cadenas de control de tipos de salida:\n");
    printf("Imprimir un entero: %d\n", 123); // %d Entero
    printf("Imprimir un flotante: %.2f\n", 3.14159); // %.2f Flotante (con 2 decimales)
    printf("Imprimir un carácter: %c\n", 'A'); // %c Carácter
    printf("Imprimir una cadena de texto: %s\n", "Hola, mundo!"); // %s Cadena de texto
    printf("Imprimir un número en octal: %o\n", 100); // %o Octal
    printf("Imprimir un número en hexadecimal: %x\n", 255); // %x Hexadecimal

    return 0;
}
