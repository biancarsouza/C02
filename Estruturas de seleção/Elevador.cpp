#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int L, C, R1, R2, distanciaX, distanciaY;
    double distancia;

    cin >> L >> C >> R1 >> R2;

    if ((R1 * 2) <= L && (R1 * 2) <= C && (R2 * 2) <= L && (R2 * 2) <= C) {
        distanciaX = (L - R1 - R2);
        distanciaY = (C - R1 - R2);
        distancia = sqrt((distanciaX * distanciaX) + (distanciaY * distanciaY));
        
        if (distancia >= (R1 + R2)) {
            cout << "S" << endl;
        } else {
            cout << "N" << endl;
        }
    } else {
        cout << "N" << endl;
    }

    return 0;
}
