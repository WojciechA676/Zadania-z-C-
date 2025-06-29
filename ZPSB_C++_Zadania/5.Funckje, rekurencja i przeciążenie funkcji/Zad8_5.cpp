/*
Zadanie 5 - Gra "Za mało, za dużo"
Napisz program, który losuje liczbę z zakresu 1-100 i pozwala użytkownikowi odgadnąć tę liczbę.
Po każdym typowaniu użytkownik otrzymuje informację, czy jego liczba jest za mała, za duża, czy
poprawna. Gra kończy się w momencie, gdy użytkownik odgadnie wylosowaną liczbę.

Wymagania:

Funkcja DuzaMala(int liczba, int wylosowanaLiczba) - przyjmuje wprowadzaną przez użytkownika liczbę oraz wylosowaną liczbę, i wypisuje odpowiedni komunikat:
''Za mało'' - jeśli podana liczba jest mniejsza od wylosowanej liczby.
''Za dużo'' - jeśli podana liczba jest większa od wylosowanej liczby.

Funkcja CheckLiczba(int liczba, int wylosowanaLiczba) - przyjmuje liczbę użytkownika i wylosowaną liczbę, zwraca wartość logiczną true lub false, wskazując, czy liczba użytkownika jest równa wylosowanej liczbie:
true - jeśli liczby są równe (użytkownik odgadł liczbę).
false - jeśli liczby są różne.

Kroki do wykonania:
Program losuje liczbę z zakresu 1-100.
W pętli, program pyta użytkownika o podanie liczby i wykorzystuje funkcję DuzaMala, aby poinformować użytkownika, czy podana liczba jest za mała, za duża, czy poprawna.
Funkcja CheckLiczba sprawdza, czy liczba jest równa wylosowanej. Jeśli tak, pętla zostaje zakończona, a program informuje o poprawnym odgadnięciu liczby.
Gra trwa, dopóki użytkownik nie odgadnie liczby.
Wskazówka: Użyj funkcji rand() do losowania liczby i srand(time(NULL)) do ustawienia ziarna generatora liczb pseudolosowych, aby każda rozgrywka była inna.

Wynik działania programu:

Podaj liczbe: 50
Za mało
Podaj liczbe: 75
Za dużo
Podaj liczbe: 60
Za mało
Podaj liczbe: 65
Gratulacje! Odgadles liczbe.
*/

#include <iostream>
#include <cstdlib>  // rand(), srand()
#include <ctime>    // time() do inicjalizacji ziarna

// Funkcja wypisująca, czy liczba użytkownika jest za mała lub za duża
void DuzaMala(int liczba, int wylosowanaLiczba) {
    if (liczba < wylosowanaLiczba) {
        std::cout << "Za malo" << std::endl;
    } else if (liczba > wylosowanaLiczba) {
        std::cout << "Za duzo" << std::endl;
    }
}

// Funkcja sprawdzająca, czy liczba jest poprawna
bool CheckLiczba(int liczba, int wylosowanaLiczba) {
    return liczba == wylosowanaLiczba;
}

int main() {
    // Inicjalizacja generatora liczb pseudolosowych
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // Losowanie liczby z przedziału 1–100
    int wylosowana = std::rand() % 100 + 1;

    int proba;

    std::cout << "Zgadnij liczbe z przedzialu 1-100!" << std::endl;

    // Pętla, która trwa aż użytkownik odgadnie liczbę
    while (true) {
        std::cout << "Podaj liczbe: ";
        std::cin >> proba;

        // Sprawdzenie, czy liczba jest poprawna
        if (CheckLiczba(proba, wylosowana)) {
            std::cout << "Gratulacje! Odgadles liczbe." << std::endl;
            break; // zakończenie gry
        } else {
            DuzaMala(proba, wylosowana); // podpowiedź: za mało / za dużo
        }
    }

    return 0;
}
