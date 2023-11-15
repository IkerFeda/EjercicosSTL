#include <cmath>

namespace Matematicas {
    int suma(int a, int b) {
        return a + b;
    }
    int resta(int a, int b) {
        return a - b;
    }
    int multiplicacion(int a, int b) {
        return a * b;
    }
    int division(int a, int b) {
        return a / b;
    }
    int potencia(int a, int b) {
        return pow(a, b);
    }
    double raiz(double a) {
        return sqrt(a);
    }
}

#include <iostream>

int main() {
    std::cout << "Suma: " << Matematicas::suma(5, 3) << std::endl;
    std::cout << "Resta: " << Matematicas::resta(5, 3) << std::endl;
    std::cout << "Multiplicacion: " << Matematicas::multiplicacion(5, 3) << std::endl;
    std::cout << "Division: " << Matematicas::division(6, 3) << std::endl;
    std::cout << "Potencia: " << Matematicas::potencia(2, 3) << std::endl;
    std::cout << "Raiz: " << Matematicas::raiz(25) << std::endl;
    return 0;
}
