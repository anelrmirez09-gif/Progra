#include <iostream>
using namespace std;

class Calculadora {
public:
    // Suma de dos enteros
    int sumar(int a, int b) {
        return a + b;
    }

    // Suma de dos decimales
    double sumar(double a, double b) {
        return a + b;
    }

    // Suma de tres enteros
    int sumar(int a, int b, int c) {
        return a + b + c;
    }

    // Restar dos enteros
    int restar(int a, int b) {
        return a - b;
    }

    // Restar dos decimales
    double restar(double a, double b) {
        return a - b;
    }
};

int main() {
    Calculadora c;

    cout << "Sumando enteros: " << c.sumar(2, 3) << endl;
    cout << "Sumando doubles: " << c.sumar(2.5, 3.5) << endl;
    cout << "Sumando tres enteros: " << c.sumar(1, 2, 3) << endl;

    cout << "Restando enteros: " << c.restar(10, 4) << endl;
    cout << "Restando doubles: " << c.restar(5.5, 2.2) << endl;

    return 0;
}
