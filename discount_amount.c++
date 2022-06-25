#include <iostream>

using namespace std;

int main() {

    int TotalBillAmount = 0, DisAmount = 0;

    cout << "Enter total bill amount : ";
    cin >> TotalBillAmount;



    if (TotalBillAmount < 100) {
        
        DisAmount = TotalBillAmount;

        cout << "Your discount is = 0%" << endl << "hence your discounted total amount is = " << DisAmount << endl;
    }
    else if (TotalBillAmount >= 100 && TotalBillAmount < 500) {

        DisAmount = TotalBillAmount-(TotalBillAmount*10/100);

        cout << "Your discount is = 10%" << endl << "hence your discounted total amount is = " << DisAmount << endl;
    }
    else {

        DisAmount = TotalBillAmount-(TotalBillAmount*20/100);

        cout << "Your discount is = 20%" << endl << "hence your discounted total amount is = " << DisAmount << endl;
    }

    return 0;
}