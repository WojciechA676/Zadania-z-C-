/*
Zadanie 7 - Rysowanie dywanu
Napisz program, który poprosi użytkownika o podanie szerokości i wysokości dywanu, a następnie wyświetli wzór dywanu, który:

Ma górną i dolną krawędź złożoną z myślników -.
Ma boczne krawędzie (pierwsza i ostatnia kolumna) złożone z pionowych kresek |.
Wnętrze dywanu składa się z naprzemiennych znaków # i *, tworzących szachownicę.
Program powinien użyć zagnieżdżonej pętli for, aby narysować dywan zgodnie z podanymi zasadami.
Kroki do wykonania:
Poproś użytkownika o podanie szerokości i wysokości.
Użyj zagnieżdżonej pętli for, aby iterować przez wiersze i kolumny dywanu:
Pierwszy i ostatni wiersz powinny być wypełnione myślnikami -.
Pierwsza i ostatnia kolumna wewnętrznych wierszy powinny być pionowymi kreskami |.
Wnętrze wierszy tworzy naprzemienne znaki # i * na podstawie sumy indeksów wiersza i kolumny.

Wynik działania programu:
Podaj szerokosc: 10
Podaj wysokosc: 5

----------
|#*#*#*#*|
|*#*#*#*#|
|#*#*#*#*|
----------
*/

#include <iostream>

int main() {
    int szerokosc, wysokosc;

    // Poproś użytkownika o wprowadzenie wymiarów dywanu
    std::cout << "Podaj szerokosc: ";
    std::cin >> szerokosc;

    std::cout << "Podaj wysokosc: ";
    std::cin >> wysokosc;

    // Sprawdzenie poprawności danych
    if (szerokosc < 2 || wysokosc < 2) {
        std::cout << "Blad: szerokosc i wysokosc musza byc co najmniej 2." << std::endl;
        return 1;
    }

    // Zagnieżdżona pętla for – przechodzimy przez każdy wiersz i kolumnę
    for (int i = 0; i < wysokosc; i++) {
        for (int j = 0; j < szerokosc; j++) {
            // Górna i dolna krawędź – myślniki
            if (i == 0 || i == wysokosc - 1) {
                std::cout << "-";
            }
            // Boczne krawędzie – pionowe kreski
            else if (j == 0 || j == szerokosc - 1) {
                std::cout << "|";
            }
            // Wnętrze – szachownica z # i *
            else {
                if ((i + j) % 2 == 0) {
                    std::cout << "#";
                } else {
                    std::cout << "*";
                }
            }
        }
        std::cout << std::endl; // Nowa linia po każdym wierszu
    }

    return 0;
}
