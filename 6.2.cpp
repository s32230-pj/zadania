

#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Uczen {
    string imie;
    int oceny[4];
};

int main() {
    const int liczbaUczniow = 6;
    const int przedmioty = 4;

    vector<Uczen> uczniowie(liczbaUczniow);

    for (int i = 0; i < liczbaUczniow; ++i) {
        cout << "Podaj imie ucznia " << i + 1 << ": ";
        cin >> uczniowie[i].imie;
        cout << "Podaj ocene z informatyki dla ucznia " << uczniowie[i].imie << ": ";
        cin >> uczniowie[i].oceny[0];
        cout << "Podaj ocene z matematyki dla ucznia " << uczniowie[i].imie << ": ";
        cin >> uczniowie[i].oceny[1];
        cout << "Podaj ocene z biologii dla ucznia " << uczniowie[i].imie << ": ";
        cin >> uczniowie[i].oceny[2];
        cout << "Podaj ocene z jezyka polskiego dla ucznia " << uczniowie[i].imie << ": ";
        cin >> uczniowie[i].oceny[3];
    }

    int liczbaZapytan;
        cout << "Podaj liczbe zapytan: ";
        cin >> liczbaZapytan;

    for (int i = 0; i < liczbaZapytan; i++) {
        int uczenId, przedmiotId;


        cout << "Podaj numer ucznia (1-6)";
        cin >> uczenId;

        if (uczenId < 1 || uczenId > przedmioty) {
            cout << "Bledny numer ucznia." << endl;
            continue;
        }

        cout << "Podaj numer przedmiotu (1-4): ";
        cin >> przedmiotId;

        if (przedmiotId < 1 || przedmiotId > przedmioty) {
            cout << "Bledny numer przedmiotu." << endl;
            continue;
        }

        cout << "Ocena ucznia " << uczniowie[uczenId - 1].imie
            << " z przedmiotu " << uczenId << " wynosi: "
            << uczniowie[uczenId - 1].oceny[przedmiotId - 1] << endl;
    }
    
    return 0;
}

