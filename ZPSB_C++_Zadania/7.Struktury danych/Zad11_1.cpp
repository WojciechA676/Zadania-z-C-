/*
Zadanie 1 - Podstawowe operacje na strukturach
Napisz program, który umożliwia pracę ze strukturami w języku C++. Program będzie przechowywał informacje o osobie w strukturze i wykonywał operacje na jej danych.

Kroki do wykonania:
Zdefiniuj strukturę Osoba, która będzie przechowywać:
imie,
nazwisko,
wiek.
Zadeklaruj zmienną typu Osoba i przypisz do niej przykładowe dane.
Wyświetl dane zapisane w strukturze.
Zmień wartość wieku osoby w strukturze.
Ponownie wyświetl zmienione dane.

Wynik działania programu:

Dane przed modyfikacją:
Imię: Jan, Nazwisko: Kowalski, Wiek: 25

Dane po modyfikacji:
Imię: Jan, Nazwisko: Kowalski, Wiek: 30
*/



#include <iostream>
#include <string>
using namespace std;

// Definicja struktury Osoba
struct Osoba {
    string imie;
    string nazwisko;
    int wiek;
};

int main() {
    // Tworzenie zmiennej typu Osoba i przypisanie przykładowych danych
    Osoba osoba;
    osoba.imie = "Jan";
    osoba.nazwisko = "Kowalski";
    osoba.wiek = 25;

    // Wyświetlenie danych przed modyfikacją
    cout << "Dane przed modyfikacja:\n";
    cout << "Imie: " << osoba.imie << ", Nazwisko: " << osoba.nazwisko << ", Wiek: " << osoba.wiek << endl;

    // Modyfikacja wieku
    osoba.wiek = 30;

    // Wyświetlenie danych po modyfikacji
    cout << "\nDane po modyfikacji:\n";
    cout << "Imie: " << osoba.imie << ", Nazwisko: " << osoba.nazwisko << ", Wiek: " << osoba.wiek << endl;

    return 0;
}



