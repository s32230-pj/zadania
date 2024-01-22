

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Podaj n: ";
    cin >> n;
    int liczba = 0;
    for (int i = 1; i <= n; ++i) {
        if (i % 5 == 0 && i % 3 != 0) {
            liczba++;
        }
        
    }
    cout << "Liczba liczb naturalnych podzielnych przez 5, ale niepodzielnych przez 3 nie wiekszych od: " << n << " wynosi: " << liczba;
}

