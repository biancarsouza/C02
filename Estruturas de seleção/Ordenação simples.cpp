#include <iostream>

using namespace std;

int main () {
    int X, Y, Z;

    cin >> X >> Y >> Z;
    
    if (X < Y && X < Z) {
        cout << X << endl;

        if (Y < Z)
        {
            cout << Y << endl;
            cout << Z << endl;
        } else {
            cout << Z << endl;
            cout << Y << endl;
        }
    } else if (Y < X && Y < Z) {
        cout << Y << endl;

        if (X < Z) {
            cout << X << endl;
            cout << Z << endl;
        } else {
            cout << Z << endl;
            cout << X << endl;
        }
    } else if  (Z < X && Z < Y) {
        cout << Z << endl;

        if (X < Y)  {
            cout << X << endl;
            cout << Y << endl;
        } else {
            cout << Y << endl;
            cout << X << endl;
        }
    } else {
        cout << X << endl;
        cout << Y << endl;
        cout << Z << endl;
    }

    cout << endl;

    cout << X << endl;
    cout << Y << endl;
    cout << Z << endl;
    
    return 0;
}