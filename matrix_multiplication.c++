#include <iostream>

using namespace std;

int main() {

    int A[2][3] = {1, 3, 5, 2, 5, 7};
    int B[3][3] = {5, 7, 2, 2, 6, 9, 22, 0, 8};
    int C[2][3];


    for (int i = 0; i < 2; i++) {

        for (int j = 0; j < 3; j++) {

            for (int k = 0; k < 3; k++) {

                C[i][j] = A[i][k]*B[j][k];
            }
        }
    }

    for (auto& x : C) {

        for (auto& y : x) {

            cout << y << " ";
        }

        cout << endl;
    }
    
}