#include "alumno.h"
#include <vector>


Alumno::Alumno()
{
    this->notas = std::vector<int>();
}

Alumno::~Alumno()
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
    this->notas.insert(notas.begin(), nota1);
}
void Alumno::setNotas(int nota1, int nota2)
{
    this->notas.insert(notas.begin(), nota1);
    this->notas.insert(notas.begin()+1, nota2);

}
void Alumno::setNotas(int nota1, int nota2, int nota3)
{
    this->notas.insert(notas.begin(), nota1);
    this->notas.insert(notas.begin()+1, nota2);
    this->notas.insert(notas.begin()+2, nota3);
}
