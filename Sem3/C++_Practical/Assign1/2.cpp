#include <iostream>
using namespace std;

class Swap
{

public:
    void change(int a, int b)
    {

        cout << "\n Before Swap: " << "\n a = " << a << " b = " << b;

        int swap;
        swap = a;
        a = b;
        b = swap;

        cout << "\n After Swap: " << "\n a = " << a << " b = " << b;
    }
};

int main()
{

    Swap obj;

    obj.change(10, 5);
}
