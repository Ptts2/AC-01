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

    profesores.push_back(Profesor("Profesor", "1", "0001"));
    profesores.push_back(Profesor("Profesor", "2", "0002"));
    profesores.push_back(Profesor("Profesor", "3", "0003"));

    profesores[0].addAlumno(Alumno("Pedro", "Ramirez Campos", "0004"));
    profesores[0].addAlumno(Alumno("Angel", "Felipe Vallesteros", "0005"));
    profesores[0].addAlumno(Alumno("Francisco Jose", "Almansa Martinez", "0006"));
    profesores[1].addAlumno(Alumno("Alex", "Garcia Lopez", "0007"));
    profesores[1].addAlumno(Alumno("Felipe", "Felipe felipez", "0008"));


    profesores[0].asignarNotas(profesores[0].getAlumnos()[0], 1, 10);
    profesores[0].asignarNotas(profesores[0].getAlumnos()[1], 10, 10, 10);
    profesores[0].asignarNotas(profesores[0].getAlumnos()[2], 1);
    profesores[1].asignarNotas(profesores[1].getAlumnos()[0], 0, 0, 0);
    profesores[1].asignarNotas(profesores[1].getAlumnos()[1], 10, 10);


    for(int i = 0; i<(int)profesores.size(); i++)
        profesores[i].printAlumnos();

    bool noEncontrado = true;

    while(noEncontrado)
    {
          string DNI;
          int i = 0;
          cout << "Introduzca su DNI, por favor: " <<endl;
          cin >> DNI;

          while(noEncontrado && i <(int)profesores.size())
          {
                if(profesores[i].Persona::getDNI() == DNI)
                {
                    cout << endl;
                    profesores[i].printAlumnos();
                    noEncontrado = false;
                }
            i++;
          }
          i=0;
          int j = 0;
          while(noEncontrado && i <(int)profesores.size())
          {
              j=0;
                while(noEncontrado && j <(int)profesores[i].getAlumnos().size())
                {
                    if(profesores[i].getAlumnos()[j].Persona::getDNI() == DNI)
                    {
                        cout << endl << profesores[i].getAlumnos()[j].toString();
                        noEncontrado = false;
                    }
                    j++;
                }
            i++;
          }

          if(noEncontrado == true)
            cout << "DNI no encontrado, por favor intentelo de nuevo." <<endl << endl;

    }
}
