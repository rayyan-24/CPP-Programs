#include<iostream>
using namespace std;
void add(const int a=0 ,int b=0) 
{
    // a=a+1;
    // b=b+1;
    cout<<a+b<<endl;
}
int main()
{
    add(2,4);
    add();
    return 0;
}