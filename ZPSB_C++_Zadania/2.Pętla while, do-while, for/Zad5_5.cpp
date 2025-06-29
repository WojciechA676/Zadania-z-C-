/*
Zadanie 5 - Tabliczka mnożenia w formacie iloczynów
Napisz program, który wyświetli tabliczkę mnożenia od 1 do N w formacie
a * b = wynik, gdzie N zostanie podane przez użytkownika. Program powinien 
użyć zagnieżdżonej pętli for, aby dla każdej pary liczb z zakresu od 1 do N wyświetlić iloczyn.

Kroki do wykonania:
Poproś użytkownika o podanie liczby N.
Użyj zagnieżdżonej pętli for do iteracji przez wszystkie liczby od 1 do N.
Wypisz wynik mnożenia w formacie a * b = wynik dla każdej kombinacji liczb.

Wynik działania programu:
Podaj liczbe N: 3

1 * 1 = 1
1 * 2 = 2
1 * 3 = 3

2 * 1 = 2
2 * 2 = 4
2 * 3 = 6

3 * 1 = 3
3 * 2 = 6
3 * 3 = 9
*/

#include <iostream>

int main() {
    int N; // Zakres tabliczki mnożenia

    // Poproś użytkownika o podanie liczby N
    std::cout << "Podaj liczbe N: ";
    std::cin >> N;

    // Sprawdzenie poprawności danych wejściowych
    if (N <= 0) {
        std::cout << "Blad: liczba musi byc dodatnia." << std::endl;
        return 1;
    }

    // Zagnieżdżona pętla for – dla każdej liczby od 1 do N
    for (int a = 1; a <= N; a++) {
        for (int b = 1; b <= N; b++) {
            std::cout << a << " * " << b << " = " << a * b << std::endl; // wypisz wynik mnożenia
        }
        std::cout << std::endl; // dodaj pustą linię po każdej grupie
    }

    return 0;
}
