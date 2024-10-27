#include <iostream>
using namespace std;

class check
{

public:
    void number(int a, int b)
    {
        a > b ? cout << "a is greater" : cout << "b is greater";
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

    obj.number(a, b);
}
