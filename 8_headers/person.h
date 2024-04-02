// person.h

#ifndef PERSON_H
#define PERSON_H

#include <string>

class Persona {
private:
    std::string nombre;
    int edad;

public:
    Persona(const std::string& nombre, int edad) : nombre(nombre), edad(edad) {}

    void mostrarInformacion() {
        std::cout << "Nombre: " << nombre << ", Edad: " << edad << std::endl;
    }
};

#endif  // PERSON_H