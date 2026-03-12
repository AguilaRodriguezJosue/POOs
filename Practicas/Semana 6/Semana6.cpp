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
    Estudiante(string nombre, string matricula, float promedio) {
        this->nombre = nombre;
        this->matricula = matricula;
        this->promedio = promedio;
    }

    // Metodo para mostrar datos
    void mostrarDatos() {
        cout << "Nombre: " << nombre << endl;
        cout << "Matricula: " << matricula << endl;
        cout << "Promedio: " << promedio << endl;
    }

    // Metodo para saber si aprobo
    void aprobo() {
        if (promedio >= 70) {
            cout << "El estudiante APROBO" << endl;
        } else {
            cout << "El estudiante NO aprobo" << endl;
        }
    }
};

int main() {

    // Instanciar objetos
    Estudiante e1("Juan Perez", "2023001", 85);
    Estudiante e2("Maria Lopez", "2023002", 65);

    cout << "Estudiante 1:" << endl;
    e1.mostrarDatos();
    e1.aprobo();

    cout << endl;

    cout << "Estudiante 2:" << endl;
    e2.mostrarDatos();
    e2.aprobo();

    return 0;
}