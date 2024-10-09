#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, idade;
    string nome;
    bool maior = false;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin.ignore();

        getline(cin >> ws, nome);
        cin >> idade;

        if(idade >= 18) {
            cout << nome << " " << idade << endl;

            maior = true;
        }
    }

    if(!maior) {
        cout << "Nenhum jogador com 18 anos ou mais" << endl;
    }

    return 0;
}