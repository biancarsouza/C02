#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;
    double h;

    cin >> n;

    for(int i = 1; i <= n; i++) {
        h += 1.0 / i;
    }

    cout << fixed << setprecision(4);

    cout << h << endl;

    return 0;
}