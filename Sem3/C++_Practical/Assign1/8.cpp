#include <iostream>
using namespace std;

class check
{

public:
    void number(int a, int b, int c)
    {
        if (a > b && a > c)
        {
            cout << "a is greatest no.";
        }

        else if (b > a && b > c)
        {
            cout << "b is greatest no.";
        }
        else if (c > a && c > b)
        {
            cout << "c is greatest no.";
        }

        else
        {
            cout << "all are equal";
        }
    }
};

int main()
{

    check obj;
    int a, b, c;
    cout << "enter no: ";
    cin >> a;
    cout << "enter no: ";
    cin >> b;
    cout << "enter no: ";
    cin >> c;
    obj.number(a, b, c);
}
