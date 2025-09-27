# Esercizio 1

**Consegna:**  
Cosa stampa il seguente codice?

```cpp
int mat[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

cout << mat[1][2] << " " << mat[2][0] << endl;
```

*Risposta prevista:*


---

# Esercizio 2
Cosa stampa il seguente codice?

```cpp
int mat[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
for(int j=0; j<3; j++)
    cout << mat[1][j] << " ";
cout << endl;
```

*Risposta prevista:*


---

# Esercizio 3
Cosa stampa il seguente codice?

```cpp
int mat[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
int sum = 0;
for(int i=0; i<3; i++)
    sum += mat[i][2];
cout << sum << endl;
```

*Risposta prevista:*


---

# Esercizio 4
Cosa stampa il seguente codice?

```cpp
int mat[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
for(int i=0; i<3; i++)
    cout << mat[i][i] << " ";
cout << endl;
```

*Risposta prevista:*


---

# Esercizio 5
Cosa stampa il seguente codice?

```cpp
int arr[5] = {10, 20, 30, 40, 50};
for(int i=4; i>=0; i-=2)
    cout << arr[i] << " ";
cout << endl;
```
 
*Risposta prevista:*


---

# Esercizio 6
Cosa stampa il seguente codice?

```cpp
int mat[2][4] = {{1,2,3,4},{5,6,7,8}};
for(int i=0; i<2; i++)
    for(int j=3; j>=0; j-=2)
        cout << mat[i][j] << " ";
cout << endl;
```

*Risposta prevista:*


---

# Esercizio 7
Cosa stampa il seguente codice?

```cpp
int mat[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
for(int i=0; i<3; i++)
    cout << mat[i][2-i] << " ";
cout << endl;
```
 
*Risposta prevista:*


---

# Esercizio 8
Cosa stampa il seguente codice?

```cpp
int arr[6] = {2, 4, 6, 8, 10, 12};
for(int i=1; i<6; i+=2)
    cout << arr[i-1] + arr[i] << " ";
cout << endl;
```
  
*Risposta prevista:*


---

# Esercizio 9
Cosa stampa il seguente codice?

```cpp
int mat[2][3] = {{1,2,3},{4,5,6}};
for(int j=0; j<3; j++)
    cout << mat[0][j] * mat[1][j] << " ";
cout << endl;
```

*Risposta prevista:*
