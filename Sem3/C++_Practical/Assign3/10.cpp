#include <iostream>
using namespace std;

class employee
{
public:
    string name;
    int sal;
};

int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;
    employee emp[n];

    for (int i = 0; i < n; i++)
    {
        cout << " Enter details of emp " << i + 1 << endl;
        cout << "Enter name: ";
        cin >> emp[i].name;

        cout << "Enter salary: ";
        cin >> emp[i].sal;
    }

    cout << endl
         << endl;
    cout << "Details of emp " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Details of emp " << i + 1 << endl;
        cout << "Name is: " << emp[i].name << endl;
        cout << "Salary is: " << emp[i].sal << endl;
    }
}