#include<bits/stdc++.h>
using namespace std;

class Teacher{
    private:
        double salary;
    public:
        // attributes / properties
        string name;
        string dept;
        string subject;

        // methods / member functions
        void changeDept(string newDept){
            dept = newDept;
        }

        // setter function
        void setSalary (double newSalary){
            salary = newSalary;
        }
        // getter function 
        double getSalary(){
            return salary;
        }

};

int main()
{
    Teacher head;
    head.name = "Ismail Hossain";
    head.dept = "Mathmatics";
    head.subject = "Math";

    cout<<head.dept<<endl;
    
    head.changeDept("Economics");
    cout<<head.dept<<endl;

    head.setSalary(200000);
    cout<<head.getSalary()<<endl;
    return 0;
}