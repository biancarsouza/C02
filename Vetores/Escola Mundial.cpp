#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n, acima = 0, abaixo = 0;
    double notas[999], media = 0;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> notas[i];
    }

    for(int i = 0; i < n; i++) {
        media += notas[i];
    }

    media /= n;

    for(int i = 0; i < n; i++) {
        if(notas[i] >= media) {
            acima++;
        } else {
            abaixo++;
        }
    }

    cout << fixed << setprecision(2);

    cout << "Media da turma: " << media << endl;
    cout << "Alunos com nota acima da media: " << acima << endl;
    cout << "Alunos com nota abaixo da media: " << abaixo << endl;

    return 0;
}