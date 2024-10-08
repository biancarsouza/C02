#include <iostream>

using namespace std;

int main() {
    int n, videos[999], mais = 0, menos = 0;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> videos[i];
    }

    for(int i = 0; i < n; i++) {
        if(videos[i] >= 10000000) {
            mais++;
        } else {
            menos++;
        }
    }

    cout << mais << " video(s) com mais de 10M views" << endl;
    cout << menos << " video(s) com menos de 10M views" << endl;

    return 0;
}