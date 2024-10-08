#include <iostream>

using namespace std;

int main() {
    int i, j, comprimento = 1, maiorComprimento = 0, aux, n, k;

    cin >> i >> j;
    
    int iOriginal = i, jOriginal = j;
    
    if(i > j) {
        aux = i;
        i = j;
        j = aux;
    }

    for(k = i; k <= j; k++) {
        n = k;
        comprimento = 1;
        
        while(n != 1) {
            if(n % 2 == 0) {
                n /= 2;
            } else {
                n = 3 * n + 1;
            }
            
            comprimento++;
        }
        
        if(comprimento > maiorComprimento) {
            maiorComprimento = comprimento;
        }
    }

    cout << iOriginal << " " << jOriginal << " " << maiorComprimento << endl;

    return 0;
}