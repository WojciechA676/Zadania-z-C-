/*
Zadanie 4 - Znajdowanie maksymalnej wartości w tablicy
Napisz program, który pobiera od użytkownika pięć liczb całkowitych,
zapisuje je w tablicy, a następnie wyszukuje największą wartość w tej tablicy.
Program powinien być podzielony na funkcje, gdzie każda funkcja odpowiada za osobne zadanie.

Wymagania:
Funkcja GetArrayFromUser - powinna wczytać pięć liczb całkowitych od użytkownika i zapisać je do tablicy.
Wskazówka: Zadbaj, aby użytkownik mógł wpisać wartości po kolei. Możesz zapytać o każdą liczbę osobno, aby uprościć proces.
Funkcja FindMaxValue - przyjmuje tablicę liczb oraz wielkość tablicy jako argument, przechodzi przez wszystkie jej elementy, znajduje największą wartość i zwraca ją.
Funkcja DisplayResult - przyjmuje znalezioną maksymalną wartość jako argument i wyświetla ją na ekranie.

Kroki do wykonania:
Program wczytuje od użytkownika pięć liczb całkowitych i zapisuje je do tablicy.
Następnie przechodzi przez wszystkie elementy tablicy, aby znaleźć największą wartość.
Program wyświetla wynik - największą wartość z podanych liczb.

Wynik działania programu:

Podaj liczbe nr 1: 5
Podaj liczbe nr 2: 8
Podaj liczbe nr 3: 3
Podaj liczbe nr 4: 12
Podaj liczbe nr 5: 7
Najwieksza liczba: 12
*/

#include <iostream>

// Funkcja wczytująca 5 liczb od użytkownika do tablicy
void GetArrayFromUser(int tablica[], int rozmiar) {
    for (int i = 0; i < rozmiar; i++) {
        std::cout << "Podaj liczbe nr " << i + 1 << ": ";
        std::cin >> tablica[i];
    }
}

// Funkcja znajdująca największą wartość w tablicy
int FindMaxValue(int tablica[], int rozmiar) {
    int maks = tablica[0]; // Przyjmujemy pierwszy element jako tymczasowe maksimum

    for (int i = 1; i < rozmiar; i++) {
        if (tablica[i] > maks) {
            maks = tablica[i]; // Aktualizujemy maks, jeśli znajdziemy większą liczbę
        }
    }

    return maks;
}

// Funkcja wyświetlająca wynik
void DisplayResult(int max) {
    std::cout << "Najwieksza liczba: " << max << std::endl;
}

// Funkcja główna
int main() {
    const int ROZMIAR = 5;
    int liczby[ROZMIAR];

    GetArrayFromUser(liczby, ROZMIAR);          // Wczytaj liczby do tablicy
    int maks = FindMaxValue(liczby, ROZMIAR);   // Znajdź największą wartość
    DisplayResult(maks);                        // Wyświetl wynik

    return 0;
}
