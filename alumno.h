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
    vector<double> getNotas();

    //SetNotas metodo sobrecargado (puede tener de 1 a 3 notas)
    void setNotas(double nota1);
    void setNotas(double nota1, double nota2);
    void setNotas(double nota1, double nota2, double nota3);

    //Metodo que devuelve la media de sus notas
    double getMedia();

    //Metodo que devuelve true si es igual y falso si no
    bool equals(Alumno alumno);

    //Devuelve los datos del alumno como un string
    string toString();

private:
    vector<double> notas;
};

#endif // ALUMNO_H
