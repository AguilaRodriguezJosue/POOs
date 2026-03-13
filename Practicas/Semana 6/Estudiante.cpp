#include "Estudiante.h"

// Constructor
Estudiante::Estudiante(string nombre, string matricula, float promedio) {
    this->nombre = nombre;
    this->matricula = matricula;
    this->promedio = promedio;
}

// Metodo mostrar datos
void Estudiante::mostrarDatos() {
    cout << "Nombre: " << nombre << endl;
    cout << "Matricula: " << matricula << endl;
    cout << "Promedio: " << promedio << endl;
}

// Metodo aprobar
void Estudiante::aprobo() {
    if (promedio >= 70) {
        cout << "El estudiante APROBO" << endl;
    } else {
        cout << "El estudiante NO aprobo" << endl;
    }
}