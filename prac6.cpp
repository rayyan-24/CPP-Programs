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
    operator int()
    {
        return num;
    }
};
int main()
{
    // Class Object to Basic Data Type COnversion
    number n1(20);
    int N1;
    // n1=N1;
    N1=n1;
    n1.showData();
    cout<<N1<<endl;
    return 0;
}