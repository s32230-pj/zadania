// 4.2.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    cout << "Podaj liczbe elementow tablicy: ";
    int n;
    cin >> n;

    if (n <= 0) {
        cerr << "Liczba elementow musi byc dodatnia." << endl;
        return 1;
    }

    int* tablica = new int[n];

    cout << "Podaj elementy tablicy:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> tablica[i];
    }

    unordered_map<int, int> licznik;

    for (int i = 0; i < n; ++i) {
        licznik[tablica[i]]++;
    }
    int najczesciejWystepujacyElement = tablica[0];
    int najwiecejWystapien = 1;

    for (const auto& para : licznik) {
        if (para.second > najwiecejWystapien) {
            najczesciejWystepujacyElement = para.first;
        }
    }
    cout << "Najczesciej wystepujacy element tablicy: " << najczesciejWystepujacyElement << endl;

    return 0;
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
