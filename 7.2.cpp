
#include <iostream>

using namespace std;
long long silnia(int n) {
	if (n < 2)
		return 1;
	else
		return n * silnia(n - 1);
}
void podzielnosc(int x) {
    if (x % 2 == 0) {
        cout << "2" << endl;
    }
    if (x % 3 == 0) {
        cout << "3" << endl;
    }
    if (x % 5 == 0) {
        cout << "5" << endl;
    }
    if (x % 11 == 0) {
        cout << "11" << endl;
    }
    else {
        cout << " ";
    }
}

int main()
{

	int n;
	cout << "Podaj liczbe: ";
	cin >> n;
	cout << "Silnia liczby: " << n << " wynosi: " << silnia(n) << endl;
	int x = silnia(n);
    

	cout << "Liczba jest podzielna przez: " << endl;
    podzielnosc(x);
   
}

