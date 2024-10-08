#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int d, m, a, n, g, f, delta, ds, divInt;
    double divDouble;

    cin >> d >> m >> a;

    if(m <= 2) {
        g = a - 1;
        f = m + 13;
    } else {
        g = a;
        f = m + 1;
    }

    n = int(365.25 * g) + int(30.6 * f) - 621049 + d;

    if(n < 36523) {
        delta = 2;
    } else if(n < 73048) {
        delta = 1;
    } else {
        delta = 0;
    }

    divDouble = n / 7.0;
    divInt = n / 7;
    ds = round((divDouble - divInt) * 7) + delta + 1;

    switch (ds) {
        case 1:
            cout << "domingo" << endl;
            break;
        case 2:
            cout << "segunda-feira" << endl;
            break;
        case 3:
            cout << "terca-feira" << endl;
            break;
        case 4:
            cout << "quarta-feira" << endl;
            break;
        case 5:
            cout << "quinta-feira" << endl;
            break;
        case 6:
            cout << "sexta-feira" << endl;
            break;
        case 7:
            cout << "sabado" << endl;
            break;
    }

    return 0;
}