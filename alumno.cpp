#include "alumno.h"
#include <vector>
#include <iostream>
#include <string>

using namespace std;
Alumno::Alumno()
{
}

Alumno::~Alumno()
{
}

Alumno::Alumno(string nombre, string apellidos, string DNI):Persona(nombre, apellidos, DNI)
{
}

int Alumno::getNumNotas()
{
    return this->notas.size();
}

vector<double> Alumno::getNotas()
{
    return this->notas;
}

void Alumno::setNotas(double nota1)
{
    this->notas.push_back(nota1);
}
void Alumno::setNotas(double nota1, double nota2)
{
    this->notas.push_back(nota1);
    this->notas.push_back(nota2);

}
void Alumno::setNotas(double nota1, double nota2, double nota3)
{
    this->notas.push_back(nota1);
    this->notas.push_back(nota2);
    this->notas.push_back(nota3);
}
double Alumno::getMedia()
{
    double media = 0;
    int size = this->notas.size();

    for(int i = 0; i<size; i++)
    {
        media += this->notas[i];
    }

    return (media/size);
}

string Alumno::toString()
{
    string notas;
    for(int i = 0; i<(int)this->notas.size();i++)
    {
        notas = notas + "NOTA "+to_string((i+1))+": "+to_string(this->notas[i])+"   ";
    }
    return "ALUMNO: "+this->Persona::toString()+ "\n" +notas+"\nNOTA MEDIA: "+to_string(this->Alumno::getMedia())+"\n";
}

bool Alumno::equals(Alumno alumno)
{

    if(this == &alumno)
    {
        return true;
    }

    if(this->Persona::getDNI() == alumno.Persona::getDNI() && this->Persona::getNombre() == alumno.Persona::getNombre() && this->Persona::getApellidos() == alumno.Persona::getApellidos())
    {
        return true;
    }
    else
    {
        return false;
    }

}
