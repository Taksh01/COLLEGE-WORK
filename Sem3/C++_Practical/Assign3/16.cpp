#include <iostream>
using namespace std;

int main()
{
    int size, number, index;
    string str1;

    cout << "Enter string: ";
    cin >> str1;

    cout << "Enter size of new string: ";
    cin >> size;
    char arr[size];

    cout << "Enter from where you need to copy i.e. index: ";
    cin >> index;

    str1.copy(arr, size, index);
    arr[size] = '\0';

    cout << arr;
}