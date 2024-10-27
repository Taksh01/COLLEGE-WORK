#include <iostream>
using namespace std;

int sum(int no)
{
    if (no != 0)
    {
        return no + sum(no - 1);
    }

    else
    {
        return no;
    }
}
int main()
{
    int no;
    cout << "enter no till whose you want sum: ";
    cin >> no;
    int result = sum(no);
    cout << "The sum is: " << result;
}