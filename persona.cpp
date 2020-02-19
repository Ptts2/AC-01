#include "persona.h"
#include <iostream>

using namespace std;
Persona::Persona()
{
    cout << "No soy nadie" << endl;
}

Persona::Persona(string nombre, string apellidos, string DNI)
{
    this->nombre = nombre;
    this->apellidos = apellidos;
    this->DNI = DNI;
}

Persona::~Persona(void)
{
}

string Persona::getClase()
{
   if(this->clase==PROFESOR)
       return "Profesor";
   else
       return "Alumno";
}

string Persona::getNombre()
{
    return this->nombre;
}

string Persona::getApellidos()
{
    return this->apellidos;
}

string Persona::getDNI()
{
    return this->DNI;
}

void Persona::setClase(tipo clase)
{
    this->clase = clase;
}
void Persona::setNombre(string nombre)
{
    this->nombre = nombre;
}
void Persona::setApellidos(string apellidos)
{
    this->apellidos = apellidos;
}
void Persona::setDNI(string DNI)
{
    this->DNI = DNI;
}
