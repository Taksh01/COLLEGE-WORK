#include <iostream>
using namespace std;

class convert
{

public:
    int change(int days)
    {
        int years;
        years = days / 365;
        return years;
    }

    int ready(int days)
    {
        int years;
        years = days / 7;
        return years;
    }
};

int main()
{
    convert obj1;
    int r, re, days;
    cout << "Enter Days: ";
    cin >> days;

    re = obj1.ready(days);
    r = obj1.change(days);
    cout << "Total Years are: " << r;
    cout << "\n Total Weeks are: " << re;
}