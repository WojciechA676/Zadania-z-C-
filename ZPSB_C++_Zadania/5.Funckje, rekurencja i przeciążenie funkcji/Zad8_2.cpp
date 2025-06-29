/*
Zadanie 2 - Kalkulator funkcji matematycznych z opcją wielokrotnego wyboru
Napisz program, który działa jako prosty kalkulator umożliwiający użytkownikowi
wielokrotne wykonywanie obliczeń na podstawie wybranych funkcji matematycznych.
Program powinien pytać użytkownika o wybór funkcji, a następnie prosić o podanie 
dwóch liczb do obliczeń. Program działa w pętli, dopóki użytkownik nie wybierze opcji 0, która kończy działanie programu.

Kroki do wykonania:

Program wyświetla listę dostępnych funkcji matematycznych: suma, różnica, iloczyn, iloraz, a także opcję zakończenia programu (0).
Użytkownik wybiera funkcję, podając odpowiadającą jej liczbę. Jeśli użytkownik wybierze 0, program kończy swoje działanie.
Po dokonaniu wyboru innej funkcji program prosi o podanie dwóch liczb, na których ma wykonać obliczenia.
Na podstawie wybranej funkcji, program wykonuje odpowiednie obliczenie (np. sumuje lub mnoży liczby).
Wynik działania funkcji zostaje wyświetlony na ekranie.
Program powtarza kroki od początku, dopóki użytkownik nie wybierze opcji 0.

Wynik działania programu:

Wybierz funkcje:
1. Suma
2. Roznica
3. Iloczyn
4. Iloraz
0. Wyjscie
Wybrana funkcja: 4
Podaj pierwsza liczbe: 9
Podaj druga liczbe: 6
Wynik: 1.5

Wybierz funkcje:
1. Suma
2. Roznica
3. Iloczyn
4. Iloraz
0. Wyjscie
Wybrana funkcja: 0
Koniec programu.
*/


#include <iostream>

int main() {
    int wybor;             // Zmienna do przechowywania wyboru funkcji
    double a, b, wynik;    // Liczby i wynik operacji

    do {
        // Wyświetlenie menu opcji
        std::cout << "\nWybierz funkcje:\n";
        std::cout << "1. Suma\n";
        std::cout << "2. Roznica\n";
        std::cout << "3. Iloczyn\n";
        std::cout << "4. Iloraz\n";
        std::cout << "0. Wyjscie\n";
        std::cout << "Wybrana funkcja: ";
        std::cin >> wybor;

        // Obsługa wyjścia z programu
        if (wybor == 0) {
            std::cout << "Koniec programu." << std::endl;
            break;
        }

        // Wczytanie dwóch liczb od użytkownika
        std::cout << "Podaj pierwsza liczbe: ";
        std::cin >> a;
        std::cout << "Podaj druga liczbe: ";
        std::cin >> b;

        // Obsługa wyboru działania
        switch (wybor) {
            case 1: // Suma
                wynik = a + b;
                std::cout << "Wynik: " << wynik << std::endl;
                break;
            case 2: // Różnica
                wynik = a - b;
                std::cout << "Wynik: " << wynik << std::endl;
                break;
            case 3: // Iloczyn
                wynik = a * b;
                std::cout << "Wynik: " << wynik << std::endl;
                break;
            case 4: // Iloraz
                if (b != 0) {
                    wynik = a / b;
                    std::cout << "Wynik: " << wynik << std::endl;
                } else {
                    std::cout << "Blad: nie mozna dzielic przez zero!" << std::endl;
                }
                break;
            default: // Nieprawidłowy wybór
                std::cout << "Blad: nieznana opcja. Sprobuj ponownie." << std::endl;
        }

    } while (true); // Pętla działa do momentu wybrania opcji 0

    return 0;
}

