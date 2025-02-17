#include <iostream>
using namespace std;

// Función iterativa para calcular la potencia de un número
int potenciaIterativa(int base, int exponente) {
    int resultado = 1;
    for (int i = 0; i < exponente; ++i) {
        resultado *= base;
    }
    return resultado;
}

int main() {
    int base, exponente;
    cout << "Ingrese la base: ";
    cin >> base;
    cout << "Ingrese el exponente: ";
    cin >> exponente;
    
    int resultado = potenciaIterativa(base, exponente);
    
    cout << base << " elevado a la " << exponente << " es: " << resultado << endl;
    
    return 0;
}
