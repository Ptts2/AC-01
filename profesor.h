#ifndef PROFESOR_H
#define PROFESOR_H

#include "persona.h"
#include "alumno.h"
#include <vector>

using namespace std;
class Profesor : public Persona
{
public:
    Profesor();
    ~Profesor();

    void addAlumno(Alumno alumno);

    //asignarNotas metodo sobrecargado (puede asignar de 1 a 3 notas)
    void asignarNotas(Alumno alumno, int nota1);
    void asignarNotas(Alumno alumno, int nota1, int nota2);
    void asignarNotas(Alumno alumno, int nota1, int nota2, int nota3);

    //Metodo que obtiene la nota media del alumno pasado como parametro
    void obtenerMedia(Alumno alumno);

    //Metodo que imprime por pantalla la lista de alumnos,
    //incluyendo sus datos y nota media
    void getAlumnos();

    //Imprime por pantalla el alumno con mejor media entre los alumnos con 3 notas
    void getMejorAlumno();

private:

    vector<Alumno> alumnos;
};

#endif // PROFESOR_H
