// person.cpp


#include "person.h"
#include <iostream>



Person::Person(const std::string& nombre, int edad) : nombre(nombre), edad(edad){}


void Person::mostrarInformacion(){
    std::cout << "Nombre: " << nombre << ", Edad: " <<  edad << std::endl;

}