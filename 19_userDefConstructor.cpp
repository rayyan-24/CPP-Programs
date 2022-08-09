#include <iostream>
using namespace std;
class Alpha
{
    int data;

public:
    Alpha()
    {
        data = 0;
    }
    Alpha(int a)
    {
        cout << "Parameterized Constructor Invoked" << endl;
        data = a;
    }
    Alpha(Alpha &x)
    {
        cout << "Copy constructor invoked" << endl;
        data = x.data;
    }
    int display()
    {
        return data;
    }
};
int main()
{
    Alpha a1(23),a2,a3;
    cout << "a1 = " << a1.display() << endl;
    cout << "a2 = " << a2.display() << endl;
    a2 = a1;
    cout << "a2 after initialization"<<endl;
    cout<<"a2 ="<<a2.display()<<endl;
    a3=a1;
    cout << "a3 = " << a3.display() << endl;
    a3.display();
    return 0;
}