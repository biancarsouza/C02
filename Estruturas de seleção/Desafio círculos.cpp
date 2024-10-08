#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double x1, y1, r1, x2, y2, r2, d, a, b, c;

    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

    d = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    if ((d >= (r1 + r2)) || (d <= abs(r1 - r2))) {
        cout << "0" << endl;
    } else {
        a = r1 * r1 * acos((pow(d, 2) + pow(r1, 2) - pow(r2, 2)) / (2 * d * r1));
        b = r2 * r2 * acos((pow(d, 2) + pow(r2, 2) - pow(r1, 2)) / (2 * d * r2));
        c = 0.5 * sqrt((-d + r1 + r2) * (d + r1 - r2) * (d - r1 + r2) * (d + r1 + r2));

        cout << fixed << setprecision(2);
        
        cout << a + b - c << endl;
    }

    return 0;
}