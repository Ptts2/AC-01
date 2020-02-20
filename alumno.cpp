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
    this->Persona::setClase(tipo::ALUMNO);
}

Alumno::Alumno(string nombre, string apellidos, string DNI):Persona(nombre, apellidos, DNI, tipo::ALUMNO)
{
}

int Alumno::getNumNotas()
{
    return this->notas.size();
}

vector<int> Alumno::getNotas()
{
    return this->notas;
}

void Alumno::setNotas(int nota1)
{
    this->notas.push_back(nota1);
}
void Alumno::setNotas(int nota1, int nota2)
{
    this->notas.push_back(nota1);
    this->notas.push_back(nota2);

}
void Alumno::setNotas(int nota1, int nota2, int nota3)
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
    return "ALUMNO: "+this->Persona::toString()+ "\n" +notas+"\nNOTA MEDIA: "+to_string(this->getMedia())+"\n";
}
