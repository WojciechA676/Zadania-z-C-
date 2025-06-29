/*
Zadanie 3 - Operacje na wskaźnikach i tablicach
Napisz program, który wykorzystuje wskaźniki do manipulacji tablicą oraz obliczania sumy
elementów w tablicy za pomocą dedykowanej funkcji. Program powinien umożliwiać użytkownikowi
zmianę wartości elementów tablicy i ponowne obliczenie sumy.

Kroki do wykonania:
Zainicjuj tablicę liczb całkowitych z kilkoma wartościami.
Oblicz sumę elementów tablicy, wywołując funkcję ObliczSume.
Wyświetl sumę elementów tablicy.
Umożliw użytkownikowi zmianę wartości elementów tablicy.
Ponownie oblicz sumę elementów tablicy przy użyciu funkcji ObliczSume.
Wyświetl zmodyfikowaną tablicę oraz nową sumę.

Wynik działania programu:

Suma elementow tablicy: 50
Podaj nowa wartosc dla elementu 0: 10
Podaj nowa wartosc dla elementu 1: 20
Podaj nowa wartosc dla elementu 2: 30
Podaj nowa wartosc dla elementu 3: 40
Nowa tablica:
10 20 30 40 
Nowa suma elementow tablicy: 100
*/

#include <iostream>
using namespace std;

// Funkcja obliczająca sumę elementów tablicy przez wskaźnik
int ObliczSume(int* tab, int rozmiar) {
    int suma = 0;
    for (int i = 0; i < rozmiar; i++) {
        suma += *(tab + i);
    }
    return suma;
}

int main() {
    const int ROZMIAR = 4;
    int tablica[ROZMIAR] = {5, 15, 10, 20};

    // Obliczenie i wyświetlenie początkowej sumy
    int suma = ObliczSume(tablica, ROZMIAR);
    cout << "Suma elementow tablicy: " << suma << endl;

    // Modyfikacja elementów tablicy przez użytkownika
    for (int i = 0; i < ROZMIAR; i++) {
        cout << "Podaj nowa wartosc dla elementu " << i << ": ";
        cin >> *(tablica + i); // wskaźnikowa modyfikacja
    }

    // Wyświetlenie zmodyfikowanej tablicy
    cout << "Nowa tablica:\n";
    for (int i = 0; i < ROZMIAR; i++) {
        cout << *(tablica + i) << " ";
    }
    cout << endl;

    // Obliczenie i wyświetlenie nowej sumy
    suma = ObliczSume(tablica, ROZMIAR);
    cout << "Nowa suma elementow tablicy: " << suma << endl;

    return 0;
}
