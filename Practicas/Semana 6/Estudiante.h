#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include <iostream>
#include <string>
using namespace std;

class Estudiante {
private:
    string nombre;
    string matricula;
    float promedio;

public:
    // Constructor
    Estudiante(string nombre, string matricula, float promedio);

    // Metodos
    void mostrarDatos();
    void aprobo();
};

#endif