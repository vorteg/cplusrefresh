#include <iostream>
#include <string>

int main() {
    // Solicitar al usuario que ingrese su nombre
    std::cout << "Ingrese su nombre: ";
    
    // Declarar una variable para almacenar el nombre del usuario
    std::string nombre;
    
    // Leer el nombre del usuario desde la entrada estándar
    std::getline(std::cin, nombre);
    
    // Saludar al usuario utilizando el nombre ingresado
    std::cout << "Hola, " << nombre << "! Bienvenido a nuestro programa." << std::endl;

    return 0;
}