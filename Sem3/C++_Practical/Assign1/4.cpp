#include <iostream>
using namespace std;

class cal
{

public:
    int income()
    {
        int sal;
        cout << "Enter salary: ";
        cin >> sal;
        int incomeTax = sal * (10.0 / 100.0);
        return incomeTax;
    }

    int net(int sal)
    {

        int incomeTax = sal * (10.0 / 100.0);
        int netSalary = sal - incomeTax;

        return netSalary;
    }
};

int main()
{

    cal obj;
    int a, b, sal;
    cout << "Enter salary: ";
    cin >> sal;
    a = obj.income();
    b = obj.net(sal);

    cout << "Total payable income tax = " << a << endl;
    cout << "Net Salary = " << b;
}
