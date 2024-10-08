#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double nota, media;

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

    return 0;
}