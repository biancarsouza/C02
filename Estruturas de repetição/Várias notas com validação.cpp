#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double nota, media, op = 1;

    while(op == 1) {
        cin >> nota;

        while(nota < 0 || nota > 10) {
            cout << "nota invalida" << endl;

            cin >> nota;
        }

        media = nota;

        cin >> nota;

        while(nota < 0 || nota > 10) {
            cout << "nota invalida" << endl;

            cin >> nota;
        }

        media += nota;

        cout << fixed << setprecision(2);

        cout << "media = " << media / 2 << endl;
        cout << "novo calculo (1-sim 2-nao)" << endl;

        cin >> op;

        while(op != 1 && op != 2) {
            cout << "novo calculo (1-sim 2-nao)" << endl;

            cin >> op;
        }
    }

    return 0;
}