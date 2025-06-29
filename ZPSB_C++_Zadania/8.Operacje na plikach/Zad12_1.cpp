/*
Zadanie 1 - Podstawowe operacje na plikach w C++
Napisz program w C++, który wykonuje podstawowe operacje na plikach. Program będzie odczytywał dane z pliku i wyświetlał je na ekranie.

Kroki do wykonania:
Stwórz plik tekstowy dane.txt, który będzie zawierał następujące dane:
Jan Kowalski 25
Anna Nowak 30
Piotr Zieliński 28
Zdefiniuj zmienne do przechowywania danych odczytanych z pliku: imie, nazwisko, wiek.
Otwórz plik dane.txt w trybie odczytu.
Odczytaj dane z pliku i zapisz je do zmiennych.
Wyświetl dane na ekranie.

Wynik działania programu:

Imię: Jan, Nazwisko: Kowalski, Wiek: 25
Imię: Anna, Nazwisko: Nowak, Wiek: 30
Imię: Piotr, Nazwisko: Zieliński, Wiek: 28
*/

#include <iostream>
#include <fstream>  // Do operacji na plikach
#include <string>   // Do zmiennych typu string

using namespace std;

int main() {
    // Zmienne do przechowywania danych z pliku
    string imie, nazwisko;
    int wiek;

    // Otwieranie pliku w trybie odczytu
    ifstream plik("dane.txt");

    // Sprawdzenie, czy plik został otwarty poprawnie
    if (!plik.is_open()) {
        cout << "Nie mozna otworzyc pliku!" << endl;
        return 1;
    }

    // Odczyt danych z pliku i ich wyświetlanie
    while (plik >> imie >> nazwisko >> wiek) {
        cout << "Imie: " << imie << ", Nazwisko: " << nazwisko << ", Wiek: " << wiek << endl;
    }

    // Zamknięcie pliku
    plik.close();

    return 0;
}
