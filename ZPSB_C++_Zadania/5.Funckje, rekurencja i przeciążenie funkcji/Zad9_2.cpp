/*
Zadanie 2 - Generowanie ciągu Fibonacciego za pomocą rekurencji
Napisz program, który pobiera od użytkownika liczbę całkowitą i wyświetla kolejne liczby ciągu Fibonacciego aż do podanej liczby elementów. Ciąg Fibonacciego zaczyna się od dwóch jedynek, a każdy następny element jest sumą dwóch poprzednich. W przypadku rekurencyjnego podejścia funkcja wywołuje samą siebie, aż osiągnie pierwsze dwa elementy ciągu.

Wymagania:
Funkcja GetNumberFromUser - wczytuje liczbę całkowitą od użytkownika (liczbę elementów ciągu) i zwraca ją do głównego programu.
Funkcja CalculateFibonacciRecursive - funkcja rekurencyjna, która przyjmuje indeks elementu i zwraca wartość danego elementu ciągu Fibonacciego.
Funkcja DisplayFibonacciSequence - wywołuje funkcję CalculateFibonacciRecursive dla kolejnych indeksów i wyświetla na ekranie kolejne elementy ciągu.

Kroki do wykonania:
Program pobiera liczbę całkowitą od użytkownika.
Program generuje kolejne elementy ciągu Fibonacciego za pomocą funkcji rekurencyjnej, wywołując ją dla kolejnych indeksów.
Program wyświetla wyniki na ekranie w formie ciągu liczb.

Wynik działania programu:
Podaj liczbe elementow: 7
Ciag Fibonacciego: 1, 1, 2, 3, 5, 8, 13
*/


#include <iostream>

// Funkcja pobierająca liczbę całkowitą od użytkownika
int GetNumberFromUser() {
    int n;
    std::cout << "Podaj liczbe elementow: ";
    std::cin >> n;
    return n;
}

// Funkcja rekurencyjna obliczająca n-ty element ciągu Fibonacciego
int CalculateFibonacciRecursive(int index) {
    if (index == 0 || index == 1) {
        return 1; // Pierwsze dwa elementy to 1
    } else {
        // Każdy kolejny element to suma dwóch poprzednich
        return CalculateFibonacciRecursive(index - 1) + CalculateFibonacciRecursive(index - 2);
    }
}

// Funkcja wyświetlająca cały ciąg Fibonacciego
void DisplayFibonacciSequence(int liczbaElementow) {
    std::cout << "Ciag Fibonacciego: ";
    for (int i = 0; i < liczbaElementow; i++) {
        std::cout << CalculateFibonacciRecursive(i);
        if (i < liczbaElementow - 1) {
            std::cout << ", ";
        }
    }
    std::cout << std::endl;
}

// Funkcja główna
int main() {
    int ile = GetNumberFromUser();            // Pobranie liczby elementów
    DisplayFibonacciSequence(ile);            // Wyświetlenie ciągu
    return 0;
}
