#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double pi = 3.14159;

int main() {
    double X, M, S, F;

    cin >> X >> M >> S;

    F = (1 / sqrt(2 * pi * pow(S, 2))) * exp(-(pow((X - M), 2) / (2 * pow(S, 2))));

    cout << fixed << setprecision(4);

    cout << F << endl;

    return 0;
}