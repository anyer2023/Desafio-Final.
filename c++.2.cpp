#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    srand(time(0)); // seed for random number generator

    int numeros[4][5];
    int sumaFila[4] = {0}, sumaColumna[5] = {0}, sumaTotal = 0;

    // generate 20 random numbers between 0 and 9 and store them in the array
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            numeros[i][j] = rand() % 10;
            sumaFila[i] += numeros[i][j];
            sumaColumna[j] += numeros[i][j];
            sumaTotal += numeros[i][j];
        }
    }

    // print the array with sums of rows and columns
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            cout << numeros[i][j] << "\t";
        }
        cout << "Suma de fila: " << sumaFila[i] << endl;
    }

    cout << "\t";
    for (int j = 0; j < 5; j++) {
        cout << sumaColumna[j] << "\t";
    }
    cout << "Suma total: " << sumaTotal << endl;

    return 0;
}
