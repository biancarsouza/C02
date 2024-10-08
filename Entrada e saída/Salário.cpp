#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int numero, horas;
    float valorHora, salario;

    cin >> numero >> horas >> valorHora;

    salario = horas * valorHora;

    cout << "NUMBER = " << numero << endl;

    cout << fixed << setprecision(2);

    cout << "SALARY = U$ " << salario << endl;

    return 0;
}