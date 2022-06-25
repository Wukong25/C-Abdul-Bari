#include <iostream>

using namespace std;

int main() {

    int A[10] = {1, 34, 55, 60, 61, 69, 70, 78, 90, 111};

    int l = 0, h = 9, key = 0, mid = 0;

    cout << "Enter the number you want to search : ";
    cin >> key;

    while (l <= h) {

        mid = (l+h)/2;

        if (key == A[mid]) {

            cout << "found at " << mid << endl;
            return 0;
        }
        else if (key > A[mid]) {

            l = mid + 1;
        }
        else {

            h = mid - 1;
        }
    }

    cout << " Didn't found" << endl;

    return 0;
}