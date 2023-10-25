// 2.3.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;
int main()
{
	int numermiesiaca;
	cout << "Podaj numer miesiaca: ";
	cin >> numermiesiaca;
	switch (numermiesiaca)
	{
	case 1:
		cout << "Styczen\n";
		cout << "31 dni\n";
		cout << "Pochmurno\n";
		break;
	case 2:
		cout << "Luty\n";
		cout << "28 dni\n";
		cout << "Pochmurno\n";
		break;
	case 3:
		cout << "Marzec\n";
		cout << "31 dni\n";
		cout << "Pochmurno\n";
		break;
	case 4:
		cout << "Kwiecien\n";
		cout << "30 dni\n";
		cout << "Slonecznie\n";
		break;
	case 5:
		cout << "Maj\n";
		cout << "31 dni\n";
		cout << "Slonecznie\n";
		break;
	case 6:
		cout << "Czerwiec\n";
		cout << "30 dni\n";
		cout << "Slonecznie\n";
		break;
	case 7:
		cout << "Lipiec\n";
		cout << "31 dni\n";
		cout << "Slonecznie\n";
		break;
	case 8:
		cout << "Sierpien\n";
		cout << "31 dni\n";
		cout << "Słonecznie\n";
		break;
	case 9:
		cout << "Wrzesien\n";
		cout << "30 dni\n";
		cout << "Slonecznie\n";
		break;
	case 10:
		cout << "Pazdziernik\n";
		cout << "31 dni\n";
		cout << "Pochmurno\n";
		break;
	case 11:
		cout << "Listopad\n";
		cout << "30 dni\n";
		cout << "Pochmurno\n";
		break;
	case 12:
		cout << "Grudzien\n";
		cout << "31 dni\n";
		cout << "Pochmurno\n";
		break;
	default:
		cout << "Wybrales liczbe spoza zakresu";
		break;
	
	}
		
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
