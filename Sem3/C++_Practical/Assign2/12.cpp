#include <iostream>
using namespace std;

class Subject
{
public:
    int subjectCode = 10098;
    string subjectName = "IIT";
};

int main()
{
    Subject obj;
    cout << "Subject Code is:" << obj.subjectCode << endl;
    cout << "Subject Name is:" << obj.subjectName;
}