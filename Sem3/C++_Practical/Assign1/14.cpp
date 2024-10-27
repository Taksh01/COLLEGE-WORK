#include <iostream>
using namespace std;
class pattern
{
public:
    void triangle()
    {
        for (int i = 1; i <= 5; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }
};

int main()
{
    pattern obj;
    obj.triangle();
}