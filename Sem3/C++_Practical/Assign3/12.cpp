#include <iostream>
using namespace std;

int main()
{
    string name, surname;

    cout << "Enter name: ";
    getline(cin, name);

    cout << "Enter surname: ";
    getline(cin, surname);

    cout << "full name is: ";
    cout << name + " " + surname;

    cout << "\n full name using append: ";
    string fname = name.append(surname);
    cout << fname;
}