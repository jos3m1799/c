#include <iostream>
#include <string>
using namespace std;

float calcularPromedio(float notas[], int cantidad) {
    float suma = 0;
    for (int i = 0; i < cantidad; i++) {
        suma += notas[i];
    }
    return suma / cantidad;
}

string determinarEstado(float promedio) {
    if (promedio >= 61) {
        return "Aprobado";
    } else {
        return "Reprobado";
    }
}

string obtenerCategoria(float promedio) {
    if (promedio >= 85 && promedio <= 100) {
        return "Excelente";
    } else if (promedio >= 70) {
        return "Bueno";
    } else if (promedio >= 61) {
        return "Regular";
    } else {
        return "Deficiente";
    }
}

void mostrarResultado(string nombre, string curso, float promedio, string estado, string categoria) {
    cout << "\n----- RESULTADO FINAL -----\n";
    cout << "Nombre: " << nombre << endl;
    cout << "Curso: " << curso << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Estado: " << estado << endl;
    cout << "Categoria: " << categoria << endl;
    cout << "\nPrograma creado por Jose Argueta" << endl;
}

int main() {
    string nombre, curso;
    int cantidad;

    cout << "Ingrese el nombre del estudiante: ";
    getline(cin, nombre);

    cout << "Ingrese el curso: ";
    getline(cin, curso);

    cout << "Ingrese la cantidad de notas: ";
    cin >> cantidad;

    float notas[cantidad];

    for (int i = 0; i < cantidad; i++) {
        cout << "Ingrese la nota " << i + 1 << ": ";
        cin >> notas[i];
    }

    float promedio = calcularPromedio(notas, cantidad);
    string estado = determinarEstado(promedio);
    string categoria = obtenerCategoria(promedio);

    mostrarResultado(nombre, curso, promedio, estado, categoria);

    return 0;
}