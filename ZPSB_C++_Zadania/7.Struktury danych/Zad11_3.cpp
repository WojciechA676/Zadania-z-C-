/*
Zadanie 3 - Funkcja operująca na strukturze
Napisz program, który definiuje strukturę do przechowywania danych o samochodzie oraz funkcję, która wyświetli informacje o podanym samochodzie.

Kroki do wykonania:
Zdefiniuj strukturę Samochod, która będzie zawierać:
marka,
model,
rok_produkcji.
Napisz funkcję WyswietlDane, która przyjmie strukturę Samochod jako argument i wyświetli informacje o samochodzie.
W funkcji main():
Zainicjalizuj zmienną typu Samochod przykładowymi danymi.
Wywołaj funkcję WyswietlDane, przekazując do niej utworzoną strukturę.
Wynik działania programu:

Dane samochodu:
Marka: Toyota
Model: Corolla
Rok produkcji: 2018
*/

#include <iostream>
#include <string>
using namespace std;

// Definicja struktury Samochod
struct Samochod {
    string marka;
    string model;
    int rok_produkcji;
};

// Funkcja wyświetlająca dane samochodu
void WyswietlDane(Samochod s) {
    cout << "Dane samochodu:" << endl;
    cout << "Marka: " << s.marka << endl;
    cout << "Model: " << s.model << endl;
    cout << "Rok produkcji: " << s.rok_produkcji << endl;
}

int main() {
    // Inicjalizacja struktury przykładowymi danymi
    Samochod auto1 = {"Toyota", "Corolla", 2018};

    // Wywołanie funkcji
    WyswietlDane(auto1);

    return 0;
}
