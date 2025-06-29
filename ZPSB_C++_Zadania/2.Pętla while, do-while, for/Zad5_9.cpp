/*
Zadanie 9 - Liczby bez powtórzeń
Napisz program, który wyświetli wszystkie liczby trzycyfrowe złożone z różnych cyfr.
Program powinien znaleźć wszystkie możliwe kombinacje liczb trzycyfrowych, gdzie każda cyfra jest inna,
tzn. żadna cyfra nie powtarza się w danej liczbie. Program powinien także policzyć, ile takich liczb udało się wygenerować.

Kroki do wykonania
Użyj zagnieżdżonej pętli for, aby przejść przez wszystkie możliwe kombinacje cyfr od 0 do 9.
Sprawdź, czy wszystkie cyfry w liczbie są różne.
Jeśli cyfry są różne, wypisz daną liczbę.
Na końcu wypisz liczbę wszystkich możliwych kombinacji.

Wynik działania programu:

102
103
104
105
106
107
108
109
120
123
...
987
Liczb bez powtarzajacych sie cyfr: 648
*/

#include <iostream>

int main() {
    int licznik = 0; // Licznik poprawnych liczb

    // Pętla po setkach
    for (int setki = 1; setki <= 9; setki++) {
        // Pętla po dziesiątkach
        for (int dziesiatki = 0; dziesiatki <= 9; dziesiatki++) {
            // Pętla po jednosciach
            for (int jednosci = 0; jednosci <= 9; jednosci++) {
                // Sprawdź, czy wszystkie cyfry są różne
                if (setki != dziesiatki && setki != jednosci && dziesiatki != jednosci) {
                    int liczba = setki * 100 + dziesiatki * 10 + jednosci; // Zbuduj liczbę z trzech cyfr
                    std::cout << liczba << std::endl; // Wypisz liczbę
                    licznik++; // Zwiększ licznik poprawnych liczb
                }
            }
        }
    }

    // Wyświetl całkowitą liczbę unikalnych liczb
    std::cout << "Liczb bez powtarzajacych sie cyfr: " << licznik << std::endl;

    return 0;
}




