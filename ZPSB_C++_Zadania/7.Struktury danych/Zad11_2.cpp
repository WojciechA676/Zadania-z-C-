/*
Zadanie 2 - Tablica struktur
Napisz program, który umożliwia przechowywanie i wyświetlanie danych kilku osób przy użyciu tablicy struktur.

Kroki do wykonania:
Zdefiniuj strukturę Osoba, która będzie przechowywać:

imie,
nazwisko,
wiek.
Zadeklaruj tablicę Osoba o rozmiarze 3, aby przechować dane trzech osób.
Wprowadź przykładowe dane dla każdej osoby.
Wyświetl wszystkie dane przechowywane w tablicy.

Wynik działania programu:

Dane zapisane w tablicy struktur:
1. Imię: Jan, Nazwisko: Kowalski, Wiek: 25
2. Imię: Anna, Nazwisko: Nowak, Wiek: 30
3. Imię: Piotr, Nazwisko: Wiśniewski, Wiek: 40
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
    // Tablica struktur Osoba o rozmiarze 3
    Osoba osoby[3];

    // Wprowadzenie przykładowych danych
    osoby[0] = {"Jan", "Kowalski", 25};
    osoby[1] = {"Anna", "Nowak", 30};
    osoby[2] = {"Piotr", "Wisniewski", 40};

    // Wyświetlenie danych
    cout << "Dane zapisane w tablicy struktur:\n";
    for (int i = 0; i < 3; i++) {
        cout << i + 1 << ". Imie: " << osoby[i].imie
             << ", Nazwisko: " << osoby[i].nazwisko
             << ", Wiek: " << osoby[i].wiek << endl;
    }

    return 0;
}
