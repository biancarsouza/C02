#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float valorCompra, dinheiro, troco;

    cin >> dinheiro >> valorCompra;

    troco = dinheiro - valorCompra;

    cout << fixed << setprecision(2);

    cout << "TROCO = " << troco << endl;

    return 0;
}