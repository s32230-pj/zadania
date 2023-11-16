// 3.4.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;



int wspolczynnik(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    }
    else {
        return wspolczynnik(n - 1, k - 1) + wspolczynnik(n - 1, k);
    }
}

void TrojkatPaskala(int wiersze) {
    for (int i = 0; i < wiersze; i++) {
        for (int j = 0; j < wiersze - i - 1; j++) {
            cout << " ";
        }

        for (int k = 0; k <= i; k++) {
           cout << wspolczynnik(i, k) << " ";
        }

        cout << endl;
    }
}

int main() {
    int wiersze;

   cout << "Podaj liczbe wierszy trojkata Pascala: ";
   cin >> wiersze;
    TrojkatPaskala(wiersze);

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
