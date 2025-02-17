#include <iostream>
using namespace std;

int factorialIterativo(int n) {
    int resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;

    cout << "Factorial de " << n << ": " << factorialIterativo(n) << endl;

    return 0;
}
