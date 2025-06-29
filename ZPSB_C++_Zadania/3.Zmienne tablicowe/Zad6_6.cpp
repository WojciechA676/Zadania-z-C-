/*
Zadanie 6 - Sumowanie elementów w tablicy dwuwymiarowej
Napisz program, który wczyta od użytkownika macierz 3x3 (3 wiersze i 3 kolumny) i zapisze ją do dwuwymiarowej tablicy.
Następnie program obliczy sumę wszystkich elementów w tej macierzy i wyświetli wynik.

Kroki do wykonania:
Program wczytuje dziewięć liczb całkowitych od użytkownika i zapisuje je w dwuwymiarowej tablicy 3x3.
Program przechodzi przez wszystkie elementy macierzy, sumując ich wartości.
Na końcu program wyświetla wynik obliczonej sumy.

Wynik działania programu:

Podaj 9 liczb calkowitych do macierzy 3x3:
Podaj liczbe dla wiersza 1, kolumny 1: 1
Podaj liczbe dla wiersza 1, kolumny 2: 2
Podaj liczbe dla wiersza 1, kolumny 3: 3
Podaj liczbe dla wiersza 2, kolumny 1: 4
Podaj liczbe dla wiersza 2, kolumny 2: 5
Podaj liczbe dla wiersza 2, kolumny 3: 6
Podaj liczbe dla wiersza 3, kolumny 1: 7
Podaj liczbe dla wiersza 3, kolumny 2: 8
Podaj liczbe dla wiersza 3, kolumny 3: 9

Suma elementow macierzy: 45
*/

#include <iostream>

int main() {
    const int WIERSZE = 3;
    const int KOLUMNY = 3;
    int macierz[WIERSZE][KOLUMNY]; // Tablica 3x3
    int suma = 0;                  // Zmienna do przechowywania sumy

    std::cout << "Podaj 9 liczb calkowitych do macierzy 3x3:" << std::endl;

    // Wczytanie danych do tablicy i jednoczesne sumowanie
    for (int i = 0; i < WIERSZE; i++) {
        for (int j = 0; j < KOLUMNY; j++) {
            std::cout << "Podaj liczbe dla wiersza " << (i + 1)
                      << ", kolumny " << (j + 1) << ": ";
            std::cin >> macierz[i][j];
            suma += macierz[i][j]; // Dodanie liczby do sumy
        }
    }

    // Wyświetlenie wyniku sumy
    std::cout << "\nSuma elementow macierzy: " << suma << std::endl;

    return 0;
}
