// main.cpp

#include <iostream>
#include "person.h"  // Incluimos el archivo de encabezado donde está definida la clase Persona

int main() {
    // Creamos una instancia de la clase Persona
    Person persona("Juan", 25);

    // Llamamos al método para mostrar la información de la persona
    persona.mostrarInformacion();

    return 0;
}

//Ojo que hay que compilar todo junto 
// g++ -o 9_headers_second/main 9_headers_second/main.cpp 9_headers_second/person.cpp 