#include <iostream>
#include <vector>
#include <map>
#include <set>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    vec.push_back(6);
    vec.pop_back();
    std::cout << "Vector: ";

    for (int i : vec) {
        std::cout << i << " ";

    }
    std::cout << std::endl;
    std::map<std::string, int> mapa = {{"uno", 1}, {"dos", 2}, {"tres", 3}};
    mapa.insert({"cuatro", 4});

    auto it = mapa.find("dos");
    if (it != mapa.end()) {
        std::cout << "Valor de 'dos': " << it->second << std::endl;
    }
    mapa.erase("tres");
    std::cout << "Mapa: ";

    for (auto const& [key, val] : mapa) {
        std::cout << key << ":" << val << " ";
    }
    std::cout << std::endl;
    std::set<int> conjunto = {1, 2, 3, 4, 5};
    conjunto.insert(6);
    conjunto.erase(3);

    auto it2 = conjunto.find(4);

    if (it2 != conjunto.end()) {
        std::cout << "El elemento 4 está en el conjunto" << std::endl;
    }
    std::cout << "Conjunto: ";

    for (int i : conjunto) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}
