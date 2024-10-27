#include <iostream>
using namespace std;

int main()
{
    string str1;

    cout << "Enter name: ";
    getline(cin, str1);

    cout << "Length of String is: " << str1.length();
}