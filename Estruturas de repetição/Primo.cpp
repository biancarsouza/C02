#include <iostream>

using namespace std;

int main() {
    int n, div = 0, i = 1;

    cin >> n;

    while(i <= n) {
        if(n % i == 0) {
            div++;
        }

        i++;
    }

    if(div == 2) {
        cout << "primo" << endl;
    } else {
        cout << "nao e primo" << endl;
    }

    return 0;
}