#include <iostream>
#define SIZE 10

using namespace std;

int main() {

    for (int i = 0; i < SIZE; i++) {

        for (int j = 0; j < i; j++) {

                cout << ' ';
        }

        for (int k = i; k < SIZE; k++) {

            cout << '*';
        }

        cout << endl;
    }
    
    return 0;
}