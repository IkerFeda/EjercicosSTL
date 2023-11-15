#include <iostream>

namespace Ciencia {
    namespace Fisica {
        const double c = 299792458;
        double calcularEnergia(double masa) {
            return masa * c * c;
        }
    }
    namespace Quimica {
        double calcularMoles(double masa, double pesoMolecular) {
            return masa / pesoMolecular;
        }
    }
    namespace Biologia {
        double calcularMasa(double moles, double pesoMolecular) {
            return moles * pesoMolecular;
        }
    }
}

int main() {
    std::cout << "Energia: " << Ciencia::Fisica::calcularEnergia(10) << std::endl;
    std::cout << "Moles: " << Ciencia::Quimica::calcularMoles(100, 50) << std::endl;
    std::cout << "Masa: " << Ciencia::Biologia::calcularMasa(10, 25) << std::endl;
    return 0;
}
