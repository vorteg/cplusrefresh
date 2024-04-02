#include <iostream>


int sumar(int a, int b) {
    return a + b;
}

int main(){
    int resultado = sumar(3, 5);
    std::cout << "La suma es: " << resultado << std::endl;
    return 0;
}