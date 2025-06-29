/*
Zadanie 3 - Tworzenie pliku i dopisywanie danych
Napisz program w C++, który tworzy plik tekstowy, zapisuje do niego dane o osobach, a następnie umożliwia dopisanie nowych danych.

Kroki do wykonania:
Sprawdź, czy plik dane.txt istnieje.
Jeśli nie istnieje, utwórz go i zapisz przykładowe dane:
Jan Kowalski 25
Anna Nowak 30
Jeśli plik istnieje, dopisz do niego kolejne osoby.
Zdefiniuj strukturę Osoba, która będzie przechowywać: imie, nazwisko, wiek.
Zapytaj użytkownika, czy chce dopisać nową osobę do pliku.
Jeśli tak, pobierz dane od użytkownika i dopisz je do pliku.
Wyświetl zawartość pliku po dopisaniu nowych danych.

Przykład działania programu:

Plik dane.txt nie istnieje. Tworzenie pliku i zapis przykładowych danych...
Czy chcesz dodać nową osobę? (t/n): t
Podaj imię: Piotr
Podaj nazwisko: Zieliński
Podaj wiek: 28

Dane w pliku po dopisaniu:
Imię: Jan, Nazwisko: Kowalski, Wiek: 25
Imię: Anna, Nazwisko: Nowak, Wiek: 30
Imię: Piotr, Nazwisko: Zieliński, Wiek: 28
*/

#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>

using namespace std;
namespace fs = filesystem;

// Struktura przechowująca dane o osobie
struct Osoba {
    string imie;
    string nazwisko;
    int wiek;
};

// Funkcja zapisująca dane osoby do pliku
void ZapiszDoPliku(const Osoba& osoba, const string& nazwaPliku) {
    ofstream plik(nazwaPliku, ios::app); // otwórz w trybie dopisywania
    if (plik.is_open()) {
        plik << osoba.imie << " " << osoba.nazwisko << " " << osoba.wiek << endl;
        plik.close();
    } else {
        cout << "Nie mozna otworzyc pliku do zapisu." << endl;
    }
}

// Funkcja odczytująca i wyświetlająca dane z pliku
void WyswietlZPliku(const string& nazwaPliku) {
    ifstream plik(nazwaPliku);
    Osoba osoba;
    cout << "\nDane w pliku po dopisaniu:\n";
    while (plik >> osoba.imie >> osoba.nazwisko >> osoba.wiek) {
        cout << "Imie: " << osoba.imie
             << ", Nazwisko: " << osoba.nazwisko
             << ", Wiek: " << osoba.wiek << endl;
    }
    plik.close();
}

int main() {
    const string nazwaPliku = "dane.txt";

    // Sprawdzenie czy plik istnieje
    if (!fs::exists(nazwaPliku)) {
        cout << "Plik " << nazwaPliku << " nie istnieje. Tworzenie pliku i zapis przykladowych danych..." << endl;
        ZapiszDoPliku({"Jan", "Kowalski", 25}, nazwaPliku);
        ZapiszDoPliku({"Anna", "Nowak", 30}, nazwaPliku);
    }

    char odpowiedz;
    cout << "Czy chcesz dodac nowa osobe? (t/n): ";
    cin >> odpowiedz;

    if (odpowiedz == 't' || odpowiedz == 'T') {
        Osoba nowa;
        cout << "Podaj imie: ";
        cin >> nowa.imie;
        cout << "Podaj nazwisko: ";
        cin >> nowa.nazwisko;
        cout << "Podaj wiek: ";
        cin >> nowa.wiek;
        ZapiszDoPliku(nowa, nazwaPliku);
    }

    WyswietlZPliku(nazwaPliku);

    return 0;
}
