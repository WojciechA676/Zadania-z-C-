/*
Zadanie 1 - Obliczanie sumy liczb od 1 do n za pomocą rekurencji
Napisz program, który oblicza sumę liczb całkowitych od 1 do n za pomocą rekurencji.
Funkcja rekurencyjna będzie dodawać kolejne liczby, aż osiągnie wartość n, wtedy zacznie zwracać wynik do poprzednich wywołań.

Wymagania:

Funkcja GetNumberFromUser - wczytuje liczbę całkowitą n od użytkownika.
Funkcja CalculateSumRecursive - funkcja rekurencyjna, która oblicza sumę liczb od 1 do n.
Funkcja DisplayResult - przyjmuje wynik sumowania jako argument i wyświetla go na ekranie w odpowiednim formacie.

Kroki do wykonania:

Program pobiera liczbę całkowitą od użytkownika.
Program oblicza sumę liczb od 1 do n za pomocą funkcji rekurencyjnej.
Program wyświetla wynik na ekranie.

Wynik działania programu:

Podaj liczbe: 5
Suma liczb od 1 do 5 wynosi: 15
*/

#include <iostream>

// Funkcja pobierająca liczbę całkowitą od użytkownika
int GetNumberFromUser() {
    int n;
    std::cout << "Podaj liczbe: ";
    std::cin >> n;
    return n;
}

// Funkcja rekurencyjna obliczająca sumę od 1 do n
int CalculateSumRecursive(int n) {
    if (n <= 1) {
        return n; // warunek zakończenia rekurencji
    } else {
        return n + CalculateSumRecursive(n - 1); // wywołanie rekurencyjne
    }
}

// Funkcja wyświetlająca wynik
void DisplayResult(int n, int suma) {
    std::cout << "Suma liczb od 1 do " << n << " wynosi: " << suma << std::endl;
}

// Funkcja główna
int main() {
    int liczba = GetNumberFromUser();                // Wczytaj liczbę
    int wynik = CalculateSumRecursive(liczba);       // Oblicz sumę rekurencyjnie
    DisplayResult(liczba, wynik);                    // Wyświetl wynik

    return 0;
}
