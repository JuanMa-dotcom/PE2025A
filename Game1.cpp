/*******PRESENTACION********
NOMBRE: Juan Manuel Valdez Lopez
FECHA:20 de Marzo de 2025
PROGRAMA: Actividad de programacion Juego1.cpp
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
PROFESOR: Sergio Franco Casillas
DESCRIPCION: En este programa elaboramos un juego en c++ 
********************************************************************/

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
