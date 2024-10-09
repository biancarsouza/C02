#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    int n;
    string nome;
    double n1, n2, n3, n4, media;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin.ignore();

        getline(cin >> ws, nome);
        cin >> n1 >> n2 >> n3 >> n4;

        media = (n1 + (2 * n2) + (3 * n3) + (4 * n4)) / 10;

        cout << fixed << setprecision(2);

        cout << nome << ": " << media << endl;
    }

    return 0;
}