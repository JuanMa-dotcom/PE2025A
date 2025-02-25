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

class Matriz {
private:
    int **matriz;
    int n;  // Tamaño de la matriz (nxn)

public:
    // Constructor
    Matriz(int tamaño) {  // Cambié 'matriz' por 'Matriz'
        n = tamaño;
        matriz = new int*[n];
        for (int i = 0; i < n; i++) {
            matriz[i] = new int[n];
        }
    }

    // Destructor
    ~Matriz() {
        for (int i = 0; i < n; i++) {
            delete[] matriz[i];
        }
        delete[] matriz;
    }

    // Método para llenar la matriz con valores aleatorios entre -100 y 100
    void llenarAleatorio() {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                matriz[i][j] = rand() % 201 - 100; // Genera un número entre -100 y 100
            }
        }
    }

    // Método para mostrar la matriz
    void mostrar() {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << matriz[i][j] << "\t";
            }
            cout << endl;
        }
    }

    // Método para ingresar un valor en una posición específica
    void editarElemento(int fila, int col, int valor) {
        if (fila >= 0 && fila < n && col >= 0 && col < n) {
            matriz[fila][col] = valor;
        } else {
            cout << "Índice fuera de rango" << endl;
        }
    }

    // Método para borrar un elemento (ponerlo a 0)
    void borrarElemento(int fila, int col) {
        if (fila >= 0 && fila < n && col >= 0 && col < n) {
            matriz[fila][col] = 0;
        } else {
            cout << "Índice fuera de rango" << endl;
        }
    }

    // Método para vaciar la matriz (poner todo a 0)
    void vaciar() {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                matriz[i][j] = 0;
            }
        }
    }

    // Método para obtener el tamaño de la matriz
    int getTamaño() {
        return n;
    }

    // Método para sumar dos matrices
    Matriz sumar(Matriz &otra) {
        Matriz resultado(n);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                resultado.matriz[i][j] = matriz[i][j] + otra.matriz[i][j];
            }
        }
        return resultado;
    }

    // Método para restar dos matrices
    Matriz restar(Matriz &otra) {
        Matriz resultado(n);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                resultado.matriz[i][j] = matriz[i][j] - otra.matriz[i][j];
            }
        }
        return resultado;
    }

    // Método para multiplicar dos matrices
    Matriz multiplicar(Matriz &otra) {
        if (n != otra.getTamaño()) {
            cout << "Error: Las matrices deben tener el mismo tamaño para multiplicarse." << endl;
            return Matriz(n); // Devuelve una matriz vacía del mismo tamaño
        }

        Matriz resultado(n);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                resultado.matriz[i][j] = 0;
                for (int k = 0; k < n; k++) {
                    resultado.matriz[i][j] += matriz[i][k] * otra.matriz[k][j];
                }
            }
        }
        return resultado;
    }
};

// Menú interactivo
void menu(Matriz &m1, Matriz &m2) {
    int opcion, fila, col, valor;
    do {
        cout << "\n--- Menu ---\n";
        cout << "1. Llenar matriz 1 con valores aleatorios\n";
        cout << "2. Llenar matriz 2 con valores aleatorios\n";
        cout << "3. Mostrar matriz 1\n";
        cout << "4. Mostrar matriz 2\n";
        cout << "5. Editar un valor en matriz 1\n";
        cout << "6. Editar un valor en matriz 2\n";
        cout << "7. Borrar un valor en matriz 1\n";
        cout << "8. Borrar un valor en matriz 2\n";
        cout << "9. Vaciar matriz 1\n";
        cout << "10. Vaciar matriz 2\n";
        cout << "11. Sumar matrices\n";
        cout << "12. Restar matrices\n";
        cout << "13. Multiplicar matrices\n";
        cout << "14. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                m1.llenarAleatorio();
                cout << "Matriz 1 llenada con valores aleatorios entre -100 y 100." << endl;
                break;
            case 2:
                m2.llenarAleatorio();
                cout << "Matriz 2 llenada con valores aleatorios entre -100 y 100." << endl;
                break;
            case 3:
                cout << "Matriz 1:\n";
                m1.mostrar();
                break;
            case 4:
                cout << "Matriz 2:\n";
                m2.mostrar();
                break;
            case 5:
                cout << "Ingrese la fila (0 a " << m1.getTamaño()-1 << "): ";
                cin >> fila;
                cout << "Ingrese la columna (0 a " << m1.getTamaño()-1 << "): ";
                cin >> col;
                cout << "Ingrese el valor: ";
                cin >> valor;
                m1.editarElemento(fila, col, valor);
                cout << "Valor editado en matriz 1." << endl;
                break;
            case 6:
                cout << "Ingrese la fila (0 a " << m2.getTamaño()-1 << "): ";
                cin >> fila;
                cout << "Ingrese la columna (0 a " << m2.getTamaño()-1 << "): ";
                cin >> col;
                cout << "Ingrese el valor: ";
                cin >> valor;
                m2.editarElemento(fila, col, valor);
                cout << "Valor editado en matriz 2." << endl;
                break;
            case 7:
                cout << "Ingrese la fila (0 a " << m1.getTamaño()-1 << "): ";
                cin >> fila;
                cout << "Ingrese la columna (0 a " << m1.getTamaño()-1 << "): ";
                cin >> col;
                m1.borrarElemento(fila, col);
                cout << "Valor borrado en matriz 1." << endl;
                break;
            case 8:
                cout << "Ingrese la fila (0 a " << m2.getTamaño()-1 << "): ";
                cin >> fila;
                cout << "Ingrese la columna (0 a " << m2.getTamaño()-1 << "): ";
                cin >> col;
                m2.borrarElemento(fila, col);
                cout << "Valor borrado en matriz 2." << endl;
                break;
            case 9:
                m1.vaciar();
                cout << "Matriz 1 vaciada." << endl;
                break;
            case 10:
                m2.vaciar();
                cout << "Matriz 2 vaciada." << endl;
                break;
            case 11: {
                Matriz resultado = m1.sumar(m2);
                cout << "Resultado de la suma de matrices:\n";
                resultado.mostrar();
                break;
            }
            case 12: {
                Matriz resultado = m1.restar(m2);
                cout << "Resultado de la resta de matrices:\n";
                resultado.mostrar();
                break;
            }
            case 13: {
                Matriz resultado = m1.multiplicar(m2);
                cout << "Resultado de la multiplicación de matrices:\n";
                resultado.mostrar();
                break;
            }
            case 14:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opción no válida. Intente nuevamente." << endl;
        }
    } while (opcion != 14);
}

int main() {
    srand(time(0));  // Inicializar la semilla para los números aleatorios

    int tamaño;
    do {
        cout << "Ingrese el tamaño de la matriz (de 2 a 10): ";
        cin >> tamaño;
        if (tamaño < 2 || tamaño > 10) {
            cout << "Tamaño inválido. Debe ser entre 2 y 10." << endl;
        }
    } while (tamaño < 2 || tamaño > 10);

    Matriz m1(tamaño), m2(tamaño);
    menu(m1, m2);

    return 0;
}
