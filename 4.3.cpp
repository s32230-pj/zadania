// 4.3.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

using namespace std;

int main() {
    const int rozmiar = 10;
    int tablica[rozmiar][10];

    for (int i = 0; i < rozmiar; ++i) {
        tablica[i][0] = i;         
        tablica[i][1] = i + i;       
        tablica[i][2] = 0;
        tablica[i][3] = 0;
        tablica[i][4] = 0;
        tablica[i][5] = 0;
        tablica[i][6] = 0;
        tablica[i][7] = 0;
        tablica[i][8] = 0;
        tablica[i][9] = 0;
    }
    cout << "Pierwsze dwa rzędy tablicy 10x10:" << endl;
    for (int i = 0; i < rozmiar; ++i) {
        cout << tablica[i][0] << "\t" << tablica[i][1] << endl;

    }

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
