/*******PRESENTACION********
NOMBRE: Juan Manuel Valdez Lopez
FECHA:07 de abril de 2025
PROGRAMA: Actividad de programacion.c
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
PROFESOR: Sergio Franco Casillas
DESCRIPCION: En este programa elaboramos el juego de las torres de hanoi,
donde el usuario puede jugar manualmente o ver la solucion automatica del juego.
********************************************************************/

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
