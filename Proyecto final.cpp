/*******PRESENTACION********
NOMBRE: Juan Manuel Valdez Lopez
FECHA: 30 de abril de 2025
PROGRAMA: Actividad de programacion simplificada
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
PROFESOR: Sergio Franco Casillas
DESCRIPCION: Proyecto de la clase de programacion
********************************************************************/
#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <cmath>
#include <cctype>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <limits>

using namespace std;

// Declaraciones adelantadas de las funciones del menú principal
void mostrarMenuPrincipal();
void ejecutarProyecto(int opcion);

// 1. Datos Personales
void mostrarDatosPersonales() {
    cout << "\n=== DATOS PERSONALES ===\n";
    cout << "Nombre: Juan Manuel Valdez Lopez\n";
    cout << "Edad: 20 anios\n";
    cout << "Lugar de residencia: Arandas, Jalisco\n";
    cout << "Fecha: 30/04/2025\n";
    cout << "Carrera: Ing. en Computacion\n";
    cout << "Semestre: Segundo\n\n";
    
    cout << "Presiona Enter para continuar...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
}

// 2. Caracteres de Escape
void caracteresDeEscape() {
    cout << "\n=== CARACTERES DE ESCAPE ===\n";
    cout << "Ejemplo de caracteres de escape:\n";
    cout << "Este es un tabulador:\t\t\tEste es un tabulador de espacio.\n";
    cout << "Aquí se imprime una comilla doble: \"\n";
    cout << "Aquí se imprime una barra invertida: \\\n";
    cout << "Un texto con un retorno de carro:\rEste es el texto después del retorno de carro.\n";
    cout << "Un texto con una alarma (beep): \a\n";

    cout << "\nEjemplo de cadenas de control de tipos de salida:\n";
    cout << "Imprimir un entero: " << 123 << "\n";
    cout << "Imprimir un flotante: " << 3.14159 << "\n";
    cout << "Imprimir un carácter: " << 'A' << "\n";
    cout << "Imprimir una cadena de texto: " << "Hola, mundo!" << "\n";
    cout << "Imprimir un número en octal: " << oct << 100 << "\n";
    cout << "Imprimir un número en hexadecimal: " << hex << 255 << dec << "\n\n";
    
    cout << "Presiona Enter para continuar...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
}

// 3. Operaciones Numéricas con Ciclos
void operacionesNumericas() {
    int numero;
    char continuar;
    int contadorOperaciones;

    cout << "\n=== OPERACIONES NUMÉRICAS CON CICLOS ===\n";
    
    do {
        contadorOperaciones = 0;
        cout << "Ingrese un número: ";
        cin >> numero;

        if (numero > 0 && numero < 500) {
            cout << "El número está entre 0 y 500. Subiendo de 5 en 5, 100 veces.\n";
            for (int i = 0; i < 100; i++) {
                numero += 5;
                contadorOperaciones++;
                cout << "Operacion #" << contadorOperaciones << ": " << numero << "\n";
            }
        }
        else if (numero > 500 && numero < 1000) {
            cout << "El número está entre 500 y 1000. Subiendo de 10 en 10, 50 veces.\n";
            for (int i = 0; i < 50; i++) {
                numero += 10;
                contadorOperaciones++;
                cout << "Operacion #" << contadorOperaciones << ": " << numero << "\n";
            }
        }
        else if (numero > 1000) {
            cout << "No se puede calcular el valor, el número es mayor a 1000.\n";
        } else {
            cout << "El número debe ser mayor que 0 para realizar operaciones.\n";
        }

        cout << "¿Desea continuar (s/n)? ";
        cin >> continuar;

    } while (continuar == 's' || continuar == 'S');
}

// 4. Series Fibonacci con diferentes ciclos
void fibonacciFor(int limite) {
    int a = 0, b = 1, c;
    cout << "Serie de Fibonacci usando 'for':\n";
    for (int i = 0; a <= limite; i++) {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
    cout << "\n";
}

void fibonacciWhile(int limite) {
    int a = 0, b = 1, c;
    cout << "Serie de Fibonacci usando 'while':\n";
    while (a <= limite) {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
    cout << "\n";
}

void fibonacciDoWhile(int limite) {
    int a = 0, b = 1, c;
    cout << "Serie de Fibonacci usando 'do-while':\n";
    do {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    } while (a <= limite);
    cout << "\n";
}

void seriesFibonacci() {
    int opcion, limite;
    char continuar;

    cout << "\n=== SERIES FIBONACCI ===\n";
    
    do {
        cout << "Elija el ciclo para generar la serie de Fibonacci:\n";
        cout << "1. For\n";
        cout << "2. While\n";
        cout << "3. Do-While\n";
        cout << "Ingrese su opcion: ";
        cin >> opcion;

        cout << "Ingrese el valor limite para la serie de Fibonacci: ";
        cin >> limite;

        switch (opcion) {
            case 1:
                fibonacciFor(limite);
                break;
            case 2:
                fibonacciWhile(limite);
                break;
            case 3:
                fibonacciDoWhile(limite);
                break;
            default:
                cout << "Opción no válida.\n";
        }

        cout << "¿Desea continuar? (s/n): ";
        cin >> continuar;

    } while (continuar == 's' || continuar == 'S');
}

// 5. Múltiplos de 3 y 5
void multiplosDe3y5() {
    int numero, multiplos_de_3 = 0, multiplos_de_5 = 0;
    int suma_3 = 0, suma_5 = 0;

    cout << "\n=== MÚLTIPLOS DE 3 Y 5 ===\n";
    cout << "Introduce un número entre 0 y 1000: ";
    cin >> numero;

    if (numero < 0 || numero > 1000) {
        cout << "Número fuera del rango permitido.\n";
        return;
    }

    cout << "Múltiplos de 3 y 5 en el rango 0 a " << numero << ":\n";
    for (int i = 0; i <= numero; i++) {
        if (i % 3 == 0) {
            cout << i << " es múltiplo de 3\n";
            multiplos_de_3++;
            suma_3 += i;
        }
        if (i % 5 == 0) {
            cout << i << " es múltiplo de 5\n";
            multiplos_de_5++;
            suma_5 += i;
        }
    }

    cout << "Cantidad de múltiplos de 3: " << multiplos_de_3 << "\n";
    cout << "Suma de múltiplos de 3: " << suma_3 << "\n";
    cout << "Cantidad de múltiplos de 5: " << multiplos_de_5 << "\n";
    cout << "Suma de múltiplos de 5: " << suma_5 << "\n\n";
    
    cout << "Presiona Enter para continuar...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
}

// 6. Suma de Cuadrados
void sumaDeCuadrados() {
    long numero, suma = 0;

    cout << "\n=== SUMA DE CUADRADOS ===\n";
    cout << "Introduce un número: ";
    cin >> numero;

    if (numero < 0) {
        cout << "Error: El número no puede ser menor que 0.\n";
        return;
    }

    cout << "Operación: ";
    for (long i = 1; i <= numero; i++) {
        suma += i * i;
        cout << i << "^2";
        if (i < numero) {
            cout << " + ";
        }
    }

    cout << " = " << suma << "\n\n";
    
    cout << "Presiona Enter para continuar...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
}

// 7. Suma de Números Primos
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

void sumaDeNumerosPrimos() {
    int n, suma = 0;

    cout << "\n=== SUMA DE NÚMEROS PRIMOS ===\n";
    cout << "Introduce un número: ";
    cin >> n;

    for (int i = 2; i <= n; ++i) {
        if (esPrimo(i)) {
            suma += i;
            cout << i << " es primo\n";
        }
    }

    cout << "La suma de los números primos menores o iguales a " << n << " es: " << suma << "\n\n";
    
    cout << "Presiona Enter para continuar...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
}

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

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>

using namespace std;

vector<string> bancoDePalabras = {
    "elefante", "guitarra", "computadora", "avion", "zapato", "espejo", 
    "bicicleta", "pluma", "escalera", "camara", "pelota", "perro", "gato", 
    "ballena", "cielo", "montaña", "flor", "madera", "luna", "estrella", "piano"
};

string elegirPalabraAleatoria() {
    int indiceAleatorio = rand() % bancoDePalabras.size();
    return bancoDePalabras[indiceAleatorio];
}

bool esVocal(char letra) {
    char letrasVocales[] = {'a', 'e', 'i', 'o', 'u'};
    for (char vocal : letrasVocales) {
        if (letra == vocal) {
            return true;
        }
    }
    return false;
}

void jugarContraComputadora() {
    string palabra = elegirPalabraAleatoria();
    string palabraOculta(palabra.length(), '_');
    int intentos = 6;  // Número de intentos inicial
    int intentosPorJugador = 0;

    cout << "Adivina la palabra: " << palabraOculta << endl;

    while (intentos > 0) {
        char letra;
        cout << "Introduce una letra: ";
        cin >> letra;

        // Verificar si la letra es válida
        if (isalpha(letra) == 0) {
            cout << "Por favor ingresa una letra válida." << endl;
            continue;
        }

        letra = tolower(letra);  // Convertir la letra a minúscula

        // Si la letra es una vocal, penalizar con un intento menos
        if (esVocal(letra)) {
            cout << "¡Es una vocal! Has perdido un intento." << endl;
            intentos--;
        } else {
            bool acierto = false;
            for (int i = 0; i < palabra.length(); i++) {
                if (palabra[i] == letra) {
                    palabraOculta[i] = letra;
                    acierto = true;
                }
            }
            if (!acierto) {
                intentos--;
                cout << "Letra incorrecta. Intentos restantes: " << intentos << endl;
            }
        }

        cout << "Palabra: " << palabraOculta << endl;

        if (palabraOculta == palabra) {
            cout << "¡Felicidades! Adivinaste la palabra." << endl;
            break;
        }

        if (intentos == 0) {
            cout << "¡Se acabaron los intentos! La palabra era: " << palabra << endl;
        }
    }
}

void jugarContraOtroJugador() {
    string palabra;
    cout << "Jugador 1, introduce una palabra para que el Jugador 2 la adivine: ";
    cin >> palabra;

    string palabraOculta(palabra.length(), '_');
    int intentosJugador2 = 6;
    int intentosJugador1 = 0;

    cout << "Jugador 2, adivina la palabra: " << palabraOculta << endl;

    while (intentosJugador2 > 0) {
        char letra;
        cout << "Introduce una letra: ";
        cin >> letra;

        // Verificar si la letra es válida
        if (isalpha(letra) == 0) {
            cout << "Por favor ingresa una letra válida." << endl;
            continue;
        }

        letra = tolower(letra);  // Convertir la letra a minúscula

        // Si la letra es una vocal, penalizar con un intento menos
        if (esVocal(letra)) {
            cout << "¡Es una vocal! Has perdido un intento." << endl;
            intentosJugador2--;
        } else {
            bool acierto = false;
            for (int i = 0; i < palabra.length(); i++) {
                if (palabra[i] == letra) {
                    palabraOculta[i] = letra;
                    acierto = true;
                }
            }
            if (!acierto) {
                intentosJugador2--;
                cout << "Letra incorrecta. Intentos restantes: " << intentosJugador2 << endl;
            }
        }

        cout << "Palabra: " << palabraOculta << endl;

        if (palabraOculta == palabra) {
            cout << "¡Felicidades! Jugador 2 ha adivinado la palabra." << endl;
            break;
        }

        if (intentosJugador2 == 0) {
            cout << "¡Se acabaron los intentos! La palabra era: " << palabra << endl;
        }
    }
}

int main() {
    srand(time(0));  // Inicializar la semilla para la aleatoriedad

    int opcion;
    cout << "Elige una opción:" << endl;
    cout << "1. Jugar contra la computadora" << endl;
    cout << "2. Jugar contra otro jugador" << endl;
    cout << "Opción: ";
    cin >> opcion;

    if (opcion == 1) {
        jugarContraComputadora();
    } else if (opcion == 2) {
        jugarContraOtroJugador();
    } else {
        cout << "Opción no válida." << endl;
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

class TorresDeHanoi {
private:
    int numDiscos;
    int movimientosRealizados;
    int movimientosMinimos;
    vector<stack<int>> torres;
    
    // Funcion para mostrar las torres
    void mostrarTorres() {
        cout << "\n";
        // Encontrar la altura maxima
        int maxAltura = numDiscos;
        
        // Mostrar torres de arriba hacia abajo
        for (int nivel = maxAltura - 1; nivel >= 0; nivel--) {
            for (int t = 0; t < 3; t++) {
                cout << "| ";
                
                // Si hay un disco en este nivel de la torre
                if (torres[t].size() > nivel) {
                    // Obtener los discos en el orden correcto
                    vector<int> discosTemp;
                    stack<int> torreTemp = torres[t];
                    
                    while (!torreTemp.empty()) {
                        discosTemp.push_back(torreTemp.top());
                        torreTemp.pop();
                    }
                    
                    // Mostrar el disco
                    if (nivel < discosTemp.size()) {
                        int disco = discosTemp[discosTemp.size() - 1 - nivel];
                        cout << string(disco, '*');
                        cout << string(numDiscos - disco, ' ');
                    }
                } else {
                    cout << string(numDiscos, ' ');
                }
                cout << " ";
            }
            cout << "\n";
        }
        
        // Mostrar bases
        for (int t = 0; t < 3; t++) {
            cout << "+-" << string(numDiscos, '-') << "-";
        }
        cout << "\n";
        
        // Mostrar numeros de torre
        for (int t = 0; t < 3; t++) {
            cout << "  Torre " << t + 1 << string(numDiscos - 4, ' ');
        }
        cout << "\n\n";
    }
    
    // Validar si un movimiento es valido
    bool esMovimientoValido(int origen, int destino) {
        // Verificar indices validos
        if (origen < 0 || origen > 2 || destino < 0 || destino > 2) {
            return false;
        }
        
        // Verificar que la torre de origen no este vacia
        if (torres[origen].empty()) {
            return false;
        }
        
        // Verificar que el disco de destino sea mas grande que el de origen
        if (!torres[destino].empty() && torres[origen].top() > torres[destino].top()) {
            return false;
        }
        
        return true;
    }
    
    // Verificar si el juego se ha completado
    bool esJuegoCompletado() {
        return torres[2].size() == numDiscos;
    }
    
    // Calcular puntuacion
    int calcularPuntuacion() {
        double eficiencia = static_cast<double>(movimientosMinimos) / movimientosRealizados;
        int puntajeBase = 1000 * numDiscos; // Mas discos, mayor puntaje base
        return static_cast<int>(puntajeBase * eficiencia);
    }
    
public:
    TorresDeHanoi(int n) {
        if (n < 1) n = 1;
        if (n > 10) n = 10;
        
        numDiscos = n;
        movimientosRealizados = 0;
        movimientosMinimos = pow(2, n) - 1;
        
        // Inicializar las tres torres
        torres.resize(3);
        
        // Colocar discos en la primera torre
        for (int i = numDiscos; i >= 1; i--) {
            torres[0].push(i);
        }
    }
    
    void jugar() {
        cout << "¡Bienvenido al juego de Torres de Hanoi!\n";
        cout << "El objetivo es mover todos los discos de la Torre 1 a la Torre 3.\n";
        cout << "Reglas:\n";
        cout << "  1. Solo puedes mover un disco a la vez.\n";
        cout << "  2. Solo puedes mover el disco superior de una torre.\n";
        cout << "  3. Nunca puedes colocar un disco mas grande sobre uno mas pequeno.\n\n";
        cout << "Comenzando juego con " << numDiscos << " discos.\n";
        cout << "El numero minimo de movimientos posibles es: " << movimientosMinimos << "\n";
        
        mostrarTorres();
        
        while (!esJuegoCompletado()) {
            int torreOrigen, torreDestino;
            
            cout << "Movimiento #" << (movimientosRealizados + 1) << "\n";
            cout << "Torre de origen (1-3): ";
            cin >> torreOrigen;
            torreOrigen--; // Ajustar a indice base 0
            
            cout << "Torre de destino (1-3): ";
            cin >> torreDestino;
            torreDestino--; // Ajustar a indice base 0
            
            if (esMovimientoValido(torreOrigen, torreDestino)) {
                // Identificar el disco que se va a mover
                int discoEnMovimiento = torres[torreOrigen].top();
                
                // Mover el disco
                torres[torreDestino].push(discoEnMovimiento);
                torres[torreOrigen].pop();
                
                movimientosRealizados++;
                
                cout << "Moviste el disco " << discoEnMovimiento << " de la Torre " 
                          << (torreOrigen + 1) << " a la Torre " << (torreDestino + 1) << "\n";
                
                mostrarTorres();
            } else {
                cout << "¡Movimiento invalido! Intenta de nuevo.\n";
            }
        }
        
        // Juego completado
        cout << "¡Felicidades! Has completado el juego en " << movimientosRealizados << " movimientos.\n";
        
        if (movimientosRealizados == movimientosMinimos) {
            cout << "¡Realizaste el numero minimo de movimientos posibles! ¡Perfecto!\n";
        } else {
            cout << "El numero minimo de movimientos posibles era: " << movimientosMinimos << "\n";
            cout << "Usaste " << (movimientosRealizados - movimientosMinimos) << " movimientos extra.\n";
        }
        
        int puntuacion = calcularPuntuacion();
        cout << "Tu puntuacion final es: " << puntuacion << " puntos.\n";
    }
};

// Funcion principal para resolver automaticamente el puzzle (algoritmo recursivo)
void resolverHanoi(int n, int desde, int hacia, int auxiliar, int &movimientos) {
    if (n == 1) {
        cout << "Mover disco 1 de Torre " << desde << " a Torre " << hacia << "\n";
        movimientos++;
        return;
    }
    
    resolverHanoi(n - 1, desde, auxiliar, hacia, movimientos);
    cout << "Mover disco " << n << " de Torre " << desde << " a Torre " << hacia << "\n";
    movimientos++;
    resolverHanoi(n - 1, auxiliar, hacia, desde, movimientos);
}

int main() {
    int discos;
    int opcion;
    
    cout << "Juego de Torres de Hanoi\n";
    cout << "------------------------\n";
    cout << "1. Jugar manualmente\n";
    cout << "2. Ver solucion automatica\n";
    cout << "Selecciona una opcion: ";
    cin >> opcion;
    
    cout << "Ingresa el numero de discos (1-10): ";
    cin >> discos;
    
    // Validar numero de discos
    if (discos < 1) discos = 1;
    if (discos > 10) discos = 10;
    
    if (opcion == 1) {
        // Juego manual
        TorresDeHanoi juego(discos);
        juego.jugar();
    } else {
        // Solucion automatica
        cout << "\nSolucion automatica para " << discos << " discos:\n";
        int movimientos = 0;
        resolverHanoi(discos, 1, 3, 2, movimientos);
        cout << "\nTotal de movimientos: " << movimientos << "\n";
        cout << "Esto es igual al numero minimo teorico: " << (pow(2, discos) - 1) << "\n";
    }
    
    return 0;
}

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

