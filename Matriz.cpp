/*******PRESENTACION********
NOMBRE: Juan Manuel Valdez Lopez
FECHA:25 de Febrero de 2025
PROGRAMA: Actividad de programacion9.cpp
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
PROFESOR: Sergio Franco Casillas
DESCRIPCION: En este programa elaboramos una Matriz
********************************************************************/



#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Función para llenar la matriz con valores aleatorios entre -100 y 100
void llenarMatrizAleatoria(int matriz[][10], int n) {
    srand(time(0));  // Para generar números aleatorios diferentes en cada ejecución
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            matriz[i][j] = rand() % 201 - 100;  // Genera números entre -100 y 100
        }
    }
}

// Función para mostrar la matriz
void mostrarMatriz(int matriz[][10], int n) {
    cout << "Matriz actual: \n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}

// Función para borrar un elemento de la matriz
void borrarElemento(int matriz[][10], int fila, int columna) {
    matriz[fila][columna] = 0;
    cout << "Elemento en (" << fila << "," << columna << ") borrado." << endl;
}

// Función para editar un elemento de la matriz
void editarElemento(int matriz[][10], int fila, int columna, int nuevoValor) {
    matriz[fila][columna] = nuevoValor;
    cout << "Elemento en (" << fila << "," << columna << ") actualizado a " << nuevoValor << "." << endl;
}

// Función para vaciar la matriz (poner todos los elementos en cero)
void vaciarMatriz(int matriz[][10], int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            matriz[i][j] = 0;
        }
    }
    cout << "La matriz ha sido vaciada." << endl;
}

int main() {
    int matriz[10][10];  // Matriz de 10x10 como máximo
    int n;

    // Obtener el tamaño de la matriz
    do {
        cout << "Bienvenido al programa de matrices interactivo.\n";
        cout << "Ingrese el tamaño de la matriz (entre 2 y 10): ";
        cin >> n;

        if (n < 2 || n > 10) {
            cout << "Error: El tamaño debe ser entre 2 y 10.\n";
        }
    } while (n < 2 || n > 10);

    int opcion;
    do {
        cout << "\n--- Menú de opciones ---\n";
        cout << "1. Llenar matriz con valores aleatorios.\n";
        cout << "2. Mostrar matriz.\n";
        cout << "3. Editar un elemento de la matriz.\n";
        cout << "4. Borrar un elemento de la matriz.\n";
        cout << "5. Vaciar la matriz.\n";
        cout << "6. Salir.\n";
        cout << "Seleccione una opción (1-6): ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                cout << "Llenando la matriz con valores aleatorios entre -100 y 100...\n";
                llenarMatrizAleatoria(matriz, n);
                break;
            }

            case 2: {
                mostrarMatriz(matriz, n);
                break;
            }

            case 3: {
                int fila, columna, valor;
                cout << "Editar un elemento de la matriz:\n";
                cout << "Ingrese la fila (0 a " << n-1 << "): ";
                cin >> fila;
                cout << "Ingrese la columna (0 a " << n-1 << "): ";
                cin >> columna;
                cout << "Ingrese el nuevo valor: ";
                cin >> valor;

                if (fila >= 0 && fila < n && columna >= 0 && columna < n) {
                    editarElemento(matriz, fila, columna, valor);
                } else {
                    cout << "Error: Índices fuera de rango.\n";
                }
                break;
            }

            case 4: {
                int fila, columna;
                cout << "Borrar un elemento de la matriz:\n";
                cout << "Ingrese la fila (0 a " << n-1 << "): ";
                cin >> fila;
                cout << "Ingrese la columna (0 a " << n-1 << "): ";
                cin >> columna;

                if (fila >= 0 && fila < n && columna >= 0 && columna < n) {
                    borrarElemento(matriz, fila, columna);
                } else {
                    cout << "Error: Índices fuera de rango.\n";
                }
                break;
            }

            case 5: {
                vaciarMatriz(matriz, n);
                break;
            }

            case 6:
                cout << "¡Hasta luego! Salimos del programa.\n";
                break;

            default:
                cout << "Opción no válida, por favor seleccione entre 1 y 6.\n";
                break;
        }

    } while (opcion != 6);

    return 0;
}
