/*******PRESENTACION********
NOMBRE: Juan Manuel Valdez Lopez
FECHA:10 de abril de 2025
PROGRAMA: Actividad de programacion.c
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
PROFESOR: Sergio Franco Casillas
DESCRIPCION: En este programa elaboramos un programa que verifica si una cadena es un palíndromo
********************************************************************/

#include <iostream>
#include <cctype>
#include <string>

using namespace std;

// Función para verificar si una cadena es un palíndromo

bool esPalindromo(const string& str) {
    int izquierda = 0;
    int derecha = str.length() - 1;

    while (izquierda < derecha) {
        // Ignorar espacios y caracteres no alfabéticos
        while (izquierda < derecha && !isalnum(str[izquierda])) {
            izquierda++;
        }
        while (izquierda < derecha && !isalnum(str[derecha])) {
            derecha--;
        }

        // Comparar caracteres en minúsculas
        if (tolower(str[izquierda]) != tolower(str[derecha])) {
            return false;
        }

        izquierda++;
        derecha--;
    }

    return true;
}

int contadorVocales(const string& str) {
    int contador = 0;
    for (char c : str) {
        if (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' ||
            tolower(c) == 'o' || tolower(c) == 'u') {
            contador++;
        }
    }
    return contador;
}

int contadorConsonantes(const string& str) {
    int contador = 0;
    for (char c : str) {
        if (isalpha(c) && ("aeiouAEIOU", c)) {
            contador++;
        }
    }
    return contador;
}

int main() {
    string palabra;
    cout << "Ingrese una cadena de texto: ";
    getline(cin, palabra);

    if (esPalindromo(palabra)) {
        cout << "La cadena es un palindromo." << endl;
    } else {
        cout << "La cadena no es un palindromo." << endl;
    }

    int numVocales = contadorVocales(palabra);
    int numConsonantes = contadorConsonantes(palabra);

    cout << "Su palabra tiene " << numVocales << " vocales " << endl;
    cout << "Su palabra tiene " << numConsonantes << " consonantes " << endl;

    return 0;
}

