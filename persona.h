#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>

using namespace std;

enum tipo
{
    PROFESOR,
    ALUMNO
};

class Persona
{
public:
    Persona();
    Persona(string nombre, string apellidos, string DNI);
    Persona(string nombre, string apellidos, string DNI, tipo clase);
    ~Persona(void);

    //Getters
    string getClase();
    string getNombre();
    string getApellidos();
    string getDNI();

    //Setters
    void setClase(tipo clase);
    void setNombre(string nombre);
    void setApellidos(string apellidos);
    void setDNI(string DNI);

    //Devuelve los datos de la persona como string
    string toString();


private:
    string nombre;
    string apellidos;
    string DNI;
    tipo clase;

};

#endif // PERSONA_H
