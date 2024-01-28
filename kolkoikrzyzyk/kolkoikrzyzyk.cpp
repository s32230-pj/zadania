#include <iostream>
#include <stdlib.h> 
using namespace std;

char gracz = 'Y';
char ostatnigracz = 'X';
char a1 = ' ', a2 = ' ', a3 = ' ', b1 = ' ', b2 = ' ', b3 = ' ', c1 = ' ', c2 = ' ', c3 = ' ';
char ostatniRuchGracza = ' ';
int zajetepola = 0;

void Plansza() {
    cout << " " << a1 << " | " << a2 << " | " << a3 << " " << endl;
    cout << "-----------" << endl;
    cout << " " << b1 << " | " << b2 << " | " << b3 << " " << endl;
    cout << "-----------" << endl;
    cout << " " << c1 << " | " << c2 << " | " << c3 << " " << endl;
}

bool CzyPoleWolne(char pole) {
    switch (pole) {
    case '1':
        return (a1 == ' ');
    case '2':
        return (a2 == ' ');
    case '3':
        return (a3 == ' ');
    case '4':
        return (b1 == ' ');
    case '5':
        return (b2 == ' ');
    case '6':
        return (b3 == ' ');
    case '7':
        return (c1 == ' ');
    case '8':
        return (c2 == ' ');
    case '9':
        return (c3 == ' ');
    default:
        return false;
    }
}

void WprowadzRuch(char pole) {
    ostatniRuchGracza = pole;
    switch (pole) {
    case '1':
        a1 = gracz;
        break;
    case '2':
        a2 = gracz;
        break;
    case '3':
        a3 = gracz;
        break;
    case '4':
        b1 = gracz;
        break;
    case '5':
        b2 = gracz;
        break;
    case '6':
        b3 = gracz;
        break;
    case '7':
        c1 = gracz;
        break;
    case '8':
        c2 = gracz;
        break;
    case '9':
        c3 = gracz;
        break;
    default:
        cout << "Bledny ruch." << endl;
        break;
    }
}

void ZmienGracza() {
    gracz = (gracz == 'Y') ? 'X' : 'Y';
    ostatnigracz = (ostatnigracz == 'Y') ? 'X' : 'Y';
}

int main() {
    cout << "Kolko i krzyzyk" << endl;

    for (int i = 0; i < 9; ++i) {
        system("CLS");
        cout << "Kolko i krzyzyk" << endl;
        cout << "Ostatni ruch gracza " << ostatnigracz << " na polu " << ostatniRuchGracza << endl;
        Plansza();
        cout << "Ruch gracza " << gracz << ": ";
        char ruch;
        cin >> ruch;

        if (CzyPoleWolne(ruch)) {
            WprowadzRuch(ruch);
            ZmienGracza();
            ++zajetepola;
        }
        else {
            cout << "To pole jest już zajęte. Spróbuj ponownie." << endl;
            --i;
        }

        if ((a1 == 'X' && a2 == 'X' && a3 == 'X') ||
            (b1 == 'X' && b2 == 'X' && b3 == 'X') ||
            (c1 == 'X' && c2 == 'X' && c3 == 'X') ||
            (a1 == 'X' && b1 == 'X' && c1 == 'X') ||
            (a2 == 'X' && b2 == 'X' && c2 == 'X') ||
            (a3 == 'X' && b3 == 'X' && c3 == 'X') ||
            (a1 == 'X' && b2 == 'X' && c3 == 'X') ||
            (a3 == 'X' && b2 == 'X' && c1 == 'X')) {
            system("CLS");
            cout << "Kolko i krzyzyk" << endl;
            cout << "Ostatni ruch gracza " << ostatnigracz << " na polu " << ostatniRuchGracza << endl;
            Plansza();
            cout << "Wygrywa X" << endl;
            break;
        }
        if ((a1 == 'Y' && a2 == 'Y' && a3 == 'Y') ||
            (b1 == 'Y' && b2 == 'Y' && b3 == 'Y') ||
            (c1 == 'Y' && c2 == 'Y' && c3 == 'Y') ||
            (a1 == 'Y' && b1 == 'Y' && c1 == 'Y') ||
            (a2 == 'Y' && b2 == 'Y' && c2 == 'Y') ||
            (a3 == 'Y' && b3 == 'Y' && c3 == 'Y') ||
            (a1 == 'Y' && b2 == 'Y' && c3 == 'Y') ||
            (a3 == 'Y' && b2 == 'Y' && c1 == 'Y')) {
            system("CLS");
            cout << "Kolko i krzyzyk" << endl;
            cout << "Ostatni ruch gracza " << ostatnigracz << " na polu " << ostatniRuchGracza << endl;
            Plansza();
            cout << "Wygrywa Y" << endl;
            break;
        }
        if (zajetepola == 9) {
            system("CLS");
            cout << "Kolko i krzyzyk" << endl;
            cout << "Ostatni ruch gracza " << ostatnigracz << " na polu " << ostatniRuchGracza << endl;
            Plansza();
            cout << "Remis" << endl;
            break;
        }
    }

    return 0;
}