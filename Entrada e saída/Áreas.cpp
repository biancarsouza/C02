#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    float A, B, C;
    float areaTriangulo, areaCirculo, areaTrapezio, areaQuadrado, areaRetangulo;

    cin >> A >> B >> C;

    areaTriangulo = (A * C) / 2;
    areaCirculo = 3.14159 * pow(C, 2);
    areaTrapezio = ((A + B) * C) / 2;
    areaQuadrado = pow(B, 2);
    areaRetangulo = A * B;

    cout << fixed << setprecision(3);

    cout << "TRIANGULO: " << areaTriangulo << endl;
    cout << "CIRCULO: " << areaCirculo << endl;
    cout << "TRAPEZIO: " << areaTrapezio << endl;
    cout << "QUADRADO: " << areaQuadrado << endl;
    cout << "RETANGULO: " << areaRetangulo << endl;

    return 0;
}