#include <iostream>
using namespace std;

void Palin()
{
    int a, sum = 0, rem, ogNo;
    cout << "Enter a no: ";
    cin >> a;

    ogNo = a;

    while (a > 0)
    {
        rem = a % 10;
        sum = sum * 10 + rem;
        a = a / 10;
    }

    if (ogNo == sum)
    {
        cout << "Yes palindrome";
    }

    else
    {
        cout << "No, Not a palindrome";
    }
}

int main()
{
    Palin();
}