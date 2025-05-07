/*******PRESENTACION********
NOMBRE: Juan Manuel Valdez Lopez
FECHA:06 de Mayo de 2025
PROGRAMA: Actividad de programacion.c
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
PROFESOR: Sergio Franco Casillas
DESCRIPCION: En este programa elaboramos el proyecto final de la clase de programacion
********************************************************************/

#include "Funciones.h" 
using namespace std;


// Función principal/inicio de main
int main() {
    int opcion;
    bool salir = false;
    srand(time(0)); // Inicializar semilla para números aleatorios

    while (!salir) {
        #ifdef _WIN32
            system("cls");
        #else
            system("clear");
        #endif

        cout << "\n===== MENU PRINCIPAL DE PROGRAMAS =====\n" << endl;
        cout << "1. Datos personales" << endl;
        cout << "2. Caracteres de escape" << endl;
        cout << "3. Operaciones con numeros" << endl;
        cout << "4. Serie de Fibonacci" << endl;
        cout << "5. Multiplos de 3 y 5" << endl;
        cout << "6. Suma de cuadrados" << endl;
        cout << "7. Suma de numeros primos" << endl;
        cout << "8. Manejo de arreglos" << endl;
        cout << "9. Manejo de matrices" << endl;
        cout << "10. Operaciones con conjuntos" << endl;
        cout << "11. Secuencia de Collatz" << endl;
        cout << "12. Juego del ahorcado" << endl;
        cout << "13. Torres de Hanoi" << endl;
        cout << "14. Verificador de palindromos" << endl;
        cout << "0. Salir" << endl;
        cout << "\nSeleccione una opcion: ";
        cin >> opcion;

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        switch (opcion) {
            case 0:
                salir = true;
                cout << "\nGracias por usar el programa. ¡Hasta pronto!\n" << endl;
                break;
            case 1:
                ejercicio1_datos_personales();
                break;
            case 2:
                ejercicio2_caracteres_escape();
                break;
            case 3:
                ejercicio3_operaciones_numero();
                break;
            case 4:
                ejercicio4_fibonacci();
                break;
            case 5:
                ejercicio5_multiplos();
                break;
            case 6:
                ejercicio6_suma_cuadrados();
                break;
            case 7:
                ejercicio7_suma_primos();
                break;
            case 8:
                ejercicio8_manejo_arreglos();
                break;
            case 9:
                ejercicio9_manejo_matrices();
                break;
            case 10:
                ejercicio10_operaciones_conjuntos();
                break;
            case 11:
                ejercicio11_secuencia_collatz();
                break;
            case 12:
                ejercicio12_juego_ahorcado();
                break;
            case 13:
                ejercicio13_torres_hanoi();
                break;
            case 14:
                ejercicio14_palindromo();
                break;
            default:
                cout << "\nOpción no válida. Presione Enter para continuar...";
                cin.get();
                break;
        }
    }

    return 0;
}

// Implementación de los ejercicios

void ejercicio1_datos_personales() {
    cout << "\n===== DATOS PERSONALES =====\n" << endl;
    cout << "Nombre: Juan Manuel Valdez Lopez" << endl;
    cout << "Edad: 20 años" << endl;
    cout << "Lugar de residencia: Arandas, Jalisco" << endl;
    cout << "Fecha: 30/01/2025" << endl;
    cout << "Carrera: Ing. en Computación" << endl;
    cout << "Semestre: Segundo" << endl;
    cout << "\nPresione Enter para volver al menú principal...";
    cin.get();
}

void ejercicio2_caracteres_escape() {
    cout << "\n===== CARACTERES DE ESCAPE =====\n" << endl;
    cout << "Ejemplo de caracteres de escape:\n";
    cout << "Salto de línea:\nLínea 2\nLínea 3" << endl;
    cout << "Tabulador:\tTexto tabulado" << endl;
    cout << "Comilla doble: \"Texto entre comillas\"" << endl;
    cout << "Barra invertida: \\" << endl;
    cout << "Retorno de carro:\rTexto después del retorno" << endl;
    cout << "Alarma (beep): \a" << endl;
    
    cout << "\nFormatos de salida:" << endl;
    cout << "Entero: " << 123 << endl;
    cout << "Flotante: " << fixed << setprecision(2) << 3.14159 << endl;
    cout << "Caracter: " << 'A' << endl;
    cout << "Cadena: " << "Hola mundo" << endl;
    cout << "Octal: " << oct << 100 << dec << endl;
    cout << "Hexadecimal: " << hex << 255 << dec << endl;
    
    cout << "\nPresione Enter para volver al menú principal...";
    cin.get();
}

void ejercicio3_operaciones_numero() {
    cout << "\n===== OPERACIONES CON NÚMEROS =====\n" << endl;
    int numero;
    char continuar;

    do {
        cout << "Ingrese un numero: ";
        cin >> numero;

        if (numero > 0 && numero < 500) {
            cout << "Incrementando de 5 en 5 (100 veces):" << endl;
            for (int i = 0; i < 100; i++) {
                numero += 5;
                cout << "Paso " << i+1 << ": " << numero << endl;
            }
        }
        else if (numero > 500 && numero < 1000) {
            cout << "Incrementando de 10 en 10 (50 veces):" << endl;
            for (int i = 0; i < 50; i++) {
                numero += 10;
                cout << "Paso " << i+1 << ": " << numero << endl;
            }
        }
        else if (numero > 1000) {
            cout << "Numero demasiado grande (mayor que 1000)" << endl;
        } else {
            cout << "Numero debe ser positivo" << endl;
        }

        cout << "¿Continuar? (s/n): ";
        cin >> continuar;
    } while (continuar == 's' || continuar == 'S');
    
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "\nPresione Enter para volver al menu principal...";
    cin.get();
}

void fibonacciFor(int limite) {
    int a = 0, b = 1, c;
    cout << "Fibonacci con for: ";
    for (int i = 0; a <= limite; i++) {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
    cout << endl;
}

void fibonacciWhile(int limite) {
    int a = 0, b = 1, c;
    cout << "Fibonacci con while: ";
    while (a <= limite) {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
    cout << endl;
}

void fibonacciDoWhile(int limite) {
    int a = 0, b = 1, c;
    cout << "Fibonacci con do-while: ";
    do {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    } while (a <= limite);
    cout << endl;
}

void ejercicio4_fibonacci() {
    cout << "\n===== SERIE DE FIBONACCI =====\n" << endl;
    int opcion, limite;
    char continuar;

    do {
        cout << "1. Usando for\n2. Usando while\n3. Usando do-while\nOpción: ";
        cin >> opcion;
        cout << "Limite máximo: ";
        cin >> limite;

        switch(opcion) {
            case 1: fibonacciFor(limite); break;
            case 2: fibonacciWhile(limite); break;
            case 3: fibonacciDoWhile(limite); break;
            default: cout << "Opción inválida" << endl;
        }

        cout << "¿Continuar? (s/n): ";
        cin >> continuar;
    } while (continuar == 's' || continuar == 'S');
    
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "\nPresione Enter para volver al menu principal...";
    cin.get();
}

void ejercicio5_multiplos() {
    cout << "\n===== MULTIPLOS DE 3 Y 5 =====\n" << endl;
    int numero;
    cout << "Ingrese un numero (0-1000): ";
    cin >> numero;

    if (numero < 0 || numero > 1000) {
        cout << "Numero fuera de rango" << endl;
    } else {
        int count3 = 0, sum3 = 0;
        int count5 = 0, sum5 = 0;

        for (int i = 0; i <= numero; i++) {
            if (i % 3 == 0) {
                cout << i << " es multiplo de 3" << endl;
                count3++;
                sum3 += i;
            }
            if (i % 5 == 0) {
                cout << i << " es multiplo de 5" << endl;
                count5++;
                sum5 += i;
            }
        }

        cout << "\nResumen:" << endl;
        cout << "Multiplos de 3: " << count3 << " (suma = " << sum3 << ")" << endl;
        cout << "Multiplos de 5: " << count5 << " (suma = " << sum5 << ")" << endl;
    }
    
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "\nPresione Enter para volver al menu principal...";
    cin.get();
}

void ejercicio6_suma_cuadrados() {
    cout << "\n===== SUMA DE CUADRADOS =====\n" << endl;
    long numero;
    cout << "Ingrese un número: ";
    cin >> numero;

    if (numero < 0) {
        cout << "Numero debe ser positivo" << endl;
    } else {
        long suma = 0;
        cout << "Suma: ";
        for (long i = 1; i <= numero; i++) {
            suma += i * i;
            cout << i << "^2";
            if (i < numero) cout << " + ";
        }
        cout << " = " << suma << endl;
    }
    
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "\nPresione Enter para volver al menu principal...";
    cin.get();
}

bool esPrimo(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

void ejercicio7_suma_primos() {
    cout << "\n===== SUMA DE PRIMOS =====\n" << endl;
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;

    int suma = 0;
    cout << "Primos encontrados: ";
    for (int i = 2; i <= n; i++) {
        if (esPrimo(i)) {
            cout << i << " ";
            suma += i;
        }
    }
    cout << "\nSuma total: " << suma << endl;
    
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "\nPresione Enter para volver al menu principal...";
    cin.get();
}

const int MAX_SIZE = 10;

void mostrarMenuArreglos() {
    cout << "\n--- Menu Arreglos ---" << endl;
    cout << "1. Agregar valor" << endl;
    cout << "2. Mostrar valores" << endl;
    cout << "3. Calcular sumatoria" << endl;
    cout << "4. Editar valor" << endl;
    cout << "5. Borrar valor" << endl;
    cout << "6. Vaciar arreglo" << endl;
    cout << "7. Salir" << endl;
    cout << "Opcion: ";
}

void ejercicio8_manejo_arreglos() {
    cout << "\n===== MANEJO DE ARREGLOS =====\n" << endl;
    int arreglo[MAX_SIZE] = {0};
    int tam = 0;
    int opcion;

    do {
        mostrarMenuArreglos();
        cin >> opcion;

        switch(opcion) {
            case 1: // Agregar
                if (tam >= MAX_SIZE) {
                    cout << "Arreglo lleno!" << endl;
                } else {
                    cout << "Valor: ";
                    cin >> arreglo[tam++];
                }
                break;
            case 2: // Mostrar
                if (tam == 0) {
                    cout << "Arreglo vacio" << endl;
                } else {
                    for (int i = 0; i < tam; i++) {
                        cout << "[" << i << "]: " << arreglo[i] << endl;
                    }
                }
                break;
            case 3: // Sumatoria
                if (tam == 0) {
                    cout << "Arreglo vacio" << endl;
                } else {
                    int sum = 0;
                    for (int i = 0; i < tam; i++) sum += arreglo[i];
                    cout << "Sumatoria: " << sum << endl;
                }
                break;
            case 4: // Editar
                if (tam == 0) {
                    cout << "Arreglo vacio" << endl;
                } else {
                    int pos;
                    cout << "Posicion (0-" << tam-1 << "): ";
                    cin >> pos;
                    if (pos >= 0 && pos < tam) {
                        cout << "Nuevo valor: ";
                        cin >> arreglo[pos];
                    } else {
                        cout << "Posicion invalida" << endl;
                    }
                }
                break;
            case 5: // Borrar
                if (tam == 0) {
                    cout << "Arreglo vacio" << endl;
                } else {
                    int pos;
                    cout << "Posicion (0-" << tam-1 << "): ";
                    cin >> pos;
                    if (pos >= 0 && pos < tam) {
                        for (int i = pos; i < tam-1; i++) {
                            arreglo[i] = arreglo[i+1];
                        }
                        tam--;
                    } else {
                        cout << "Posicion invalida" << endl;
                    }
                }
                break;
            case 6: // Vaciar
                tam = 0;
                cout << "Arreglo vaciado" << endl;
                break;
            case 7: // Salir
                cout << "Saliendo..." << endl;
                break;
            default:
                cout << "Opción invalida" << endl;
        }
    } while (opcion != 7);
    
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "\nPresione Enter para volver al menu principal...";
    cin.get();
}

class Matriz {
private:
    int** datos;
    int tam;
public:
    Matriz(int n) : tam(n) {
        datos = new int*[tam];
        for (int i = 0; i < tam; i++) {
            datos[i] = new int[tam];
            for (int j = 0; j < tam; j++) {
                datos[i][j] = 0;
            }
        }
    }

    ~Matriz() {
        for (int i = 0; i < tam; i++) {
            delete[] datos[i];
        }
        delete[] datos;
    }

    void llenarAleatorio() {
        for (int i = 0; i < tam; i++) {
            for (int j = 0; j < tam; j++) {
                datos[i][j] = rand() % 201 - 100;
            }
        }
    }

    void mostrar() {
        for (int i = 0; i < tam; i++) {
            for (int j = 0; j < tam; j++) {
                cout << setw(5) << datos[i][j];
            }
            cout << endl;
        }
    }

    void editar(int fila, int col, int valor) {
        if (fila >= 0 && fila < tam && col >= 0 && col < tam) {
            datos[fila][col] = valor;
        } else {
            cout << "Posición inválida" << endl;
        }
    }

    void borrar(int fila, int col) {
        editar(fila, col, 0);
    }

    void vaciar() {
        for (int i = 0; i < tam; i++) {
            for (int j = 0; j < tam; j++) {
                datos[i][j] = 0;
            }
        }
    }

    Matriz sumar(Matriz& otra) {
        Matriz resultado(tam);
        for (int i = 0; i < tam; i++) {
            for (int j = 0; j < tam; j++) {
                resultado.datos[i][j] = datos[i][j] + otra.datos[i][j];
            }
        }
        return resultado;
    }

    Matriz restar(Matriz& otra) {
        Matriz resultado(tam);
        for (int i = 0; i < tam; i++) {
            for (int j = 0; j < tam; j++) {
                resultado.datos[i][j] = datos[i][j] - otra.datos[i][j];
            }
        }
        return resultado;
    }

    Matriz multiplicar(Matriz& otra) {
        Matriz resultado(tam);
        for (int i = 0; i < tam; i++) {
            for (int j = 0; j < tam; j++) {
                resultado.datos[i][j] = 0;
                for (int k = 0; k < tam; k++) {
                    resultado.datos[i][j] += datos[i][k] * otra.datos[k][j];
                }
            }
        }
        return resultado;
    }
};

void ejercicio9_manejo_matrices() {
    cout << "\n===== MANEJO DE MATRICES =====\n" << endl;
    int tam;
    cout << "Tamanio de las matrices: ";
    cin >> tam;

    Matriz m1(tam), m2(tam);
    int opcion;

    do {
        cout << "\n--- Menu Matrices ---" << endl;
        cout << "1. Llenar matriz 1 aleatorio" << endl;
        cout << "2. Llenar matriz 2 aleatorio" << endl;
        cout << "3. Mostrar matriz 1" << endl;
        cout << "4. Mostrar matriz 2" << endl;
        cout << "5. Editar elemento matriz 1" << endl;
        cout << "6. Editar elemento matriz 2" << endl;
        cout << "7. Sumar matrices" << endl;
        cout << "8. Restar matrices" << endl;
        cout << "9. Multiplicar matrices" << endl;
        cout << "10. Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;

        switch(opcion) {
            case 1:
                m1.llenarAleatorio();
                cout << "Matriz 1 llenada" << endl;
                break;
            case 2:
                m2.llenarAleatorio();
                cout << "Matriz 2 llenada" << endl;
                break;
            case 3:
                cout << "Matriz 1:" << endl;
                m1.mostrar();
                break;
            case 4:
                cout << "Matriz 2:" << endl;
                m2.mostrar();
                break;
            case 5: {
                int fila, col, valor;
                cout << "Fila y columna: ";
                cin >> fila >> col;
                cout << "Nuevo valor: ";
                cin >> valor;
                m1.editar(fila, col, valor);
                break;
            }
            case 6: {
                int fila, col, valor;
                cout << "Fila y columna: ";
                cin >> fila >> col;
                cout << "Nuevo valor: ";
                cin >> valor;
                m2.editar(fila, col, valor);
                break;
            }
            case 7: {
                Matriz suma = m1.sumar(m2);
                cout << "Suma:" << endl;
                suma.mostrar();
                break;
            }
            case 8: {
                Matriz resta = m1.restar(m2);
                cout << "Resta:" << endl;
                resta.mostrar();
                break;
            }
            case 9: {
                Matriz producto = m1.multiplicar(m2);
                cout << "Producto:" << endl;
                producto.mostrar();
                break;
            }
            case 10:
                cout << "Saliendo..." << endl;
                break;
            default:
                cout << "Opcion invalida" << endl;
        }
    } while (opcion != 10);
    
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "\nPresione Enter para volver al menu principal...";
    cin.get();
}

template<typename T>
void mostrarConjunto(const vector<T>& conjunto) {
    if (conjunto.empty()) {
        cout << "Conjunto vacio" << endl;
    } else {
        for (const auto& elem : conjunto) {
            cout << elem << " ";
        }
        cout << endl;
    }
}

template<typename T>
vector<T> unionConjuntos(const vector<T>& A, const vector<T>& B) {
    vector<T> resultado = A;
    for (const auto& elem : B) {
        if (find(resultado.begin(), resultado.end(), elem) == resultado.end()) {
            resultado.push_back(elem);
        }
    }
    return resultado;
}

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

void ejercicio10_operaciones_conjuntos() {
    cout << "\n===== OPERACIONES CON CONJUNTOS =====\n" << endl;
    vector<int> conjuntoA, conjuntoB;
    int opcion, valor;

    do {
        cout << "\n--- Menú Conjuntos ---" << endl;
        cout << "1. Agregar a conjunto A" << endl;
        cout << "2. Agregar a conjunto B" << endl;
        cout << "3. Mostrar conjuntos" << endl;
        cout << "4. Union" << endl;
        cout << "5. Interseccion" << endl;
        cout << "6. Diferencia (A - B)" << endl;
        cout << "7. Salir" << endl;
        cout << "Opción: ";
        cin >> opcion;

        switch(opcion) {
            case 1:
                cout << "Valor: ";
                cin >> valor;
                conjuntoA.push_back(valor);
                break;
            case 2:
                cout << "Valor: ";
                cin >> valor;
                conjuntoB.push_back(valor);
                break;
            case 3:
                cout << "Conjunto A: ";
                mostrarConjunto(conjuntoA);
                cout << "Conjunto B: ";
                mostrarConjunto(conjuntoB);
                break;
            case 4: {
                vector<int> uni = unionConjuntos(conjuntoA, conjuntoB);
                cout << "Union: ";
                mostrarConjunto(uni);
                break;
            }
            case 5: {
                vector<int> inter = interseccionConjuntos(conjuntoA, conjuntoB);
                cout << "Interseccion: ";
                mostrarConjunto(inter);
                break;
            }
            case 6: {
                vector<int> dif = diferenciaConjuntos(conjuntoA, conjuntoB);
                cout << "Diferencia (A - B): ";
                mostrarConjunto(dif);
                break;
            }
            case 7:
                cout << "Saliendo..." << endl;
                break;
            default:
                cout << "Opción invalida" << endl;
        }
    } while (opcion != 7);
    
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "\nPresione Enter para volver al menu principal...";
    cin.get();
}

int generarSecuenciaCollatz(int n) {
    int pasos = 0;
    while (n != 1) {
        cout << n << " -> ";
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
        pasos++;
    }
    cout << "1" << endl;
    return pasos;
}

void ejercicio11_secuencia_collatz() {
    cout << "\n===== SECUENCIA DE COLLATZ =====\n" << endl;
    int numero;
    cout << "Ingrese un numero positivo: ";
    cin >> numero;

    if (numero <= 0) {
        cout << "Numero debe ser positivo" << endl;
    } else {
        cout << "Secuencia:" << endl;
        int pasos = generarSecuenciaCollatz(numero);
        cout << "Pasos totales: " << pasos << endl;
    }
    
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "\nPresione Enter para volver al menu principal...";
    cin.get();
}

vector<string> palabrasAhorcado = {
    "computadora", "programacion", "algoritmo", "variable", "funcion",
    "estructura", "lenguaje", "depuracion", "compilador", "sintaxis"
};

string seleccionarPalabraAleatoria() {
    return palabrasAhorcado[rand() % palabrasAhorcado.size()];
}

void mostrarProgreso(const string& palabra, const vector<bool>& letrasAdivinadas) {
    for (size_t i = 0; i < palabra.length(); i++) {
        if (letrasAdivinadas[i]) {
            cout << palabra[i] << " ";
        } else {
            cout << "_ ";
        }
    }
    cout << endl;
}

void ejercicio12_juego_ahorcado() {
    cout << "\n===== JUEGO DEL AHORCADO =====\n" << endl;
    string palabra = seleccionarPalabraAleatoria();
    vector<bool> letrasAdivinadas(palabra.length(), false);
    int intentos = 6;
    int letrasRestantes = palabra.length();
    char letra;

    cout << "Adivina la palabra (" << palabra.length() << " letras):" << endl;

    while (intentos > 0 && letrasRestantes > 0) {
        mostrarProgreso(palabra, letrasAdivinadas);
        cout << "Intentos restantes: " << intentos << endl;
        cout << "Ingresa una letra: ";
        cin >> letra;

        bool acierto = false;
        for (size_t i = 0; i < palabra.length(); i++) {
            if (palabra[i] == tolower(letra) && !letrasAdivinadas[i]) {
                letrasAdivinadas[i] = true;
                letrasRestantes--;
                acierto = true;
            }
        }

        if (!acierto) {
            intentos--;
            cout << "Letra incorrecta!" << endl;
        }
    }

    mostrarProgreso(palabra, letrasAdivinadas);
    if (letrasRestantes == 0) {
        cout << "¡Felicidades! Ganaste. La palabra era: " << palabra << endl;
    } else {
        cout << "¡Perdiste! La palabra era: " << palabra << endl;
    }
    
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "\nPresione Enter para volver al menu principal...";
    cin.get();
}

void resolverHanoi(int discos, int origen, int destino, int auxiliar, int& movimientos) {
    if (discos == 1) {
        cout << "Mover disco 1 de torre " << origen << " a torre " << destino << endl;
        movimientos++;
    } else {
        resolverHanoi(discos-1, origen, auxiliar, destino, movimientos);
        cout << "Mover disco " << discos << " de torre " << origen << " a torre " << destino << endl;
        movimientos++;
        resolverHanoi(discos-1, auxiliar, destino, origen, movimientos);
    }
}

void ejercicio13_torres_hanoi() {
    cout << "\n===== TORRES DE HANOI =====\n" << endl;
    int discos;
    cout << "Numero de discos: ";
    cin >> discos;

    int movimientos = 0;
    cout << "Solucion:" << endl;
    resolverHanoi(discos, 1, 3, 2, movimientos);
    cout << "Total de movimientos: " << movimientos << endl;
    
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "\nPresione Enter para volver al menu principal...";
    cin.get();
} //Juego torres de hanoi

bool esPalindromo(const string& str) {
    int izq = 0;
    int der = str.length() - 1;

    while (izq < der) {
        while (izq < der && !isalnum(str[izq])) izq++;
        while (izq < der && !isalnum(str[der])) der--;

        if (tolower(str[izq]) != tolower(str[der])) {
            return false;
        }

        izq++;
        der--;
    }
    return true;
}

int contarVocales(const string& str) {
    int contador = 0;
    for (char c : str) {
        if (strchr("aeiouáéíóú", tolower(c))) {
            contador++;
        }
    }
    return contador;
}

int contarConsonantes(const string& str) {
    int contador = 0;
    for (char c : str) {
        if (isalpha(c) && !strchr("aeiouáéíóú", tolower(c))) {
            contador++;
        }
    }
    return contador;
}

void ejercicio14_palindromo() {
    cout << "\n===== VERIFICADOR DE PALINDROMOS =====\n" << endl;
    string texto;
    cout << "Ingrese un texto: ";
    getline(cin, texto);

    if (esPalindromo(texto)) {
        cout << "¡Es un palindromo!" << endl;
    } else {
        cout << "No es un palindromo" << endl;
    }

    cout << "Estadisticas:" << endl;
    cout << "Longitud: " << texto.length() << " caracteres" << endl;
    cout << "Vocales: " << contarVocales(texto) << endl;
    cout << "Consonantes: " << contarConsonantes(texto) << endl;
    
    cout << "\nPresione Enter para volver al menu principal...";
    cin.get();
}