/*******PRESENTACION********
NOMBRE: Juan Manuel Valdez Lopez
FECHA:25 de Febrero de 2025
PROGRAMA: Actividad de programacion10.cpp
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
PROFESOR: Sergio Franco Casillas
DESCRIPCION: En este programa elaboramos un programa con vectores o con arreglos en donde se realicen las operaciones de conjuntosz
********************************************************************/


#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// Función para mostrar el conjunto
template<typename T>
void mostrarConjunto(const vector<T>& conjunto) {
    if (conjunto.empty()) {
        cout << "El conjunto está vacío." << endl;
    } else {
        for (const auto& elem : conjunto) {
            cout << elem << " ";
        }
        cout << endl;
    }
}

// Función para insertar elementos en el conjunto
template<typename T>
void insertarElemento(vector<T>& conjunto) {
    T elemento;
    cout << "Ingrese el elemento a insertar: ";
    cin >> elemento;
    conjunto.push_back(elemento);
    cout << "Elemento insertado exitosamente." << endl;
}

// Función para borrar un elemento del conjunto
template<typename T>
void borrarElemento(vector<T>& conjunto) {
    T elemento;
    cout << "Ingrese el elemento a borrar: ";
    cin >> elemento;
    auto it = find(conjunto.begin(), conjunto.end(), elemento);
    if (it != conjunto.end()) {
        conjunto.erase(it);
        cout << "Elemento borrado exitosamente." << endl;
    } else {
        cout << "Elemento no encontrado." << endl;
    }
}

// Función para editar un elemento en el conjunto
template<typename T>
void editarElemento(vector<T>& conjunto) {
    T viejo, nuevo;
    cout << "Ingrese el elemento a editar: ";
    cin >> viejo;
    auto it = find(conjunto.begin(), conjunto.end(), viejo);
    if (it != conjunto.end()) {
        cout << "Ingrese el nuevo valor: ";
        cin >> nuevo;
        *it = nuevo;
        cout << "Elemento editado exitosamente." << endl;
    } else {
        cout << "Elemento no encontrado." << endl;
    }
}

// Función para vaciar el conjunto
template<typename T>
void vaciarConjunto(vector<T>& conjunto) {
    conjunto.clear();
    cout << "Conjunto vaciado exitosamente." << endl;
}

// Función para realizar la unión de dos conjuntos
template<typename T>
vector<T> unionConjuntos(const vector<T>& A, const vector<T>& B) {
    vector<T> resultado = A; // Inicializa resultado con los elementos de A
    for (const auto& elem : B) { // Recorre cada elemento de B
        if (find(resultado.begin(), resultado.end(), elem) == resultado.end()) { // Si no está en resultado
            resultado.push_back(elem); // Agrega el elemento de B
        }
    }
    return resultado; // Devuelve el conjunto resultado (unión de A y B)
}

// Función para realizar la intersección de dos conjuntos
template<typename T>
vector<T> interseccionConjuntos(const vector<T>& A, const vector<T>& B) {
    vector<T> resultado;
    for (const auto& elem : A) {
        if (find(B.begin(), B.end(), elem) != B.end()) {
            resultado.push_back(elem);
        }
    }
    return resultado;
}

// Función para realizar la diferencia de dos conjuntos
template<typename T>
vector<T> diferenciaConjuntos(const vector<T>& A, const vector<T>& B) {
    vector<T> resultado;
    for (const auto& elem : A) {
        if (find(B.begin(), B.end(), elem) == B.end()) {
            resultado.push_back(elem);
        }
    }
    return resultado;
}

// Función para realizar el complemento de un conjunto con respecto a un universo
template<typename T>
vector<T> complementoConjunto(const vector<T>& universo, const vector<T>& A) {
    vector<T> resultado;
    for (const auto& elem : universo) {
        if (find(A.begin(), A.end(), elem) == A.end()) {
            resultado.push_back(elem);
        }
    }
    return resultado;
}
//Inicio de main 
int main() {
    vector<int> conjunto1;
    vector<int> conjunto2;
    vector<int> universo = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Universo de ejemplo
    int opcion;
    bool salir = false;

    while (!salir) {
        cout << "\nOperaciones con conjuntos:\n";
        cout << "1. Insertar elemento en conjunto 1\n";
        cout << "2. Insertar elemento en conjunto 2\n";
        cout << "3. Borrar elemento en conjunto 1\n";
        cout << "4. Borrar elemento en conjunto 2\n";
        cout << "5. Editar elemento en conjunto 1\n";
        cout << "6. Editar elemento en conjunto 2\n";
        cout << "7. Vaciar conjunto 1\n";
        cout << "8. Vaciar conjunto 2\n";
        cout << "9. Ver conjunto 1\n";
        cout << "10. Ver conjunto 2\n";
        cout << "11. Unión de conjuntos\n";
        cout << "12. Intersección de conjuntos\n";
        cout << "13. Diferencia de conjuntos\n";
        cout << "14. Complemento de conjunto 1 respecto al universo\n";
        cout << "15. Complemento de conjunto 2 respecto al universo\n";
        cout << "16. Salir\n";
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                insertarElemento(conjunto1);
                break;
            case 2:
                insertarElemento(conjunto2);
                break;
            case 3:
                borrarElemento(conjunto1);
                break;
            case 4:
                borrarElemento(conjunto2);
                break;
            case 5:
                editarElemento(conjunto1);
                break;
            case 6:
                editarElemento(conjunto2);
                break;
            case 7:
                vaciarConjunto(conjunto1);
                break;
            case 8:
                vaciarConjunto(conjunto2);
                break;
            case 9:
                cout << "Conjunto 1: ";
                mostrarConjunto(conjunto1);
                break;
            case 10:
                cout << "Conjunto 2: ";
                mostrarConjunto(conjunto2);
                break;
            case 11: {
                vector<int> resultado = unionConjuntos(conjunto1, conjunto2);
                cout << "Unión: ";
                mostrarConjunto(resultado);
                break;
            }
            case 12: {
                vector<int> resultado = interseccionConjuntos(conjunto1, conjunto2);
                cout << "Intersección: ";
                mostrarConjunto(resultado);
                break;
            }
            case 13: {
                vector<int> resultado = diferenciaConjuntos(conjunto1, conjunto2);
                cout << "Diferencia (A - B): ";
                mostrarConjunto(resultado);
                break;
            }
            case 14: {
                vector<int> resultado = complementoConjunto(universo, conjunto1);
                cout << "Complemento de conjunto 1: ";
                mostrarConjunto(resultado);
                break;
            }
            case 15: {
                vector<int> resultado = complementoConjunto(universo, conjunto2);
                cout << "Complemento de conjunto 2: ";
                mostrarConjunto(resultado);
                break;
            }
            case 16:
                salir = true;
                cout << "Saliendo del programa...\n";
                break;
            default:
                cout << "Opción no válida. Intente de nuevo.\n";
        }
    }

    return 0;
}
//fin de main 
