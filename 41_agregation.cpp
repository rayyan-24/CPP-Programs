#include<iostream>
// WAP to explain the concept of aggregation
using namespace std;
class employee
{
private:
    string name;
    int emp_id;
public:
    employee()
    {
        name="";
        emp_id=0;
    }
    employee(string name,int id)
    {
        this->name=name;
        this->emp_id=id;
    }
    void setEmployeeData()
    {
        cout<<"Enter Name"<<endl;
        cin>>name;
        cout<<"Enter ID"<<endl;
        cin>>emp_id;
    }
    void showEmployeeData()
    {
        cout<<"Name is"<<name<<endl;
        cout<<"ID is "<<emp_id<<endl;
    }
};
class student
{
private:
    string name;
    int st_id;
public:
    student()
    {
        name="";
        st_id=0;
    }
    student(string name,int id)
    {
        this->name=name;
        this->st_id=id;
    }
    void setStudentData()
    {
        cout<<"Enter Name"<<endl;
        cin>>name;
        cout<<"Enter ID"<<endl;
        cin>>st_id;
    }
    void showStudentData()
    {
        cout<<"Name is"<<name<<endl;
        cout<<"ID is "<<st_id<<endl;
    }
};
class manager
{
private:
    string name;
    int mgr_id;
    student st1;
    employee emp1;
public:
    manager()
    {
        name="";
        mgr_id=0;
    }
    manager(string name,int id)
    {
        this->name=name;
        this->mgr_id=id;
    }
    void setManagerData()
    {
        emp1.setEmployeeData();
        st1.setStudentData();
        cout<<"Enter Name"<<endl;
        cin>>name;
        cout<<"Enter ID"<<endl;
        cin>>mgr_id;
    }
    void showManagerData()
    {
        emp1.showEmployeeData();
        st1.showStudentData();
        cout<<"Name is"<<name<<endl;
        cout<<"ID is "<<mgr_id<<endl;
    }
};
int main()
{
    cout<<"Rayyan\t 11217702020\n -------------\n";
    employee emp1;
    student stu1;
    manager mgr1;
    emp1.setEmployeeData();
    emp1.showEmployeeData();
    stu1.setStudentData();
    stu1.showStudentData();
    return 0;
}