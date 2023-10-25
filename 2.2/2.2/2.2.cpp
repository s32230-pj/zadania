// 2.2.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//


#include <iostream>

using namespace std;

 int main() {

     int a;
     int b;

     cout << "Podaj liczbe a: ";
     cin >> a;
     cout << "Podaj liczbe b: ";
     cin >> b;
     cout << "A:" << a << "B:" << b;
     cout << endl;
    

     cout << "Wiersz o dlugosci a: ";
     for (int i = 0; i < a; i++) 
      {
             cout << "*";
      }
     cout << endl;

     cout << "Kolumna o dlugosci b: " << endl;
     for (int i = 0; i < b; i++) 
     {
         cout << "*" << endl;
     }

     cout << "Prostokat o wymiarach a * b: " << endl;
     for (int i = 0; i < b; i++) 
     {
         for (int j = 0; j < a; j++) {
             cout << "*";
         }
         cout << endl;
     }

     cout << "Obwod prostokata o wymiarach a * b: " << endl;
     for (int i = 0; i < b; i++) 
     {
         for (int j = 0; j < a; j++) {
             if (i == 0 || i == b - 1 || j == 0 || j == a - 1) {
                 cout << "*";
             }
             else {
                 cout << " ";
             }
         }
        
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
