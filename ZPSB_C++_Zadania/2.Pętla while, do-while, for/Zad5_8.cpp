/*
Zadanie 8 - Odwrócony trójkąt
Napisz program, który poprosi użytkownika o podanie szerokości oraz wysokości,
a następnie wyświetli odwrócony trójkąt z gwiazdek *. Program powinien narysować trójkąt,
gdzie szerokość podstawy odpowiada podanej szerokości, a liczba wierszy odpowiada podanej wysokości.
Gwiazdki są rozmieszczone w taki sposób, że w każdym kolejnym wierszu margines po bokach trójkąta
zwiększa się o jeden znak spacji, aż do osiągnięcia wierzchołka.

Kroki do wykonania:
Poproś użytkownika o podanie szerokości i wysokości.
Zainicjuj zmienną margin, która będzie określać liczbę spacji na początku i końcu wiersza.
Użyj zagnieżdżonej pętli for do iteracji przez wiersze i kolumny:
W każdej iteracji wiersza zwiększaj margin o 1.
Wypisz gwiazdki w zakresie od 'margin' do 'szerokosc-margin-1', a resztę wypełnij spacjami.

Wynik działania programu:
Podaj szerokosc: 10
Podaj wysokosc: 5

**********
 ******** 
  ******  
   ****   
    **    
*/

#include <iostream>

int main() {
    int szerokosc, wysokosc;

    // Wczytanie danych od użytkownika
    std::cout << "Podaj szerokosc: ";
    std::cin >> szerokosc;

    std::cout << "Podaj wysokosc: ";
    std::cin >> wysokosc;

    // Sprawdzenie poprawności danych wejściowych
    if (szerokosc < 2 || wysokosc < 1) {
        std::cout << "Blad: szerokosc musi byc >= 2, a wysokosc >= 1." << std::endl;
        return 1;
    }

    // Zmienna przechowująca ilość spacji (margines)
    int margin = 0;

    // Pętla po wierszach
    for (int i = 0; i < wysokosc; i++) {
        // Wypisz spacje na marginesie
        for (int j = 0; j < margin; j++) {
            std::cout << " ";
        }

        // Oblicz liczbę gwiazdek do narysowania w danym wierszu
        int liczbaGwiazd = szerokosc - 2 * margin;

        // Jeśli liczba gwiazdek < 1, przerywamy rysowanie
        if (liczbaGwiazd <= 0) {
            break;
        }

        // Wypisz gwiazdki
        for (int j = 0; j < liczbaGwiazd; j++) {
            std::cout << "*";
        }

        // Nowa linia po każdym wierszu
        std::cout << std::endl;

        // Zwiększamy margines (czyli liczbę spacji z lewej i prawej)
        margin++;
    }

    return 0;
}
