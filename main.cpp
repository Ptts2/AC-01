#include <iostream>
#include <string>
#include <vector>
#include "persona.h"
#include "profesor.h"
#include "alumno.h"

using namespace std;

void Calificando();

int main()
{
    Calificando();
    return 0;
}

void Calificando()
{

    vector<Profesor> profesores;
    vector<Alumno> alumnos;

    profesores.push_back(Profesor("Profesor", "1", "0001"));
    profesores.push_back(Profesor("Profesor", "2", "0002"));
    profesores.push_back(Profesor("Profesor", "3", "0003"));

    alumnos.push_back(Alumno("Pedro", "Ramirez", "0004"));
    alumnos.push_back(Alumno("Angel", "Felipe Vallesteros", "0005"));
    alumnos.push_back(Alumno("Francisco Jose", "Almansa Martinez", "0006"));
    alumnos.push_back(Alumno("Alex", "Garcia Lopez", "0007"));
    alumnos.push_back(Alumno("Felipe", "Felipe felipe", "0008"));

    profesores[0].addAlumno(alumnos[0]);
    profesores[0].addAlumno(alumnos[1]);
    profesores[0].addAlumno(alumnos[2]);
    profesores[1].addAlumno(alumnos[3]);
    profesores[1].addAlumno(alumnos[4]);

    string nombre = alumnos[0].getDNI();

    profesores[0].asignarNotas(alumnos[0], 1, 10);
    profesores[0].asignarNotas(alumnos[1], 10, 10, 10);
    profesores[0].asignarNotas(alumnos[2], 1);
    profesores[1].asignarNotas(alumnos[3], 0, 0, 0);
    profesores[1].asignarNotas(alumnos[4], 10, 10);


    for(int i = 0; i<(int)profesores.size(); i++)
        profesores[i].printAlumnos();
}
