/*
Zadanie 5 - Rozbudowa programu: losowanie liczb w zadanym przedziale
Rozbuduj program z poprzedniego zadania o dodatkowe funkcjonalności, które umożliwią użytkownikowi większą kontrolę nad losowaniem liczb oraz ich sprawdzaniem.

Nowe wymagania:
Użytkownik podaje, ile liczb chce wylosować.
Użytkownik określa przedział liczb (wartość początkową i końcową), z którego mają być losowane liczby.
Program losuje liczby na podstawie wprowadzonych danych i zapisuje je w tablicy.
Program działa na zasadzie gry:
Użytkownik podaje liczby, które są sprawdzane pod kątem ich obecności w tablicy.
Gra trwa, aż użytkownik trafi jedną z wylosowanych liczb.
Po trafieniu programu wyświetla, ile prób było potrzebnych do zgadnięcia liczby.

Wskazówka:

Do generowania liczb losowych w określonym przedziale możesz użyć wzoru:
losowa_liczba = poczatek + rand() % (koniec - poczatek + 1);

Wynik działania programu:
Wartosc poczatkowa: 10
Wartosc koncowa: 60
Tablica: 22, 54, 36, 28, 55, 12, 19, 49, 40, 16

Podaj liczbe: 20
Nie zgadles
Podaj liczbe: 28
Zgadles!
Zgadles za 2 razem.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Funkcja losująca tablicę liczb w zadanym przedziale
void LosujTablice(int* tab, int rozmiar, int poczatek, int koniec) {
    for (int i = 0; i < rozmiar; i++) {
        *(tab + i) = poczatek + rand() % (koniec - poczatek + 1);
    }
}

// Funkcja sprawdzająca, czy liczba znajduje się w tablicy
bool SprawdzLiczbe(int* liczba, int* tab, int rozmiar) {
    for (int i = 0; i < rozmiar; i++) {
        if (*(tab + i) == *liczba) {
            return true;
        }
    }
    return false;
}

int main() {
    srand(time(NULL));

    int ile, poczatek, koniec;

    // Dane od użytkownika
    cout << "Ile liczb chcesz wylosowac? ";
    cin >> ile;

    cout << "Podaj wartosc poczatkowa przedzialu: ";
    cin >> poczatek;

    cout << "Podaj wartosc koncowa przedzialu: ";
    cin >> koniec;

    // Tablica dynamiczna
    int* tablica = new int[ile];
    LosujTablice(tablica, ile, poczatek, koniec);

    // Pokazanie wylosowanej tablicy (dla testu)
    cout << "Tablica: ";
    for (int i = 0; i < ile; i++) {
        cout << tablica[i];
        if (i != ile - 1) cout << ", ";
    }
    cout << "\n\n";

    int liczba, proby = 0;

    // Gra
    do {
        cout << "Podaj liczbe: ";
        cin >> liczba;
        proby++;

        if (SprawdzLiczbe(&liczba, tablica, ile)) {
            cout << "Zgadles!\n";
            cout << "Zgadles za " << proby << " razem.\n";
            break;
        } else {
            cout << "Nie zgadles\n";
        }

    } while (true);

    // Zwolnienie pamięci
    delete[] tablica;

    return 0;
}
