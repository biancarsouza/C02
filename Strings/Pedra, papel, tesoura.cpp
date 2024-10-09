#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    string jogadorA, jogadorB;

    cin >> n;

    for(int i = 0; i < n; i++) {
        getline(cin >> ws, jogadorA);
        getline(cin >> ws, jogadorB);

        if(jogadorA == "pedra") {
            if(jogadorB == "pedra") {
                cout << "Empate" << endl;
            } else if(jogadorB == "papel") {
                cout << "Jogador B" << endl;
            } else {
                cout << "Jogador A" << endl;
            }
        } else if(jogadorA == "papel") {
            if(jogadorB == "pedra") {
                cout << "Jogador A" << endl;
            } else if(jogadorB == "papel") {
                cout << "Empate" << endl;
            } else {
                cout << "Jogador B" << endl;
            }
        } else {
            if(jogadorB == "pedra") {
                cout << "Jogador B" << endl;
            } else if(jogadorB == "papel") {
                cout << "Jogador A" << endl;
            } else {
                cout << "Empate" << endl;
            }
        }
    }

    return 0;
}