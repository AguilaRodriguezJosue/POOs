#include <iostream>
#include "Estudiante.h"
using namespace std;

int main() {

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