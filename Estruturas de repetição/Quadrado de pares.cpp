#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int n;

    cin >> n;

    cout << fixed << setprecision(0);

    for(int i = 2; i <= n; i += 2) {
        cout << i << "^2 = " << pow(i, 2) << endl;
    }

    return 0;
}