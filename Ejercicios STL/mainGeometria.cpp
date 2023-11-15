#include <iostream>
#include "geometria.h"
using namespace geometria;
int main() {
    double lado = 5.0;
    double diagonalMayor = 10.0;
    double diagonalMenor = 6.0;
    double baseMayor = 8.0;
    double baseMenor = 4.0;
    double altura = 3.0;

    std::cout << "El área del cuadrado es: " << geometria::areaCuadrado(lado) << std::endl;
    std::cout << "El área del rombo es: " << geometria::areaRombo(diagonalMayor, diagonalMenor) << std::endl;
    std::cout << "El área del trapecio es: " << geometria::areaTrapecio(baseMayor, baseMenor, altura) << std::endl;
    std::cout << "Area del triangulo: " << geometria::areaTriangulo(5, 3) << std::endl;
    std::cout << "Area del circulo: " << geometria::areaCirculo(3) << std::endl;
    return 0;
}