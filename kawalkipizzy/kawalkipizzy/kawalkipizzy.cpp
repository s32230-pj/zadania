// kawalkipizzy.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int iloscp,kawalki;
	int uczestnicy,podzial;
	int organizator2;
	int organizator;
	int podzialnieparzysty;
	cout << "Podaj ilosc pizz: "; 
	cin >> iloscp; 
	kawalki = iloscp * 8;
	cout << "Ilosc kawalkow (przyjmujac ze kazda pizza ma ich osiem): " << kawalki << endl; 
	cout << "Podaj ilosc uczestnikow: ";
	cin >> uczestnicy;
	podzial = (kawalki / uczestnicy);
	organizator = (podzial % uczestnicy);
	podzialnieparzysty = ((kawalki - organizator) / uczestnicy);
	organizator2 = (kawalki - organizator);
	if (podzial * uczestnicy == kawalki)
		cout << "Kazdy uczestnik dostaje: " << podzial << "kawa³kow" << endl;
	else if (podzial * uczestnicy != kawalki)
		cout << "Kazdy uczestnik dostaje: " << podzialnieparzysty << "kawalkow, a dla organizotora zosta³o ich" << organizator ;





}
	

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
