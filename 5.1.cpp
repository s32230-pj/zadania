


#include <iostream>
#include <vector>

using namespace std;


pair<double, int> Max(const vector<double>& wektor) {
    double maksimum = wektor[0];
    int id = 0;

    for (int i = 1; i < wektor.size(); ++i) {
        if (wektor[i] > maksimum) {
            maksimum = wektor[i];
            id = i;
        }
    }

    return make_pair(maksimum, id);
}

int main() {

    int liczbaElementow;
    cout << "Podaj rozmiar wektora: ";
    cin >> liczbaElementow;
    vector<double> wektor;
    for (int i = 0; i < liczbaElementow; ++i) {
        double element;
        cout << "Podaj " << i + 1 << " element wektora:";
        cin >> element;
        wektor.push_back(element);
    }

    auto wynik = Max(wektor);
    double maksimum = wynik.first;
    int indeksMaksimum = wynik.second;
    cout << "Najwyzsza wartosc w wektorze: " << maksimum << "ID:" << indeksMaksimum << endl;
    return 0;
}


