#include <iostream>
#include "person.h"  // Incluimos el archivo de encabezado donde está definida la clase Persona

int main() {
    // Creamos una instancia de la clase Persona
    Persona persona("Juan", 25);

    // Llamamos al método para mostrar la información de la persona
    persona.mostrarInformacion();

    return 0;
}