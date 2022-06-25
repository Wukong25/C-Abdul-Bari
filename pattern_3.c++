#include <iostream>
#define SIZE 10

using namespace std;

int main() {

    for (int i = 0; i <= SIZE; i++) {

        for (int j = i; j < SIZE; j++) {

                cout << " ";
        }

        for (int k = 0; k < i; k++) {

                cout << '*';
        }

        cout << endl;
    }
}