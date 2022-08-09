// models employee database using inheritance
#include <iostream>
using namespace std;
const int LEN = 80;

class employee 
{
protected:
    char name[LEN];       
    unsigned long number; 
public:
    void getdata()
    {
        cout << "Enter name: "<<endl;
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

class manager : public employee 
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
    }
    void putdata() const
    {
        employee::putdata();
        cout << "Title: " << title<<endl;
        cout << "Golf club dues: " << dues<<endl;
    }
};

class scientist : public employee 
{
private:
    int pubs;
public:
    void getdata()
    {
        employee::getdata();
        cout << " Enter number of pubs: "<<endl;
        cin >> pubs;
    }
    void putdata() const
    {
        employee::putdata();
        cout << "Number of publications: " << pubs<<endl;
    }
};

class laborer : public employee 
{
};

int main()
{
    manager m1;
    scientist s1;
    laborer l1;
    cout<<"Manager"<<endl;
    m1.getdata();
    m1.putdata();
    cout<<"Scientist"<<endl;
    s1.getdata();
    s1.putdata();
    cout<<"Labourer"<<endl;
    l1.getdata();
    l1.putdata();
    return 0;
}
