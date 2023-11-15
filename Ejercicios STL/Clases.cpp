#include <iostream>

namespace Geometria {
    class Circulo {
    private:
        double radio;
    public:
        Circulo(double r) : radio(r) {}
        double calcularArea() {
            return 3.14 * radio * radio;
        }
        double calcularPerimetro() {
            return 2 * 3.14 * radio;
        }
    };

    class Cuadrado {
    private:
        double lado;
    public:
        Cuadrado(double l) : lado(l) {}
        double calcularArea() {
            return lado * lado;
        }
        double calcularPerimetro() {
            return 4 * lado;
        }
    };

    class Triangulo {
    private:
        double base;
        double altura;
        double lado1;
        double lado2;
    public:
        Triangulo(double b, double h, double l1, double l2) : base(b), altura(h), lado1(l1), lado2(l2) {}
        double calcularArea() {
            return 0.5 * base * altura;
        }
        double calcularPerimetro() {
            return base + lado1 + lado2;
        }
    };

    class Trapecio {
    private:
        double baseMayor;
        double baseMenor;
        double altura;
        double lado1;
        double lado2;
    public:
        Trapecio(double bm, double bm2, double h, double l1, double l2) : baseMayor(bm), baseMenor(bm2), altura(h), lado1(l1), lado2(l2) {}
        double calcularArea() {
            return 0.5 * (baseMayor + baseMenor) * altura;
        }
        double calcularPerimetro() {
            return baseMayor + baseMenor + lado1 + lado2;
        }
    };
}

int main() {
    Geometria::Circulo c(5);
    std::cout << "Area: " << c.calcularArea() << std::endl;
    std::cout << "Perimetro: " << c.calcularPerimetro() << std::endl;
    return 0;
}
