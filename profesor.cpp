#include "profesor.h"
#include <vector>
#include <iostream>
#include <string>

using namespace std;

Profesor::Profesor()
{
}

Profesor::Profesor(string nombre, string apellidos, string DNI):Persona(nombre, apellidos, DNI)
{
}

Profesor::~Profesor()
{
}

void Profesor::addAlumno(Alumno alumno)
{
    this->alumnos.push_back(alumno);
}

vector<Alumno> Profesor::getAlumnos()
{
    return this->alumnos;
}


void Profesor::asignarNotas(Alumno &alumno, int nota1)
{
    int alumnos = this->alumnos.size(), i = 0;
    bool found = false;

    while(!found && i < alumnos)
    {
        if(this->alumnos[i].equals(alumno))
        {
            found = true;
            this->alumnos[i].Alumno::setNotas(nota1);
        }
        i++;
    }
}

void Profesor::asignarNotas(Alumno &alumno, int nota1, int nota2)
{
    int alumnos = this->alumnos.size(), i = 0;
    bool found = false;

    while(!found && i < alumnos)
    {

        if(this->alumnos[i].equals(alumno))
        {
            found = true;
            this->alumnos[i].Alumno::setNotas(nota1, nota2);
        }
        i++;
    }

}

void Profesor::asignarNotas(Alumno &alumno, int nota1, int nota2, int nota3)
{
    int alumnos = this->alumnos.size(), i = 0;
    bool found = false;

    while(!found && i < alumnos)
    {

        if(this->alumnos[i].equals(alumno))
        {
            found = true;
            this->alumnos[i].Alumno::setNotas(nota1, nota2, nota3);
        }
        i++;
    }
}

double Profesor::obtenerMedia(Alumno &alumno)
{
    return alumno.getMedia();
}

void Profesor::printAlumnos()
{
    cout << this->toString() << endl << "ALUMNOS: " <<endl << endl;

    for(int i = 0; i<(int)this->alumnos.size();i++)
    {
        cout << this->alumnos[i].toString() << "-------------------------------------------------------------" << endl;
    }
    if(alumnos.size() == 0)
        cout << "ESTE PROFESOR NO TIENE ALUMNOS." << endl;

    this->printMejorAlumno();

    cout <<"------------------------------------------------------------------------------------------------------------------------" <<endl;
}

void Profesor::printMejorAlumno()
{
    double mediaMasAlta = 0;
    Alumno *mejorAlumno = NULL;

    for(int i = 0; i<(int)this->alumnos.size();i++)
    {
        if( (this->alumnos[i].getNumNotas() == 3) && (this->alumnos[i].getMedia() >= mediaMasAlta) )
        {
            mediaMasAlta = this->alumnos[i].getMedia();
            mejorAlumno = &this->alumnos[i];

        }
    }

    if(mejorAlumno == NULL)
        cout << "No hay ningun alumno con 3 notas."<<endl;
    else
        cout << "El mejor alumno es: " << endl << mejorAlumno->toString();
}

string Profesor::toString()
{
    return "PROFESOR: "+this->Persona::toString()+"\n";
}
