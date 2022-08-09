#include <iostream>
using namespace std;
const int LEN = 80; 

class student 
{
protected:
    char school[LEN]; 
    char degree[LEN]; 
public:
    void getedu()
    {
        cout << " Enter name of school or university: "<<endl;
        cin >> school;
        cout << " Enter highest degree earned"<<endl;
        cout << " (Highschool, Bachelor\'s, Master\'s, PhD): "<<endl;
        cin >> degree;
    }
    void putedu() const
    {
        cout << "School or university: " << school<<endl;
        cout << "Highest degree earned: " << degree<<endl;
    }
};
class employee
{
protected:
    char name[LEN];       
    unsigned long number; 
public:
    void getdata()
    {
        cout << "Enter last name: "<<endl;
        cin >> name;
        cout << " Enter number: "<<endl;
        cin >> number;
    }
    void putdata() const
    {
        cout << "Name: " << name<<endl;
        cout << "Number: " << number<<endl;
    }
};
class manager : private employee, private student 
{
private:
    char title[LEN];
    double dues;     
public:
    void getdata()
    {
        employee::getdata();
        cout << " Enter title: "<<endl;
        cin >> title;
        cout << " Enter golf club dues: "<<endl;
        cin >> dues;
        student::getedu();
    }
    void putdata() const
    {
        employee::putdata();
        cout << "Title: " << title<<endl;
        cout << "Golf club dues: " << dues<<endl;
        student::putedu();
    }
};
class scientist : private employee, private student 
{
private:
    int pubs; 
public:
    void getdata()
    {
        employee::getdata();
        student::getedu();
        cout << " Enter number of pubs: "<<endl;
        cin >> pubs;
    }
    void putdata() const
    {
        employee::putdata();
        student::putedu();
        cout << "Number of publications: " << pubs<<endl;
    }
};
int main()
{
    manager m1;
    scientist s1;
    cout<<"Manager"<<endl;
    m1.getdata();
    m1.putdata();
    cout<<"Scientist"<<endl;
    s1.getdata();
    s1.putdata();
    return 0;
}
