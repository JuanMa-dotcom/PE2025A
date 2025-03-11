/*******PRESENTACION********
NOMBRE: Juan Manuel Valdez Lopez
FECHA:11 de Marzo de 2025
PROGRAMA: Actividad de programacion10.cpp
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
PROFESOR: Sergio Franco Casillas
DESCRIPCION: En este programa elaboramos un programa con la secuencia collatz
********************************************************************/


#include <iostream>
using namespace std;

// Función para generar la secuencia de números y contar cuántos pasos toma hasta llegar a 1
int generarSecuencia(int n) {
    int pasos = 0;
    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;  // Si es par, dividir entre 2
        } else {
            n = 3 * n + 1;  // Si es impar, multiplicar por 3 y sumar 1
        }
        pasos++;  // Aumentar el contador de pasos
    }
    return pasos;
}

int main() {
    int num1, num2;

    // Solicitar al usuario los dos números
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    // Generar la secuencia para ambos números
    int secuencia1 = generarSecuencia(num1);
    int secuencia2 = generarSecuencia(num2);

    // Imprimir los resultados
    cout << "Numero 1 (" << num1 << ") genera " << secuencia1 << " pasos." << endl;
    cout << "Numero 2 (" << num2 << ") genera " << secuencia2 << " pasos." << endl;

    // Comparar cuál de los dos genera más pasos
    if (secuencia1 > secuencia2) {
        cout << "El numero " << num1 << " genera más pasos que el número " << num2 << "." << endl;
    } else if (secuencia2 > secuencia1) {
        cout << "El numero " << num2 << " genera más pasos que el número " << num1 << "." << endl;
    } else {
        cout << "Ambos numeros generan el mismo número de pasos." << endl;
    }

    return 0;
}
