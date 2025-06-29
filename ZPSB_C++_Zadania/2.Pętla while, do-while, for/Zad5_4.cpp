/*
Zadanie 4 - Liczby nieparzyste w macierzy
Napisz program, który poprosi użytkownika o podanie liczby wierszy i kolumn, a następnie wypełni
macierz o podanych wymiarach liczbami nieparzystymi w kolejności rosnącej, zaczynając od 1.
Każda liczba nieparzysta powinna być umieszczona w kolejnej pozycji macierzy, a po zakończeniu
wypełniania program powinien wypisać zawartość macierzy w odpowiednim formacie.

Kroki do wykonania:
Poproś użytkownika o podanie liczby wierszy i kolumn.
Użyj zagnieżdżonej pętli for, aby przejść przez wiersze i kolumny.
Wypełniaj macierz kolejnymi liczbami nieparzystymi, zaczynając od 1.
Wypisz zawartość macierzy w odpowiednim formacie po zakończeniu iteracji.

Wynik działania programu:
Podaj liczbe wierszy: 3
Podaj liczbe kolumn: 4

1    3    5    7    
9   11   13   15    
17  19   21   23  
*/

#include <iostream>
#include <iomanip> // do estetycznego formatowania wyjścia

int main() {
    int wiersze, kolumny;

    // Poproś użytkownika o podanie liczby wierszy i kolumn
    std::cout << "Podaj liczbe wierszy: ";
    std::cin >> wiersze;

    std::cout << "Podaj liczbe kolumn: ";
    std::cin >> kolumny;

    // Sprawdzenie poprawności danych
    if (wiersze <= 0 || kolumny <= 0) {
        std::cout << "Blad: liczby musza byc dodatnie." << std::endl;
        return 1;
    }

    int liczba = 1; // zaczynamy od pierwszej liczby nieparzystej

    std::cout << std::endl;

    // Zagnieżdżona pętla for do przejścia przez wiersze i kolumny
    for (int i = 0; i < wiersze; i++) {
        for (int j = 0; j < kolumny; j++) {
            std::cout << std::setw(4) << liczba; // wypisz liczbę z odstępem
            liczba += 2; // przejdź do kolejnej liczby nieparzystej
        }
        std::cout << std::endl; // przejdź do nowego wiersza po każdej linii
    }

    return 0;
}
