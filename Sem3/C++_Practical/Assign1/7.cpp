#include <iostream>
using namespace std;

class check
{

public:
    void number(int r)
    {
        if (r != 0)
        {
            if (r > 0)
            {
                cout << "Positive No.";
            }
            else
            {
                cout << "Negative  No.";
            }
        }

        else
        {
            cout << "Number is 0";
        }
    }
};

int main()
{

    check obj;
    int r;
    cout << "enter no: ";
    cin >> r;
    obj.number(r);
}
