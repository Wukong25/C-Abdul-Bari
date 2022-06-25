#include <iostream>
 
using namespace std;

int main() {

    char s[20];

    cout << "Enter your name : ";
    cin >> s;

    cout << "Welcome " << s << endl;

    cin.ignore();

    cout << "Enter your name again : ";
    cin.get(s,20);

    cout << "Welcome again " << s << endl;

    cin.ignore();

    cout << "Actually there's some problem in reading your name, please can enter it again : ";
    cin.get(s,20);

    cout << "Welcome " << s << " and sorry for the inconvnience caused.";


    cin.ignore();

    cout << "This is for the last time, please enter your name : ";
    cin.getline(s,20);

    cout << "Welcome sir Harshvardhan " << s << " opps!!";

    cout << endl;

    return 0;
}