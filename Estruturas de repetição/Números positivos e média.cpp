#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int x, positivos = 0, soma = 0;

    for(int i = 0; i < 6; i++) {
        cin >> x;

        if(x > 0) {
            positivos++;
            soma += x;
        }
    }

    cout << fixed << setprecision(1);

    cout << positivos << " valores positivos" << endl;
    cout << soma / float(positivos) << endl;

    return 0;
}