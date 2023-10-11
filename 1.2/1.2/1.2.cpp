
using namespace std;
#include <iostream>

int main()
{
	int x;
	cout << "Podaj liczbe: ";
	cin >> x;
	if (x >= 1)
		cout << "Liczba " << x << " dodatnia";
	else if (x == 0)
		cout << "Liczba " << x << " jest zerem";
	else
		cout << "Liczba " << x << " jest ujemna";
	return 0;

}

