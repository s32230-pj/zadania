
using namespace std;
#include <iostream>

int main()
{
	int x;
	cout << "Podaj liczbe: ";
	cin >> x;
	if (x % 2 == 0)
		cout << "Liczba " << x << " jest parzysta";

	else
		cout << "Liczba " << x << " jest nieparzysta";
	return 0;
	
}

