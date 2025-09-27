/* 

    Scrivere un programma in C++ che:
	1.	Generi internamente una matrice quadrata 9×9 di numeri casuali tra 0 e 9, successivamente
	2.	Chieda all’utente:
		    la dimensione k di una sottomatrice quadrata da estrarre (ad esempio 2×2, 3×3, ecc.);
		    la riga e la colonna di partenza (r, c) all’interno della matrice originale.
	3.	Stampi a video la sottomatrice corrispondente, partendo dalle coordinate indicate e di dimensione k × k.

    Attenzione:
	•	La sottomatrice deve rimanere all’interno dei limiti della matrice originale.
	•	Se l’utente inserisce coordinate o dimensioni non valide, il programma deve chiedere di reinserire i valori.

*/


#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(NULL));

    const int N = 9;
    int mat[N][N];

    // --- 1. Generazione matrice casuale ---
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            mat[i][j] = rand() % 10;
        }
    }

    // --- 2. Stampa della matrice ---
    cout << "Matrice 9 x 9:\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    // --- 3. Input per la sottomatrice ---
    int k, r, c;

    cout << "\nInserisci la dimensione k della sottomatrice (1–9): ";
    cin >> k;

    // Verifica che ci stia nella matrice
    do {
        cout << "Inserisci riga di partenza (0–" << N - k << "): ";
        cin >> r;
    } while (r < 0 || r > N - k);

    do {
        cout << "Inserisci colonna di partenza (0–" << N - k << "): ";
        cin >> c;
    } while (c < 0 || c > N - k);

    // --- 4. Estrazione e stampa sottomatrice ---
    cout << "\nSottomatrice " << k << " x " << k << ":\n";
    for (int i = r; i < r + k; i++) {
        for (int j = c; j < c + k; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}