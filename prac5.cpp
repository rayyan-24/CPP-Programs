#include<iostream>
using namespace std;
class number
{
private:
    int num;
public:
    void showData()
    {
        cout<<this->num<<endl;
    }
    number()
    {
        num=0;
    }
    number(int x)
    {
        this->num=x;
    }
};
int main()
{
    // Basic Data Type to class object conversion 
    number n1;
    int N1=100;
    n1=N1;
    n1.showData();
    return 0;
}