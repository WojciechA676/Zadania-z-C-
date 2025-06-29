/*
Zadanie 2 - Zamiana znaków w ciągu znaków
Napisz program, który wczyta od użytkownika ciąg znaków o długości maksymalnie 20 znaków, a następnie zamieni wszystkie wystąpienia litery 'a' na literę 'o'. Program wyświetli zmodyfikowany ciąg znaków.

Kroki do wykonania:
Program wczytuje ciąg znaków od użytkownika i zapisuje go w tablicy o rozmiarze 21.
Program przechodzi przez każdy znak w tablicy, sprawdzając, czy jest to litera 'a'.
Jeśli znajdzie literę 'a', zamienia ją na literę 'o'.
Na końcu program wyświetla zmodyfikowany ciąg znaków.

Wynik działania programu:
Podaj ciag znakow (max 20 znakow): Ala ma kota
Zmodyfikowany ciag znakow: Alo mo koto
*/


#include <iostream>

int main() {
    const int ROZMIAR = 21;       // 20 znaków + znak końca '\0'
    char tekst[ROZMIAR];          // Tablica znakowa

    // Wczytanie ciągu znaków z możliwością spacji
    std::cout << "Podaj ciag znakow (max 20 znakow): ";
    std::cin.getline(tekst, ROZMIAR);

    // Przejście przez ciąg znaków i zamiana 'a' na 'o'
    for (int i = 0; tekst[i] != '\0'; i++) {
        if (tekst[i] == 'a') {
            tekst[i] = 'o';
        }
    }

    // Wyświetlenie zmodyfikowanego ciągu
    std::cout << "Zmodyfikowany ciag znakow: " << tekst << std::endl;

    return 0;
}

