/*

    Scrivere un programma che, a partire da una matrice 9×9 già generata, chieda all’utente:
	1.	la dimensione k di una sottomatrice quadrata da estrarre,
	2.	le coordinate (riga, colonna) della cella di partenza.

    Il programma deve verificare che la sottomatrice scelta rientri nei limiti della matrice originale 
    e stampare a video solo la porzione selezionata.

    

    Esempio    Matrice 5x5:           Sottomatrice 3x3 da (r=1, c=2):

                1 4 7 2 5              0 6 9
                3 8 0 6 9              1 7 4
                5 2 1 7 4     --->     8 0 2
                6 3 8 0 2
                9 7 4 3 1


*/


#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(NULL));  // inizializza il generatore casuale

    const int N = 9;
    int mat[N][N];

    // Riempimento matrice con numeri casuali da 0 a 9
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            mat[i][j] = rand() % 10;  // numeri 0-9
        }
    }

    // Stampa matrice
    cout << "Matrice 9 x 9 generata:\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }


    //TODO: Esercizio

    return 0;
}