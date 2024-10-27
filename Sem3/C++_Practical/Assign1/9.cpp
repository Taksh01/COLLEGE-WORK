#include <iostream>
using namespace std;

class check
{

public:
    void number()
    {
        for (int i = 1; i <= 10; i++)
        {
            cout << i << "*" << i << "=" << i * i << endl;
        }
    }
};

int main()
{

    check obj;

    obj.number();
}
