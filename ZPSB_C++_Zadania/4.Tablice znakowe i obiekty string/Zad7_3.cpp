/*
Zadanie 3 - Zliczanie wystąpień znaku w ciągu znaków oraz podawanie pozycji
Napisz program, który wczyta od użytkownika ciąg znaków oraz znak,
którego wystąpienia w ciągu mają zostać zliczone. Program powinien
także wyświetlić pozycje, na których dany znak występuje w podanym ciągu.

Kroki do wykonania:
Program wczytuje ciąg znaków od użytkownika, zapisując go w tablicy znaków.
Program następnie wczytuje pojedynczy znak, którego wystąpienia mają być zliczone.
Zmienna licznik jest inicjalizowana do zera, oraz stworzona tablica do przechowywania pozycji wystąpień znaku.
Pętla przechodzi przez każdy element tablicy, porównując każdy znak z podanym przez użytkownika znakiem do zliczenia.
Jeśli dany znak w tablicy jest taki sam, jak szukany, licznik zwiększa swoją wartość o jeden, a pozycja jest zapisywana w tablicy.
Na końcu program wyświetla liczbę wystąpień danego znaku w ciągu oraz listę pozycji, na których dany znak występuje.

Przykład działania programu:
Podaj ciag znakow: Ala ma kota
Podaj znak do zliczenia: a
Liczba wystapien znaku 'a': 3
Pozycje wystapien: 2, 5, 10
*/

#include <iostream>

int main() {
    const int ROZMIAR = 101;           // Maksymalna długość ciągu (100 + '\0')
    char tekst[ROZMIAR];               // Tablica znakowa na ciąg
    char znak;                         // Znak do zliczenia
    int licznik = 0;                   // Licznik wystąpień
    int pozycje[ROZMIAR];              // Tablica pozycji wystąpień

    // Wczytanie ciągu znaków od użytkownika
    std::cout << "Podaj ciag znakow: ";
    std::cin.getline(tekst, ROZMIAR);

    // Wczytanie znaku do zliczenia
    std::cout << "Podaj znak do zliczenia: ";
    std::cin >> znak;

    // Przejście przez ciąg i zliczenie wystąpień
    for (int i = 0; tekst[i] != '\0'; i++) {
        if (tekst[i] == znak) {
            pozycje[licznik] = i; // Zapisz pozycję (indeks) wystąpienia
            licznik++;            // Zwiększ licznik wystąpień
        }
    }

    // Wyświetlenie wyniku
    std::cout << "Liczba wystapien znaku '" << znak << "': " << licznik << std::endl;

    if (licznik > 0) {
        std::cout << "Pozycje wystapien: ";
        for (int i = 0; i < licznik; i++) {
            std::cout << pozycje[i];
            if (i < licznik - 1) std::cout << ", ";
        }
        std::cout << std::endl;
    }

    return 0;
}
