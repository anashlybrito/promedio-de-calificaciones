// promedio de calificaciones.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <iomanip>
using namespace std;


int main() {
    int n;

    cout << "ingresar cantidad de estudiantes: ";
    cin >> n;

    // parte de arriba de la tabla
    cout << endl;

    cout << left << setw (15) << "Estudiante"
        << setw(8) << "Nota1"
        << setw(8) << "Nota2"
        << setw(8) << "Nota3"
        << setw(8) << "Nota4"
        << setw(10) << "Promedio"
        << setw(10) << "Estatus" << endl;

    for (int i = 1; i <= n; i++) {
        string nombre, estatus;
        float nota1, nota2, nota3, nota4, promedio;
        

        cout << "Ingresar nombre del estudiante: ";
        cin >> nombre;

        cout << "Nota 1: ";
        cin >> nota1;
        cout << "Nota 2: ";
        cin >> nota2;
        cout << "Nota 3: ";
        cin >> nota3;
        cout << "Nota 4: ";
        cin >> nota4;

        promedio = (nota1 + nota2 + nota3 + nota4) / 4;

        if (promedio >= 70) {
            estatus = "Aprobado";
        }
        else {
            estatus = "Reprobado";
        }

        // Mostrar datos en la  tabla
        cout << left << setw(15) << nombre
            << setw(8) << nota1
            << setw(8) << nota2
            << setw(8) << nota3
            << setw(8) << nota4
            << setw(10) << promedio
            << setw(10) << estatus << endl;
    }

    return 0;
}




