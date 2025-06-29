/*
Zadanie 6 - Obliczanie silni liczby
Napisz program, który pobiera od użytkownika liczbę całkowitą i
oblicza jej silnię. Silnia liczby n (oznaczana jako n!) jest iloczynem wszystkich
liczb całkowitych od 1 do n. Program powinien wykorzystywać funkcje do realizacji kolejnych kroków.

Wymagania:

Funkcja GetNumberFromUser - wczytuje liczbę całkowitą od użytkownika i zwraca ją do głównego programu.
Funkcja CalculateFactorial - przyjmuje liczbę całkowitą jako argument, oblicza jej silnię i zwraca wynik.
Funkcja DisplayResult - przyjmuje wynik silni jako argument i wyświetla go na ekranie w odpowiednim formacie.

Kroki do wykonania:

Program pobiera liczbę całkowitą od użytkownika.
Program oblicza silnię tej liczby, przechodząc przez kolejne liczby całkowite od 1 do podanej liczby i obliczając ich iloczyn.
Program wyświetla wynik obliczonej silni na ekranie.

Wynik działania programu:

Podaj liczbe: 5
Silnia liczby 5 wynosi: 120
*/

#include <iostream>

// Funkcja pobierająca liczbę całkowitą od użytkownika
int GetNumberFromUser() {
    int liczba;
    std::cout << "Podaj liczbe: ";
    std::cin >> liczba;
    return liczba;
}

// Funkcja obliczająca silnię liczby
unsigned long long CalculateFactorial(int n) {
    unsigned long long silnia = 1;
    for (int i = 1; i <= n; i++) {
        silnia *= i;
    }
    return silnia;
}

// Funkcja wyświetlająca wynik silni
void DisplayResult(int n, unsigned long long wynik) {
    std::cout << "Silnia liczby " << n << " wynosi: " << wynik << std::endl;
}

// Funkcja główna programu
int main() {
    int liczba = GetNumberFromUser();                    // Wczytaj liczbę od użytkownika
    unsigned long long wynik = CalculateFactorial(liczba); // Oblicz silnię
    DisplayResult(liczba, wynik);                        // Wyświetl wynik

    return 0;
}
