#ifndef EJERCICIOS_STL_GEOMETRIA_H
#define EJERCICIOS_STL_GEOMETRIA_H
namespace geometria {
    double areaTrapecio(double baseMayor, double baseMenor, double altura) {
        return ((baseMayor + baseMenor) * altura) / 2;
    }
    double areaTriangulo(double base, double altura) {
        return (base * altura) / 2;
    }
    double areaCuadrado(double lado) {
        return lado * lado;
    }
    double areaRombo(double diagonalMayor, double diagonalMenor) {
        return (diagonalMayor * diagonalMenor) / 2;
    }
    double areaCirculo(double radio) {
            return 3.14 * radio * radio;
        }

}



#endif //EJERCICIOS_STL_GEOMETRIA_H
