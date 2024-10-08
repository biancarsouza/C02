#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    float n1, n2, comeco, final, primeiro = 0;

    cin >> n1 >> n2;

    for(float i = n1; i <= n2; i += 0.1) {
        if((sin(i) * cos(i)) > 0) {
            if(primeiro == 0) {
                comeco = i;
                primeiro++;
            }
            
            final = i;
        }
    }
    
    cout << fixed << setprecision(1);
    
    cout << comeco << " a " << final << endl;

    return 0;
}