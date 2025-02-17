#include <iostream>
using namespace std;

// Función recursiva para calcular el término n de la serie de Fibonacci
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int num;
    cout << "Ingrese un número entero positivo: ";
    cin >> num;
    
    cout << "El término " << num << " de la serie de Fibonacci es: " << fibonacci(num) << endl;
    
    return 0;
}
