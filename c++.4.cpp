#include <iostream>
#include <iomanip>
using namespace std;

const int NUM_ESTUDIANTES = 10;
const int NUM_CORTES = 3;

void ingresar_estudiantes(string estudiantes[NUM_ESTUDIANTES]);
void ingresar_notas(double notas[NUM_ESTUDIANTES][NUM_CORTES]);
void calcular_nota_final(double notas[NUM_ESTUDIANTES][NUM_CORTES], double nota_final[NUM_ESTUDIANTES]);
void mostrar_resultados(string estudiantes[NUM_ESTUDIANTES], double notas[NUM_ESTUDIANTES][NUM_CORTES], double nota_final[NUM_ESTUDIANTES]);

int main() {
    string estudiantes[NUM_ESTUDIANTES];
    double notas[NUM_ESTUDIANTES][NUM_CORTES];
    double nota_final[NUM_ESTUDIANTES];

    ingresar_estudiantes(estudiantes);
    ingresar_notas(notas);
    calcular_nota_final(notas, nota_final);
    mostrar_resultados(estudiantes, notas, nota_final);

    return 0;
}

void ingresar_estudiantes(string estudiantes[NUM_ESTUDIANTES]) {
    for (int i = 0; i < NUM_ESTUDIANTES; i++) {
        cout << "Ingrese el nombre del estudiante " << i+1 << ": ";
        cin >> estudiantes[i];
    }
}

void ingresar_notas(double notas[NUM_ESTUDIANTES][NUM_CORTES]) {
    for (int i = 0; i < NUM_ESTUDIANTES; i++) {
        cout << "Ingrese las notas del estudiante " << i+1 << ":" << endl;
        for (int j = 0; j < NUM_CORTES; j++) {
            cout << "Nota " << j+1 << ": ";
            cin >> notas[i][j];
        }
    }
}

void calcular_nota_final(double notas[NUM_ESTUDIANTES][NUM_CORTES], double nota_final[NUM_ESTUDIANTES]) {
    for (int i = 0; i < NUM_ESTUDIANTES; i++) {
        nota_final[i] = (notas[i][0] + notas[i][1] + notas[i][2]) / 3;
    }
}

void mostrar_resultados(string estudiantes[NUM_ESTUDIANTES], double notas[NUM_ESTUDIANTES][NUM_CORTES], double nota_final[NUM_ESTUDIANTES]) {
    cout << "Estudiantes" << setw(15) << "Nota 1er Corte" << setw(15) << "Nota 2do Corte" << setw(15) << "Nota 3er Corte" << setw(15) << "Nota Final" << endl;
    for (int i = 0; i < NUM_ESTUDIANTES; i++) {
        cout << estudiantes[i] << setw(15) << notas[i][0] << setw(15) << notas[i][1] << setw(15) << notas[i][2] << setw(15) << nota_final[i] << endl;
    }
}
