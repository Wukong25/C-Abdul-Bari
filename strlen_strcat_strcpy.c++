#include <iostream>
#include <cstring>

using namespace std;

int main() {

    char str1[20], str2[20];

    cout << "Enter a string : ";
    cin.getline(str1, 20);

    cout << strlen(str1) << endl;

    cout << "Enter a string again : ";
    cin.getline(str2, 20);

    strcat(str2, str1);

    char str3[20];

    strcpy(str3, str2);

    cout << "Legendary " << str3 << endl;

    char str5[20], str6[20];

    strncat(str5, str2, 3);

    strncpy(str6, str2, 3);

    cout << str5 << " " <<  str6 << " " <<  "Mahadev" << endl;

    return 0;
}