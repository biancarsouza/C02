#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int codigo, quantidade;
    float total;

    cin >> codigo >> quantidade;

    switch(codigo) {
        case 1:
            total = 4.00 * quantidade;
            break;
        case 2:
            total = 4.50 * quantidade;
            break;
        case 3:
            total = 5.00 * quantidade;
            break;
        case 4:
            total = 2.00 * quantidade;
            break;
        case 5:
            total = 1.50 * quantidade;
            break;
    }

    cout << fixed << setprecision(2);

    cout << "Total: R$ " << total << endl;

    return 0;
}