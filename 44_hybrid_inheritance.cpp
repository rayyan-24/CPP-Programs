#include<iostream>
using namespace std;
class A
{
protected:
    int data_a=1;
public:
    virtual void display() const{
        cout<<this->data_a<<endl;
    }
};
class B:virtual public A
{
protected:
    int data_b=2;
public:
    void display() const{
        cout<<this->data_b<<endl;
    }
};
class C:virtual public A
{
protected:
    int data_c=3;
public:
    void display() const{
        cout<<this->data_c<<endl;
    }
};
class D:public B,public C
{
protected:
    int data_d=4;
public:
    void display() const{
        cout<<this->data_d<<endl;
    }
};
int main()
{
    cout<<"Rayyan\t 11217702020\n -------------\n";
    A *p1;
    D d1;
    p1=&d1;
    p1->display();
    
    return 0;
}