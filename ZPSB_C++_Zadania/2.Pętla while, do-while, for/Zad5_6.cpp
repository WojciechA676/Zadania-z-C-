/*
Zadanie 6 - Rysowanie ramki prostokąta z gwiazdek
Napisz program, który poprosi użytkownika o podanie szerokości i wysokości prostokąta,
a następnie wyświetli ramkę prostokąta utworzoną z gwiazdek *.
Program powinien użyć zagnieżdżonej pętli for, aby narysować ramkę, gdzie:

Pierwszy i ostatni wiersz będą całkowicie wypełnione gwiazdkami.

Pierwsza i ostatnia kolumna będą całkowicie wypełnione gwiazdkami.

W pozostałych przypadkach, czyli środek, będzie pusty (spacje).

Wynik działania programu:

Podaj szerokosc: 10
Podaj wysokosc: 5

**********
*        *
*        *
*        *
**********
*/

#include <iostream>

int main() {
    int szerokosc, wysokosc;

    // Poproś użytkownika o wprowadzenie wymiarów prostokąta
    std::cout << "Podaj szerokosc: ";
    std::cin >> szerokosc;

    std::cout << "Podaj wysokosc: ";
    std::cin >> wysokosc;

    // Sprawdzenie poprawności danych
    if (szerokosc < 2 || wysokosc < 2) {
        std::cout << "Blad: szerokosc i wysokosc musza byc co najmniej 2." << std::endl;
        return 1;
    }

    // Zagnieżdżona pętla do rysowania prostokąta
    for (int wiersz = 0; wiersz < wysokosc; wiersz++) {
        for (int kolumna = 0; kolumna < szerokosc; kolumna++) {
            // Warunki rysujące gwiazdki na krawędziach
            if (wiersz == 0 || wiersz == wysokosc - 1 || kolumna == 0 || kolumna == szerokosc - 1) {
                std::cout << "*";
            } else {
                std::cout << " "; // W środku wstawiamy spację
            }
        }
        std::cout << std::endl; // Przejście do nowej linii po każdym wierszu
    }

    return 0;
}
