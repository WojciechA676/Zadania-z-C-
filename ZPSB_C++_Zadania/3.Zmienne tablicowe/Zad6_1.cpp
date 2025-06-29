/*
Zadanie 1 - Obliczanie średniej wartości elementów w tablicy jednowymiarowej
Napisz program, który wczyta od użytkownika pięć liczb całkowitych i zapisze je do tablicy. Następnie program obliczy średnią tych liczb i wyświetli wynik.

Kroki do wykonania:
Program wczytuje pięć liczb całkowitych od użytkownika i zapisuje je w tablicy jednowymiarowej.
Program przechodzi przez wszystkie elementy tablicy, sumując ich wartości.
Po obliczeniu sumy program dzieli ją przez liczbę elementów, aby uzyskać średnią.
Na końcu program wyświetla wynik obliczonej średniej.

Wynik działania programu:

Podaj liczbe nr 1: 1
Podaj liczbe nr 2: 2
Podaj liczbe nr 3: 3
Podaj liczbe nr 4: 4
Podaj liczbe nr 5: 5
Srednia liczb: 3
*/

#include <iostream>

int main() {
    const int ROZMIAR = 5;          // Stała określająca liczbę elementów
    int liczby[ROZMIAR];            // Tablica do przechowywania liczb
    int suma = 0;                   // Zmienna do sumowania liczb

    // Wczytaj 5 liczb od użytkownika
    for (int i = 0; i < ROZMIAR; i++) {
        std::cout << "Podaj liczbe nr " << (i + 1) << ": ";
        std::cin >> liczby[i];
        suma += liczby[i];          // Dodaj bieżącą liczbę do sumy
    }

    // Oblicz średnią jako wartość zmiennoprzecinkową
    double srednia = static_cast<double>(suma) / ROZMIAR;

    // Wyświetl wynik
    std::cout << "Srednia liczb: " << srednia << std::endl;

    return 0;
}



