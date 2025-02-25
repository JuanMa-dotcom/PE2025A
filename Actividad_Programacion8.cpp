/*******PRESENTACION********
NOMBRE: Juan Manuel Valdez Lopez
FECHA:18 de Febrero de 2025
PROGRAMA: Actividad de programacion8.cpp
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
PROFESOR: Sergio Franco Casillas
DESCRIPCION: En este programa elaboramos una suma de un arreglo
********************************************************************/

#include <iostream>
using namespace std;

const int MAX_SIZE = 10; // Tamaño máximo del arreglo
//Mostramos menu al usuario
void mostrarMenu() {
    cout << "\n--- Menú Principal ---\n";
    cout << "1. Agregar un valor\n";
    cout << "2. Mostrar todos los valores\n";
    cout << "3. Calcular la sumatoria de los valores\n";
    cout << "4. Editar un valor existente\n";
    cout << "5. Borrar un valor existente\n";
    cout << "6. Vaciar el arreglo\n";
    cout << "7. Salir\n";
    cout << "Seleccione una opción (1-7): ";
}

void agregarValor(int arreglo[], int &tam) {
    if (tam >= MAX_SIZE) {
        cout << "\n¡El arreglo está lleno! No puedes agregar más valores.\n";
        return;
    }
    cout << "\nIngresa el valor para la posición " << tam << ": ";
    cin >> arreglo[tam++];
    cout << "¡Valor agregado correctamente!\n";
}

void mostrarValores(const int arreglo[], int tam) {
    if (tam == 0) {
        cout << "\nEl arreglo está vacío. No hay valores para mostrar.\n";
        return;
    }
    cout << "\n--- Valores en el arreglo ---\n";
    for (int i = 0; i < tam; i++) {
        cout << "Posición " << i << ": " << arreglo[i] << "\n";
    }
}

int calcularSumatoria(const int arreglo[], int tam) {
    int sumatoria = 0;
    for (int i = 0; i < tam; i++) {
        sumatoria += arreglo[i];
    }
    return sumatoria;
}

void editarElemento(int arreglo[], int tam) {
    if (tam == 0) {
        cout << "\nEl arreglo está vacío. No hay valores para editar.\n";
        return;
    }
    int posicion;
    cout << "\nIngresa la posición del valor que deseas editar (0-" << tam - 1 << "): ";
    cin >> posicion;
    if (posicion < 0 || posicion >= tam) {
        cout << "¡Posición inválida! Intenta de nuevo.\n";
        return;
    }
    cout << "Valor actual en la posición " << posicion << ": " << arreglo[posicion] << "\n";
    cout << "Ingresa el nuevo valor: ";
    cin >> arreglo[posicion];
    cout << "¡Valor editado correctamente!\n";
}

void borrarElemento(int arreglo[], int &tam) {
    if (tam == 0) {
        cout << "\nEl arreglo está vacío. No hay valores para borrar.\n";
        return;
    }
    int posicion;
    cout << "\nIngresa la posición del valor que deseas borrar (0-" << tam - 1 << "): ";
    cin >> posicion;
    if (posicion < 0 || posicion >= tam) {
        cout << "¡Posición inválida! Intenta de nuevo.\n";
        return;
    }
    for (int i = posicion; i < tam - 1; i++) {
        arreglo[i] = arreglo[i + 1];
    }
    tam--;
    cout << "¡Valor borrado correctamente!\n";
}

void vaciarArreglo(int &tam) {
    if (tam == 0) {
        cout << "\nEl arreglo ya está vacío.\n";
        return;
    }
    tam = 0;
    cout << "\n¡Arreglo vaciado correctamente!\n";
}
//Inicio de main
int main() {
    int arreglo[MAX_SIZE] = {0};
    int tam = 0;
    int opcion;

    cout << "¡Bienvenido al programa de manejo de arreglos!\n";
    cout << "Puedes almacenar hasta " << MAX_SIZE << " valores.\n";

    do {
        mostrarMenu();
        cin >> opcion;
//Abrimos un switch para ver los casos posibles
        switch (opcion) {
            case 1:
                agregarValor(arreglo, tam);
                break;
            case 2:
                mostrarValores(arreglo, tam);
                break;
            case 3:
                cout << "\nLa sumatoria de los valores es: " << calcularSumatoria(arreglo, tam) << "\n";
                break;
            case 4:
                editarElemento(arreglo, tam);
                break;
            case 5:
                borrarElemento(arreglo, tam);
                break;
            case 6:
                vaciarArreglo(tam);
                break;
            case 7:
                cout << "\n¡Gracias por usar el programa! Hasta luego.\n";
                break;
            default:
                cout << "\n¡Opción inválida! Por favor, selecciona una opción del 1 al 7.\n";
        }
    } while (opcion != 7);

    return 0;
}
//fin de main
