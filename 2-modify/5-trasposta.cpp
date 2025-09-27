/*

    Trasposta in nuova matrice
    Creare una nuova matrice matT[3][3] e copiare dentro la trasposta della matrice originale.
    Stampare sia la matrice originale sia quella trasposta.

    Esempio    Matrice 3x3:       Trasposta 3x3:
               1 2 3               1 4 7
               4 5 6       --->    2 5 8
               7 8 9               3 6 9

*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(NULL));
    const int DIM = 3;
    int mat[DIM][DIM];
    int matT[DIM][DIM];  // matrice trasposta

    // Generazione matrice 3x3 casuale 0-9
    for (int i = 0; i < DIM; i++)
        for (int j = 0; j < DIM; j++)
            mat[i][j] = rand() % 10;

    // TODO: creare la trasposta in matT
    // TODO: stampare sia la matrice originale sia la trasposta
    return 0;
}