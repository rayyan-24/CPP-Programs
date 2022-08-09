#include<iostream>
using namespace std;
inline void findMax(int a,int b)
{
    if (a>b)
    {
        cout<<a<<" is Greater than "<<b<<endl;
    }
    else
    {
        cout<<b<<" is Greater than "<<a<<endl;
    }
}
int main()
{
    int a,b;
    cout<<"Rayyan\t 11217702020\n -------------\n";
    cout<<"Enter the Numbers"<<endl;
    cin>>a>>b;
    findMax(a,b);
    return 0;
}