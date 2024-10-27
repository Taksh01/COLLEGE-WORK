#include <iostream>
using namespace std;

class employee
{
public:
    string empFirstName = "Taksh";
    string empLastName = "Shah";
    int empId = 1001;
};

int main()
{
    employee obj;

    cout << "FirstName: " << obj.empFirstName << endl;
    cout << "LastName: " << obj.empLastName << endl;
    cout << "EmpId: " << obj.empId << endl;
}