/*
Zadanie 1 - Wczytywanie i wyświetlanie ciągu znaków w tablicy znakowej
Napisz program, który wczyta od użytkownika ciąg znaków o maksymalnej długości 20 znaków i zapisze go do tablicy znakowej. Następnie program wyświetli wprowadzony ciąg znaków.

Kroki do wykonania:
Program deklaruje tablicę znakową o rozmiarze 21 (20 znaków plus jeden znak \0 kończący ciąg).
Program prosi użytkownika o wpisanie ciągu znaków, który zostanie zapisany w tablicy znakowej.
Program używa funkcji cin.getline, aby wczytać cały ciąg znaków (w tym potencjalne spacje) do tablicy znakowej.
Program wyświetla wprowadzony ciąg znaków, korzystając z tablicy znakowej.

Wynik działania programu:

Podaj ciag znakow (max 20 znakow): Ala ma kota
Wprowadzony ciag znakow: Ala ma kota
*/


#include <iostream>

int main() {
    const int ROZMIAR = 21;           // 20 znaków + 1 na znak '\0'
    char tekst[ROZMIAR];              // Tablica znakowa (łańcuch znaków)

    // Wczytywanie ciągu znaków z możliwością spacji
    std::cout << "Podaj ciag znakow (max 20 znakow): ";
    std::cin.getline(tekst, ROZMIAR); // Wczytuje cały wiersz do tablicy

    // Wyświetlenie wprowadzonego ciągu
    std::cout << "Wprowadzony ciag znakow: " << tekst << std::endl;

    return 0;
}



