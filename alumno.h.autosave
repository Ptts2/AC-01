#ifndef ALUMNO_H
#define ALUMNO_H

#include "persona.h"
#include <vector>

using namespace std;
class Alumno : public Persona
{
public:
    Alumno();
    ~Alumno();

    //Getters
    int getNumNotas();
    vector<int> getNotas();

    //SetNotas metodo sobrecargado (puede tener de 1 a 3 notas)
    void setNotas(int nota1);
    void setNotas(int nota1, int nota2);
    void setNotas(int nota1, int nota2, int nota3);

private:
    vector<int> notas;
};

#endif // ALUMNO_H
