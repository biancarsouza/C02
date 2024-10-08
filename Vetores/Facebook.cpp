#include <iostream>

using namespace std;

int main() {
    int n, contatos[999], menor = 999999, maior = -1;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> contatos[i];
    }

    for(int i = 0; i < n; i++) {
        if(contatos[i] < menor) {
            menor = contatos[i];
        }

        if(contatos[i] > maior) {
            maior = contatos[i];
        }
    }

    cout << "Menor numero de contatos: " << menor << endl;
    cout << "Maior numero de contatos: " << maior << endl;

    return 0;
}