#include <iostream>
using namespace std;

class one
{
private:
    int a = 10;
    friend class two;
};

class two
{
    one obj;

public:
    void check()
    {

        cout << obj.a;
    }
};

int main()
{
    two obj2;
    obj2.check();
}