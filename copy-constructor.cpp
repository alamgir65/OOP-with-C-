#include <bits/stdc++.h>
using namespace std;

class Student
{

public:
    string name;
    string dept;
    int roll;

    Student(string name, string dept, int roll)
    {
        cout << "I am from Main Constructor function \n";
        this->name = name;
        this->dept = dept;
        this->roll = roll;
    }

    // copy constructor
    Student(Student &obj){
        cout<<"From copy constructor function \n";

        this->name = obj.name;
        this->dept = obj.dept;
        this->roll = obj.roll;
    }

    void getInfo()
    {
        cout << "Name : " << this->name << ", Department : " << this->dept << " and Roll number : " << this->roll << endl;
    }
};
int main()
{

    Student mogha("Mr. Mogha","Khamakha dept",111);
    mogha.getInfo();
    
    Student Hridoy(mogha);
    Hridoy.getInfo();
    return 0;
}