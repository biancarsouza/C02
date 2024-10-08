#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double salario, imposto;

    cin >> salario;

    cout << fixed << setprecision(2);

    if(salario >= 0 && salario <= 2000) {
        cout << "Isento" << endl;
    } else if (salario >= 2000 && salario <= 3000) {
        imposto = (salario - 2000) * 0.08;
        cout << "R$ " << imposto << endl;
    } else if (salario >= 3000 && salario <= 4500) {
        imposto = (salario - 3000) * 0.18 + 80;
        cout << "R$ " << imposto << endl;
    } else if (salario > 4500) {
        imposto = (salario - 4500) * 0.28 + 350;
        cout << "R$ " << imposto << endl;
    }

    return 0;
}