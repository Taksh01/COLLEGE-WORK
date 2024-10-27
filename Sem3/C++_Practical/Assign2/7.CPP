#include <iostream>
using namespace std;

class Employee
{
private:
    string name;
    int salary;
    int age;

public:
    void get_data(string empName, int empSalary, int empAge)
    {
        this->name = empName;
        this->salary = empSalary;
        this->age = empAge;
    }

    void show()
    {
        cout << "\n ---------New Emp start---------";
        cout << "\n Emp Name is: " << name;
        cout << "\n Emp Salary is: " << salary;
        cout << "\n Emp Age is: " << age;
    }
};

int main()
{
    Employee obj[3];
    string name;
    int age, salary;
    for (int i = 0; i < 3; i++)
    {

        cout << "enter name: " << endl;
        cin >> name;

        cout << "enter age: " << endl;
        cin >> age;

        cout << "enter salary: " << endl;
        cin >> salary;

        obj[i].get_data(name, salary, age);
    }

    for (int i = 0; i < 3; i++)
    {
        obj[i].show();
    }
}