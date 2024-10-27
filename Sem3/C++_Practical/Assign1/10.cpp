#include <iostream>
using namespace std;

class check
{

public:
    void number(int a, int b)
    {
        if (a == b)
        {
            cout << "both  are equal";
        }
        else
        {
            cout << "both  are not equal";
        }
    }
};

int main()
{

    check obj;
    int a, b;
    cout << "enter no: ";
    cin >> a;
    cout << "enter no: ";
    cin >> b;

    obj.number(a, b);
}
