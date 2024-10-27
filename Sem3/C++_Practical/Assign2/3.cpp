#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int Marks;

public:
    void setName(string sname)
    {
        this->name = sname;
    }

    void setMarks(int mark)
    {
        this->Marks = mark;
    }

    string getName()
    {
        return this->name;
    }

    int getMarks()

    {
        return this->Marks;
    }
};

int main()
{
    Student details;
    details.setName("Taksh");
    details.setMarks(92);
    int res_marks = details.getMarks();
    string res_name = details.getName();

    cout << "Name and Marks are: " << res_name << "&" << res_marks;
}