#include <iostream>
using namespace std;

class student
{
public:
    string name;
    int rollno;
};

int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;
    student stud[n];

    for (int i = 0; i < n; i++)
    {
        cout << " Enter details of student " << i + 1 << endl;
        cout << "Enter name: ";
        cin >> stud[i].name;

        cout << "Enter rollno: ";
        cin >> stud[i].rollno;
    }

    cout << endl
         << endl;
    cout << "Details of student " << endl;
    for (int i = 0; i < n; i++)
    {
        // cout << "Details of Students " << i + 1 << endl;

        cout << "Name is: " << stud[i].name << endl;
        cout << "rollno is: " << stud[i].rollno << endl;
    }
}