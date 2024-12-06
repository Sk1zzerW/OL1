#include <iostream>
#include <cmath>

int main() {
    double amount;
    std::cout << "Дробовое число ";
    std::cin >> amount;

    int hryvnias = amount;
    int kopecks = round((amount - hryvnias) * 100);

    std::cout << hryvnias << " грн " << kopecks << " коп" << std::endl;

    return 0;
}
