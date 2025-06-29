/*
Zadanie 2 - Zamiana liczb ujemnych na zera
Napisz program, który wczyta od użytkownika pięć liczb całkowitych i zapisze je do tablicy. Następnie program zamieni wszystkie liczby ujemne na zera i wyświetli zmodyfikowaną tablicę.

Kroki do wykonania:
Program wczytuje pięć liczb całkowitych od użytkownika i zapisuje je w tablicy jednowymiarowej.
Program przechodzi przez wszystkie elementy tablicy i sprawdza, czy dana liczba jest ujemna.
Jeśli liczba jest ujemna, zostaje zastąpiona zerem.
Program wyświetla zmodyfikowaną tablicę na ekranie.

Wynik działania programu:
Wprowadź 5 liczb całkowitych:  
4  
-8  
6  
-2  
7  
Liczby ujemne zamienione na 0: 4, 0, 6, 0, 7  
*/


#include <iostream>

int main() {
    const int ROZMIAR = 5;      // Stała określająca wielkość tablicy
    int liczby[ROZMIAR];        // Tablica do przechowywania 5 liczb

    std::cout << "Wprowadz 5 liczb calkowitych:" << std::endl;

    // Wczytywanie danych do tablicy
    for (int i = 0; i < ROZMIAR; i++) {
        std::cin >> liczby[i];
    }

    // Zamiana liczb ujemnych na 0
    for (int i = 0; i < ROZMIAR; i++) {
        if (liczby[i] < 0) {
            liczby[i] = 0;
        }
    }

    // Wyświetlenie zmodyfikowanej tablicy
    std::cout << "Liczby ujemne zamienione na 0: ";
    for (int i = 0; i < ROZMIAR; i++) {
        std::cout << liczby[i];
        if (i < ROZMIAR - 1) std::cout << ", "; // przecinki między liczbami
    }

    std::cout << std::endl;
    return 0;
}
