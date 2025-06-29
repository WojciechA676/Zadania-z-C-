/*
Zadanie 3 - Odwracanie ciągu znaków
Napisz program, który pobiera od użytkownika ciąg znaków,
a następnie odwraca go i wyświetla wynik. Program powinien być
podzielony na funkcje, aby każdy krok był wykonywany przez osobną funkcję.

Wymagania:
Funkcja GetTextFromUser - powinna wczytać ciąg znaków od użytkownika i zwrócić go do głównego programu.
Wskazówka: Aby umożliwić wczytanie pełnego ciągu tekstu (włącznie ze spacjami), użyj funkcji getline(cin, text);. Nie zapomnij zaimportować biblioteki string, aby funkcja działała poprawnie.
Funkcja ReverseString - przyjmuje ciąg znaków jako argument, odwraca go i zwraca odwrócony tekst.
Funkcja DisplayResult - przyjmuje odwrócony tekst jako argument i wyświetla go na ekranie.

Kroki do wykonania:
Program wczytuje od użytkownika ciąg znaków, który może zawierać spacje i znaki specjalne.
Następnie odwraca ciąg - zamienia pierwszy znak z ostatnim, drugi z przedostatnim itd.
Program wyświetla odwrócony ciąg znaków na ekranie.

Wynik działania programu:
Podaj ciag znakow: Hello world
Odwrocony ciag: dlrow olleH
*/

#include <iostream>
#include <string> // potrzebna do std::string i getline()

// Funkcja do pobierania tekstu od użytkownika
std::string GetTextFromUser() {
    std::string tekst;
    std::cout << "Podaj ciag znakow: ";
    std::getline(std::cin, tekst); // wczytuje cały wiersz, łącznie ze spacjami
    return tekst;
}

// Funkcja do odwracania ciągu znaków
std::string ReverseString(const std::string& tekst) {
    std::string odwrocony = tekst; // kopia oryginalnego tekstu
    int n = odwrocony.length();

    // Zamiana znaków miejscami od końca do początku
    for (int i = 0; i < n / 2; i++) {
        std::swap(odwrocony[i], odwrocony[n - 1 - i]);
    }

    return odwrocony;
}

// Funkcja do wyświetlenia odwróconego tekstu
void DisplayResult(const std::string& wynik) {
    std::cout << "Odwrocony ciag: " << wynik << std::endl;
}

// Funkcja główna
int main() {
    std::string tekst = GetTextFromUser();           // Pobierz tekst
    std::string odwrocony = ReverseString(tekst);    // Odwróć tekst
    DisplayResult(odwrocony);                        // Wyświetl wynik

    return 0;
}
