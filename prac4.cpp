#include<iostream>
using namespace std;
class A
{
protected:
    int A_data;
public:
    A()
    {
        A_data=0;
    }
    A(int A_data)
    {
        this->A_data=A_data;
    }
    // pure vitual function
    virtual void showData()=0;
};
class B:public A
{
private:
    int B_data;
public:
    B(int A_data,int B_data)
    {
        this->A_data=A_data;
        this->B_data=B_data;
    }
    void showData()
    {
        cout<<A_data<<endl;
        cout<<B_data<<endl;
    }
    

};
int main()
{
    // A a1(1);
    B b1(1,2);
    b1.showData();
    
    return 0;
}