#include <iostream>


int main(){
    int arreglo[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; ++i) {
        std::cout << "Elemento " << i << ": " << arreglo[i] << std::endl;
    }
}