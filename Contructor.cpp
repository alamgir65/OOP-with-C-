#include <bits/stdc++.h>
using namespace std;

class Student
{

public:
    Student(string n, string d, int r)
    {
        cout << "I am from Constructor function \n";

        name = n;
        dept = d;
        roll = r;
    }


    string name;
    string dept;
    int roll;

    void getInfo()
    {
        cout << "Name : " << name << ", Department : " << dept << " and Roll number : " << roll << endl;
    }
};

int main()
{
    Student first("Alamgir Hossain", "CSE", 131);
    // cout<<first.name<<" "<<first.dept<<" "<<first.roll<<endl;
    first.getInfo();
    return 0;
}