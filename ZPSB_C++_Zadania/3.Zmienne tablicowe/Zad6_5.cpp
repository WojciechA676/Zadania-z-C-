/*
Zadanie 5 - Obliczanie średniej wartości elementów w tablicy dwuwymiarowej
Napisz program, który wczyta od użytkownika dziewięć liczb całkowitych i zapisze je do dwuwymiarowej tablicy 3x3. Następnie program obliczy średnią tych liczb i wyświetli wynik.

Kroki do wykonania:
Program wczytuje dziewięć liczb całkowitych od użytkownika i zapisuje je w dwuwymiarowej tablicy 3x3.
Program przechodzi przez wszystkie elementy tablicy, sumując ich wartości.
Po obliczeniu sumy program dzieli ją przez liczbę elementów (9), aby uzyskać średnią.
Na końcu program wyświetla wynik obliczonej średniej.

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
Srednia liczb: 5
*/

#include <iostream>

int main() {
    const int WIERSZE = 3;
    const int KOLUMNY = 3;
    int macierz[WIERSZE][KOLUMNY]; // Tablica dwuwymiarowa 3x3
    int suma = 0;                  // Suma wszystkich elementów

    std::cout << "Podaj 9 liczb calkowitych do macierzy 3x3:" << std::endl;

    // Wczytywanie liczb do tablicy
    for (int i = 0; i < WIERSZE; i++) {
        for (int j = 0; j < KOLUMNY; j++) {
            std::cout << "Podaj liczbe dla wiersza " << i + 1
                      << ", kolumny " << j + 1 << ": ";
            std::cin >> macierz[i][j];
            suma += macierz[i][j]; // Dodaj wartość do sumy
        }
    }

    // Obliczenie średniej jako liczba zmiennoprzecinkowa
    double srednia = static_cast<double>(suma) / (WIERSZE * KOLUMNY);

    // Wyświetlenie wyniku
    std::cout << "Srednia liczb: " << srednia << std::endl;

    return 0;
}
