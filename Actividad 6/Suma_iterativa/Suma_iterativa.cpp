#include <iostream>
using namespace std;

// Función iterativa para calcular la suma de los primeros n números naturales
int sumaIterativa(int n) {
    int suma = 0;
    for (int i = 1; i <= n; ++i) {
        suma += i;
    }
    return suma;
}

int main() {
    int num;
    cout << "Ingrese un número entero positivo: ";
    cin >> num;
    
    int resultado = sumaIterativa(num);
    
    cout << "La suma de los primeros " << num << " números es: " << resultado << endl;
    
    return 0;
}
