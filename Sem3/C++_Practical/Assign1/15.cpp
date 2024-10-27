#include <iostream>
using namespace std;
class pattern
{
public:
    void triangle(int a)
    {
        for (int i = 1; i <= 10; i++)
        {
            cout << a << "*" << i << "=" << (a * i) << endl;
        }
    }
};

int main()
{
    pattern obj;
    int a;
    cout << "enter no: ";
    cin >> a;
    obj.triangle(a);
}