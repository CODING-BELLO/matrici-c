/*

    Scrivere un programma in C++ che:
	1.	Generi una matrice quadrata 9×9 contenente numeri casuali compresi tra 0 e 9.
	2.	Stampi la matrice a video in forma tabellare.

    Suggerimento: usare rand() e srand(time(NULL)) per generare numeri casuali.

*/

#include <iostream>
#include <cstdlib>   // per rand() e srand()
#include <ctime>     // per time()

using namespace std;

int main() {
    srand(time(NULL));   // inizializza il generatore random

    const int N = 9;
    int mat[N][N];

    // --- 1. Riempimento matrice ---
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            mat[i][j] = rand() % 10; // valori da 0 a 9
        }
    }

    // --- 2. Stampa matrice ---
    cout << "Matrice 9 x 9:\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}