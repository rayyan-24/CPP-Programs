#include<iostream>
using namespace std;
class counter
{
private:
    int data;
    static int count;
public:
    counter()
    {
        data=0;
        count++;
    }
    static int getCount()
    {
        // data cannot be accessed as static member functions cannot access non-static data members
        // cout<<count<<data<<endl;
        cout<<count<<endl;
    }
    void showData()
    {
        cout<<data<<endl;
        cout<<count<<endl;
    }
};
// initialization of static data member
int counter::count=0;
int main()
{
    
    // cout<<counter::getCount()<<endl;
    counter::getCount();
    counter c1;
    c1.showData();
    return 0;
}