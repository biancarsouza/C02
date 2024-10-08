#include <iostream>

using namespace std;

int main() {
    int numeros[999], n = 0, x, posicao = -1, aux;

    cin >> aux;

    while(aux != 0) {
        numeros[n] = aux;
        n++;
        
        cin >> aux;
    }

    cin >> x;

    for(int i = 0; i < n; i++) {
        if(numeros[i] == x) {
            posicao = i;
        }
    }

    if(posicao != -1) {
        cout << "Elemento " << x << " encontrado na posicao " << posicao << endl;
    } else {
        cout << "Elemento " << x << " nao foi encontrado" << endl;
    }

    return 0;
}