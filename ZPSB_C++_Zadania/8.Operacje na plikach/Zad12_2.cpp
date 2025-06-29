/*
Zadanie 2 - Tworzenie, usuwanie i zmiana nazwy pliku
Napisz program w C++, który pozwala użytkownikowi na trzy operacje na plikach:

utworzenie nowego pustego pliku,
usunięcie istniejącego pliku,
zmianę nazwy pliku.

Kroki do wykonania:
Zapytaj użytkownika, jaką operację chce wykonać:

1 - Utworzyć nowy plik,
2 - Usunąć istniejący plik,
3 - Zmienić nazwę pliku.

Jeśli użytkownik wybierze utworzenie pliku:
Poproś o nazwę nowego pliku.
Utwórz pusty plik przy użyciu ofstream.
Zamknij plik i wyświetl komunikat o powodzeniu.
Jeśli użytkownik wybierze usunięcie pliku:
Poproś o nazwę pliku do usunięcia.
Sprawdź, czy plik istnieje.
Jeśli istnieje, usuń go za pomocą remove().
Wyświetl komunikat o powodzeniu lub błędzie.
Jeśli użytkownik wybierze zmianę nazwy pliku:
Poproś o aktualną nazwę pliku i nową nazwę.
Sprawdź, czy plik istnieje.
Jeśli istnieje, zmień jego nazwę za pomocą rename().
Wyświetl komunikat o powodzeniu lub błędzie.

Przykład działania programu:

Wybierz operację:
1 - Utwórz nowy plik
2 - Usuń plik
3 - Zmień nazwę pliku
Twój wybór: 1

Podaj nazwę nowego pliku: nowy_plik.txt

Plik 'nowy_plik.txt' został utworzony.
Wybierz operację:
1 - Utwórz nowy plik
2 - Usuń plik
3 - Zmień nazwę pliku
Twój wybór: 2

Podaj nazwę pliku do usunięcia: dane.txt

Plik 'dane.txt' został usunięty.
Wybierz operację:
1 - Utwórz nowy plik
2 - Usuń plik
3 - Zmień nazwę pliku
Twój wybór: 3

Podaj nazwę pliku do zmiany: stare_dane.txt
Podaj nową nazwę pliku: archiwum.txt

Plik został pomyślnie zmieniony na 'archiwum.txt'.
*/


#include <iostream>
#include <fstream>  // Do tworzenia plików
#include <cstdio>   // Dla remove() i rename()
#include <filesystem> // Dla sprawdzenia istnienia pliku (C++17+)

using namespace std;
namespace fs = filesystem;

void utworzPlik() {
    string nazwa;
    cout << "Podaj nazwe nowego pliku: ";
    cin >> nazwa;

    ofstream nowyPlik(nazwa);
    if (nowyPlik) {
        cout << "Plik '" << nazwa << "' zostal utworzony." << endl;
        nowyPlik.close();
    } else {
        cout << "Blad podczas tworzenia pliku." << endl;
    }
}

void usunPlik() {
    string nazwa;
    cout << "Podaj nazwe pliku do usuniecia: ";
    cin >> nazwa;

    if (fs::exists(nazwa)) {
        if (remove(nazwa.c_str()) == 0) {
            cout << "Plik '" << nazwa << "' zostal usuniety." << endl;
        } else {
            cout << "Nie udalo sie usunac pliku." << endl;
        }
    } else {
        cout << "Plik nie istnieje." << endl;
    }
}

void zmienNazwePliku() {
    string staraNazwa, nowaNazwa;
    cout << "Podaj nazwe pliku do zmiany: ";
    cin >> staraNazwa;

    cout << "Podaj nowa nazwe pliku: ";
    cin >> nowaNazwa;

    if (fs::exists(staraNazwa)) {
        if (rename(staraNazwa.c_str(), nowaNazwa.c_str()) == 0) {
            cout << "Plik zostal pomyslnie zmieniony na '" << nowaNazwa << "'." << endl;
        } else {
            cout << "Nie udalo sie zmienic nazwy pliku." << endl;
        }
    } else {
        cout << "Plik nie istnieje." << endl;
    }
}

int main() {
    int wybor;

    while (true) {
        cout << "\nWybierz operacje:\n";
        cout << "1 - Utworz nowy plik\n";
        cout << "2 - Usun plik\n";
        cout << "3 - Zmien nazwe pliku\n";
        cout << "0 - Wyjscie\n";
        cout << "Twoj wybor: ";
        cin >> wybor;

        switch (wybor) {
            case 1: utworzPlik(); break;
            case 2: usunPlik(); break;
            case 3: zmienNazwePliku(); break;
            case 0: cout << "Koniec programu.\n"; return 0;
            default: cout << "Nieprawidlowy wybor.\n"; break;
        }
    }

    return 0;
}
