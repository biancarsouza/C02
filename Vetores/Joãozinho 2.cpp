#include <iostream>

using namespace std;

int main() {
    int n, numeros1[999], numeros2[999];
    double resultados[999];
    char operacoes[999];


    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> numeros1[i];
    }

    for(int i = 0; i < n; i++) {
        cin >> numeros2[i];
    }

    for(int i = 0; i < n; i++) {
        cin >> operacoes[i];
    }

    for(int i = 0; i < n; i++) {
        if(operacoes[i] == '+') {
            resultados[i] = numeros1[i] + numeros2[i];
        } else if(operacoes[i] == '-') {
            resultados[i] = numeros1[i] - numeros2[i];
        } else if(operacoes[i] == '*') {
            resultados[i] = numeros1[i] * numeros2[i];
        } else if(operacoes[i] == '/') {
            resultados[i] = double(numeros1[i]) / numeros2[i];
        }
    }

    for(int i = 0; i < n; i++) {
        cout << numeros1[i] << " " << operacoes[i] << " " << numeros2[i] << " = " << resultados[i] << endl;
    }

    return 0;
}