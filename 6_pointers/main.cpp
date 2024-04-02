#include <iostream>


int  main (){
    int valor = 10;
    int* puntero = &valor;

    std::cout << "Valor: " << valor << std::endl;
    std::cout << "Dirección de memoria desde valor: " << &valor << std::endl;
    std::cout << "Dirección de memoria: " << puntero << std::endl;
    std::cout << "Dirección de memoria del puntero: " << &puntero << std::endl;
    std::cout << "Valor apuntado por el puntero: " << *puntero << std::endl;
    return 0;
}