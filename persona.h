#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>

using namespace std;

class Persona
{
public:
    Persona();
    Persona(string nombre, string apellidos, string DNI);
    ~Persona(void);

    //Getters
    string getNombre();
    string getApellidos();
    string getDNI();

    //Setters
    void setNombre(string nombre);
    void setApellidos(string apellidos);
    void setDNI(string DNI);

    //Devuelve los datos de la persona como string
    string toString();


private:
    string nombre;
    string apellidos;
    string DNI;
};

#endif // PERSONA_H
