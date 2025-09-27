/*

    Scrivere un programma in C++ che:
	    1.	Chieda all’utente la dimensione N di una matrice quadrata (massimo 10×10).
	    2.	Generi una matrice N×N riempiendola con numeri casuali tra 0 e 9.
	    3.	Stampi la matrice in modo leggibile.

*/


#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(NULL));

    const int DIM_MAX = 10;
    int dim;

    // 1. Input dimensione
    do {
        cout << "Inserire la dimensione della matrice (max " << DIM_MAX << "): ";
        cin >> dim;
        if (dim > DIM_MAX) {
            cout << "Errore: dimensione troppo grande. Reinserire.\n";
        }
    } while (dim > DIM_MAX);

    // 2. Creazione matrice dinamica con std::vector
    vector<vector<int>> mat(dim, vector<int>(dim));

    // 3. Riempimento casuale
    for (int i = 0; i < dim; i++) {
        for (int j = 0; j < dim; j++) {
            mat[i][j] = rand() % 10;
        }
    }

    // 4. Stampa matrice
    cout << "\nMatrice generata:\n";
    for (int i = 0; i < dim; i++) {
        for (int j = 0; j < dim; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}