#include<iostream>
using namespace std;
class A
{
private:
    int A_data;
public:
    A()
    {
        A_data=10;
    }
    void showData()
    {
        cout<<A_data<<endl;
    }
    friend class B;
};
class B
{
private:
    int B_data;
public:
    B()
    {
        B_data=20;
    }
    void sum(A x)
    {
        cout<<x.A_data+B_data<<endl;
    }
};
int main()
{
    A a1;
    B b1;
    b1.sum(a1);
    
    return 0;
}