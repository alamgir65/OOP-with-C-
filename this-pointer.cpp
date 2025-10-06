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
        cout << "I am from Constructor function \n";
        this->name = name;
        this->dept = dept;
        this->roll = roll;
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
    return 0;
}