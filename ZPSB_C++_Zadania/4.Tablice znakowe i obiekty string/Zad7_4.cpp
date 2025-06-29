/*
Zadanie 4 - Odwracanie ciągu znaków
Napisz program, który odwróci podany przez użytkownika ciąg znaków i wyświetli wynik.

Kroki do wykonania:
Program wczytuje ciąg znaków od użytkownika i zapisuje go w tablicy znaków.
Program oblicza długość wprowadzonego ciągu, aby wiedzieć, ile znaków należy odwrócić. Należy zaimportować bibliotekę 'cstring' i użyć metody strlen()
Program przechodzi przez tablicę znaków od końca do początku i zapisuje odwrócony ciąg w nowej tablicy.
Na końcu program wyświetla odwrócony ciąg znaków.

Wynik działania programu:
Podaj ciag znakow: Ala ma kota
Odwrocony ciag: atok am alA
*/

#include <iostream>
#include <cstring> // Potrzebne do strlen()

int main() {
    const int ROZMIAR = 101;        // Maksymalna długość ciągu + znak końca
    char tekst[ROZMIAR];            // Oryginalny ciąg
    char odwrocony[ROZMIAR];        // Odwrócony ciąg

    // Wczytanie ciągu znaków od użytkownika
    std::cout << "Podaj ciag znakow: ";
    std::cin.getline(tekst, ROZMIAR);

    // Obliczenie długości ciągu
    int dlugosc = strlen(tekst);

    // Odwracanie ciągu znaków
    for (int i = 0; i < dlugosc; i++) {
        odwrocony[i] = tekst[dlugosc - 1 - i]; // Ostatni znak trafia na początek itd.
    }
    odwrocony[dlugosc] = '\0'; // Zakończenie nowego ciągu znakiem null

    // Wyświetlenie odwróconego ciągu
    std::cout << "Odwrocony ciag: " << odwrocony << std::endl;

    return 0;
}
