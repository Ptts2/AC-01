#ifndef ALUMNO_H
#define ALUMNO_H

#include "persona.h"
#include <vector>
#include <iostream>

using namespace std;
class Alumno : public Persona
{
public:
    Alumno();
    Alumno(string nombre, string apellidos, string DNI);
    ~Alumno();

    //Getters
    int getNumNotas();
    vector<int> getNotas();

    //SetNotas metodo sobrecargado (puede tener de 1 a 3 notas)
    void setNotas(int nota1);
    void setNotas(int nota1, int nota2);
    void setNotas(int nota1, int nota2, int nota3);

    //Metodo que devuelve la media de sus notas
    double getMedia();

    //Metodo que devuelve true si es igual y falso si no
    bool equals(Alumno alumno);

    //Devuelve los datos del alumno como un string
    string toString();

private:
    vector<int> notas;
};

#endif // ALUMNO_H
