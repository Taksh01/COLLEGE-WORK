#include <iostream>
using namespace std;

class prime
{
public:
    void checker(int a)
    {
        int cnt = 0;
        for (int i = 1; i <= a; i++)
        {
            if (a % i == 0)
            {
                cnt++;
            }
        }

        if (cnt == 2)
        {
            cout << a << "is a prime no " << endl;
        }
        else
        {
            cout << a << "is  not a prime no " << endl;
        }
    }
};

int main()
{
    prime obj;
    int a;
    cout << "Enter a: ";
    cin >> a;
    obj.checker(a);
}