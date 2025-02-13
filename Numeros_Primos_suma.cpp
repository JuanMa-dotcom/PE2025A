/*******PRESENTACION********
NOMBRE: Juan Manuel Valdez Lopez
FECHA:09 de Febrero de 2025
PROGRAMA: Actividad de programacion.c
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
PROFESOR: Sergio Franco Casillas
DESCRIPCION: Identificar los numeros primos de un número dado por el usuario y posteriormente realizar la suma de estos
********************************************************************/



#include <iostream>
using namespace std;

// Función para verificar si un número es primo
bool esPrimo(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n, suma = 0;

    // Solicitar al usuario el número
    cout << "Introduce un numero: ";
    cin >> n;

    // Identificar los números primos y sumar
    for (int i = 2; i <= n; ++i) {
        if (esPrimo(i)) {
            suma += i;
        }
    }

    // Mostrar el resultado
    cout << "La suma de los números primos menores o iguales a " << n << " es: " << suma << endl;

    return 0;
}
