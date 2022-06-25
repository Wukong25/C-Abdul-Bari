#include <iostream>

using namespace std;

int main() {

    float basic_salary, perc_of_allow, Perc_of_deduc, net_salary;

    cout << "Enter Basic Salary : ";
    cin >> basic_salary;

    cout << "Enter Percentage of Allowances : ";
    cin >> perc_of_allow;

    cout << "Enter Percentage of Deductions : ";
    cin >> Perc_of_deduc;

    net_salary = basic_salary + basic_salary*perc_of_allow/100 - basic_salary*Perc_of_deduc/100;

    cout << "Net Salary : " << net_salary << endl;

    return 0;
}