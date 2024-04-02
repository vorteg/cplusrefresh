#include <iostream>


int main(){
    for (int i = 0; i < 5; ++i) {
    std::cout << "El valor de i es: " << i << std::endl;
}

int j = 0;
while (j < 5) {
    std::cout << "El valor de j es: " << j << std::endl;
    j++;
}

int k = 0;
do {
    std::cout << "El valor de k es: " << k << std::endl;
    k++;
} while (k < 5);
    return 0;
}