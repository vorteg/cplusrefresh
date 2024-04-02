#include <iostream>


int main() {
    int num = -10;
    if (num > 0) {
        std::cout << "El número es positivo." << std::endl;
    } else if (num < 0) {
        std::cout << "El número es negativo." << std::endl;
    } else {
        std::cout << "El número es cero." << std::endl;
    }
    return 0;
}