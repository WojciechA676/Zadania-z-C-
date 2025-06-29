/*
Zadanie 7 - Transpozycja macierzy dwuwymiarowej
Napisz program, który wczyta od użytkownika macierz 2x3 (2 wiersze i 3 kolumny) i zapisze ją do dwuwymiarowej tablicy. Następnie program obliczy transpozycję tej macierzy (zamieni wiersze z kolumnami) i wyświetli wynik.

Kroki do wykonania:
Program wczytuje sześć liczb całkowitych od użytkownika i zapisuje je w dwuwymiarowej tablicy 2x3.
Program tworzy nową macierz 3x2 do przechowywania transpozycji.
Program przechodzi przez elementy oryginalnej macierzy i przypisuje je do odpowiednich miejsc w macierzy transponowanej.
Na końcu program wyświetla transponowaną macierz.

Wynik działania programu:

Podaj 6 liczb calkowitych do macierzy 2x3:
Podaj liczbe dla wiersza 1, kolumny 1: 1
Podaj liczbe dla wiersza 1, kolumny 2: 2
Podaj liczbe dla wiersza 1, kolumny 3: 3
Podaj liczbe dla wiersza 2, kolumny 1: 4
Podaj liczbe dla wiersza 2, kolumny 2: 5
Podaj liczbe dla wiersza 2, kolumny 3: 6

Transponowana macierz:
1 4 
2 5 
3 6
*/

#include <iostream>

int main() {
    const int WIERSZE = 2;
    const int KOLUMNY = 3;

    int macierz[WIERSZE][KOLUMNY];      // Oryginalna macierz 2x3
    int transponowana[KOLUMNY][WIERSZE]; // Transponowana macierz 3x2

    std::cout << "Podaj 6 liczb calkowitych do macierzy 2x3:" << std::endl;

    // Wczytywanie danych do macierzy 2x3
    for (int i = 0; i < WIERSZE; i++) {
        for (int j = 0; j < KOLUMNY; j++) {
            std::cout << "Podaj liczbe dla wiersza " << (i + 1)
                      << ", kolumny " << (j + 1) << ": ";
            std::cin >> macierz[i][j];
        }
    }

    // Tworzenie transpozycji macierzy
    for (int i = 0; i < WIERSZE; i++) {
        for (int j = 0; j < KOLUMNY; j++) {
            transponowana[j][i] = macierz[i][j];
        }
    }

    // Wyświetlenie transponowanej macierzy 3x2
    std::cout << "\nTransponowana macierz:" << std::endl;
    for (int i = 0; i < KOLUMNY; i++) {
        for (int j = 0; j < WIERSZE; j++) {
            std::cout << transponowana[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
