#include <iostream>
using namespace std;

int main()
{
    string str1;

    cout << "Enter name: ";
    getline(cin, str1);

    cout << "Original String and it's Length : " << str1 << " " << str1.length() << endl;

    str1.resize(10);

    cout << "New String and it's Length : " << str1 << " " << str1.length();
}