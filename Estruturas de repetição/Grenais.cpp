#include <iostream>

using namespace std;

int main() {
    int gremio, inter, grenais = 0, vitoriasGremio = 0, vitoriasInter = 0, empates = 0, op = 1;

    while(op == 1) {
        cin >> inter >> gremio;

        grenais++;

        if(inter > gremio) {
            vitoriasInter++;
        } else if(gremio > inter) {
            vitoriasGremio++;
        } else {
            empates++;
        }

        cout << "Novo grenal (1-sim 2-nao)" << endl;

        cin >> op;

        while(op != 1 && op != 2) {
            cout << "Novo grenal (1-sim 2-nao)" << endl;

            cin >> op;
        }
    }

    cout << grenais << " grenais" << endl;
    cout << "Inter:" << vitoriasInter << endl;
    cout << "Gremio:" << vitoriasGremio << endl;
    cout << "Empates:" << empates << endl;

    if(vitoriasInter > vitoriasGremio) {
        cout << "Inter venceu mais" << endl;
    } else if(vitoriasGremio > vitoriasInter) {
        cout << "Gremio venceu mais" << endl;
    } else {
        cout << "Nao houve vencedor" << endl;
    }

    return 0;
}