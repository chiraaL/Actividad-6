#include <iostream>
using namespace std;

int sumaRecursiva(int n) {
    if (n == 0) return 0;
    return n + sumaRecursiva(n - 1);
}

int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;

    cout << "Suma de los primeros " << n << " numeros naturales: " << sumaRecursiva(n) << endl;

    return 0;
}
