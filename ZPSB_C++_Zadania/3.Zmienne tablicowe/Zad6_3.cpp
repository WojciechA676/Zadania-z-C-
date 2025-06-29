/*
Zadanie 3 - Znajdowanie najmniejszej liczby w tablicy
Napisz program w C++, który wczyta od użytkownika 5 liczb całkowitych do tablicy jednowymiarowej. Następnie program powinien przeanalizować tablicę i znaleźć najmniejszą liczbę. Na koniec program wyświetli najmniejszą liczbę znalezioną w tablicy.

Kroki do wykonania:
Program wczytuje 10 liczb całkowitych od użytkownika i zapisuje je w tablicy.
Program analizuje zawartość tablicy, porównując elementy, aby znaleźć najmniejszą liczbę.
Na końcu program wyświetla najmniejszą liczbę.

Wynik działania programu:

Podaj 10 liczb calkowitych:
Podaj liczbe nr 1: 7
Podaj liczbe nr 2: 3
Podaj liczbe nr 3: 15
Podaj liczbe nr 4: 9
Podaj liczbe nr 5: 2
Podaj liczbe nr 6: 14
Podaj liczbe nr 7: 5
Podaj liczbe nr 8: 6
Podaj liczbe nr 9: 8
Podaj liczbe nr 10: 1
Najmniejsza liczba to: 1
*/

#include <iostream>

int main() {
    const int ROZMIAR = 10;      // Liczba elementów w tablicy
    int liczby[ROZMIAR];         // Tablica do przechowywania 10 liczb

    std::cout << "Podaj 10 liczb calkowitych:" << std::endl;

    // Wczytywanie danych do tablicy
    for (int i = 0; i < ROZMIAR; i++) {
        std::cout << "Podaj liczbe nr " << (i + 1) << ": ";
        std::cin >> liczby[i];
    }

    // Inicjalizacja najmniejszej liczby jako pierwszy element tablicy
    int najmniejsza = liczby[0];

    // Szukanie najmniejszej liczby w tablicy
    for (int i = 1; i < ROZMIAR; i++) {
        if (liczby[i] < najmniejsza) {
            najmniejsza = liczby[i]; // Zaktualizuj najmniejszą liczbę
        }
    }

    // Wyświetlenie wyniku
    std::cout << "Najmniejsza liczba to: " << najmniejsza << std::endl;

    return 0;
}
