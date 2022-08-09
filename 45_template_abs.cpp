#include<iostream>
using namespace std;
template<class DT>
DT absolute(DT a){
    if (a<0)
    {
        return a*-1;
    }
    else
    {
        return a;
    }
    
    
}
int main()
{
    cout<<"Rayyan\t 11217702020\n -------------\n";
    cout<<absolute(-7)<<endl;
    cout<<absolute(37)<<endl;
    return 0;
}