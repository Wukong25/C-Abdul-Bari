#include <iostream>

using namespace std;

int main() {

    int * p;
    p = new int[10];

    cout << "Enter any 10 random numbers :- " << endl;
    
    for (int i = 0; i < 10; i++) {

        cout << "num " << i << " = ";
        cin >> p[i];
    }

    cout << " Numbers that you have entered :- " << endl;

    for (int i = 0; i < 10; i++) {

        cout << p[i] << " ";
    }

    cout << endl;

    delete []p;

    return 0;
}