#include <iostream>

using namespace std;

int main() {

    int a, b, c;

    a = 5;
    b = 9;
    c = 0;

    if (a > b && c++) {

        a++;
    }

    cout << "a = " << a << "c = " << c << endl;

    return 0;
}