#include <iostream>

using namespace std;

int main() {
    int n, votos[999], gostou = 0, naoGostou = 0;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> votos[i];

        while(votos[i] != 1 && votos[i] != -1) {
            cin >> votos[i];
        }
    }

    for(int i = 0; i < n; i++) {
        if(votos[i] == 1) {
            gostou++;
        } else {
            naoGostou++;
        }
    }

    if(gostou > naoGostou) {
        cout << "A maioria gostou" << endl;
    } else if (gostou < naoGostou) {
        cout << "A maioria nao gostou" << endl;
    } else {
        cout << "Deu empate" << endl;
    }

    return 0;
}