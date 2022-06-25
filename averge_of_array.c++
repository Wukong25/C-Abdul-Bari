#include <iostream>

using namespace std;

int main() {

    int arr[100] , n = 0;
    float sum = 0;

    cout << " Enter the size of the array : " ;
    cin >> n;

    for (int i = 0; i < n; i++) {

        cout << "Enter a number : ";
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {

        sum += arr[i];
    }

    sum /= n;

    for (int i = 0; i < n; i++) {

        cout << arr[i] << " ";
    }

    cout << endl;

    cout << "Averge of the above numbers : " << sum << endl; 

    return 0;
}