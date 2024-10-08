#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double capital, taxa, tempo, montante, lucro;

    cin >> capital >> taxa >> tempo;

    taxa /= 100;
    montante = capital * pow((1 + taxa), tempo);
    lucro = montante - capital;

    cout << fixed << setprecision(2);
    
    cout << "LUCRO = " << lucro << endl;

    return 0;
}