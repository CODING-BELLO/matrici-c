/*

    Trasposta + inversione righe
    Creare la trasposta della matrice originale 3x3 in una nuova matrice matT,
    poi invertire le righe di matT (prima riga diventa ultima, seconda diventa penultima, ecc.)
    e stampare la matrice trasformata.

    Esempio    Matrice 3x3:       Trasposta + righe invertite:
                1 2 3               3 6 9
                4 5 6       --->    2 5 8
                7 8 9               1 4 7

                
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
    // TODO: invertire le righe di matT
    // TODO: stampare la matrice trasformata
    return 0;
}