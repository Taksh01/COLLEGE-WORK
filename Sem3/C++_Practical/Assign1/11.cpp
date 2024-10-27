#include <iostream>
using namespace std;

class check
{

public:
    void number()
    {
        int a, b, c, d, e, f;
        cout << "enter sub1: ";
        cin >> a;
        cout << "enter sub2: ";
        cin >> b;
        cout << "enter sub3: ";
        cin >> c;
        cout << "enter sub4: ";
        cin >> d;
        cout << "enter sub5: ";
        cin >> e;
        cout << "enter sub6: ";
        cin >> f;

        cout << " total is: " << a + b + c + d + e + f;
        cout << "\n percentage is: " << ((a + b + c + d + e + f) / 600.00) * 100;
    }
};

int main()
{
    check obj;
    obj.number();
}