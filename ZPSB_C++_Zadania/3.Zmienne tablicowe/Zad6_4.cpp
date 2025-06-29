/*
Zadanie 4 - Obliczanie sumy liczb parzystych w tablicy
Napisz program, który pozwoli użytkownikowi wprowadzić 10 liczb całkowitych do tablicy jednowymiarowej, a następnie wyświetli liczby parzyste po przecinku i obliczy sumę wszystkich liczb parzystych.

Kroki do wykonania:
Użytkownik wprowadza liczby całkowite.
Program przeszukuje tablicę, sprawdzając, które liczby są parzyste, wyświetla je i dodaje do sumy.
Program wyświetla liczby parzyste po przecinku.
Program wyświetla sumę wszystkich liczb parzystych.

Wynik działania programu:

Podaj liczbe nr 1: 1
Podaj liczbe nr 2: 2
Podaj liczbe nr 3: 3
Podaj liczbe nr 4: 4
Podaj liczbe nr 5: 5
Podaj liczbe nr 6: 6
Podaj liczbe nr 7: 7
Podaj liczbe nr 8: 8
Podaj liczbe nr 9: 9
Podaj liczbe nr 10: 10
Liczby parzyste: 2, 4, 6, 8, 10, 
Suma liczb parzystych: 30
*/

#include <iostream>

int main() {
    const int ROZMIAR = 10;        // Liczba elementów w tablicy
    int liczby[ROZMIAR];           // Tablica do przechowywania 10 liczb
    int sumaParzystych = 0;        // Zmienna do sumowania liczb parzystych

    // Wczytywanie danych od użytkownika
    for (int i = 0; i < ROZMIAR; i++) {
        std::cout << "Podaj liczbe nr " << (i + 1) << ": ";
        std::cin >> liczby[i];
    }

    // Wypisanie liczb parzystych
    std::cout << "Liczby parzyste: ";
    for (int i = 0; i < ROZMIAR; i++) {
        if (liczby[i] % 2 == 0) {                // Sprawdzenie parzystości
            std::cout << liczby[i] << ", ";      // Wypisanie liczby
            sumaParzystych += liczby[i];         // Dodanie do sumy
        }
    }

    // Wyświetlenie sumy liczb parzystych
    std::cout << std::endl << "Suma liczb parzystych: " << sumaParzystych << std::endl;

    return 0;
}
