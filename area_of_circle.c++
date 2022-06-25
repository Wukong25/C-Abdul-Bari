#include <iostream>

using namespace std;

int main() {

    const int pi = 3.14;
    int radius = 0;
    float area = 0;

    cout << "Enter the radius of the circle : ";
    cin >> radius;

    area = pi* (float) radius*radius;

    cout << "Area = " << area << " unit sq" << endl;

    return 0;
}