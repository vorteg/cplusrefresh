// person.h

#ifndef PERSON_H
#define PERSON_H

#include <string>


class Person {
    private:
        std::string nombre;
        int edad;

    public:
        Person(const std::string& nombre, int edad);
        void mostrarInformacion();
};


#endif // PERSON_H