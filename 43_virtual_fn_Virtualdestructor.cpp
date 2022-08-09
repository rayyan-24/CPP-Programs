#include <iostream>
using namespace std;
class Base
{
public:
    virtual void show()
    {
        cout << "In Base Class" << endl;
    }
    virtual ~Base()
    {
        cout << "Base Class Object Destroyed" << endl;
    }
};
class Derv1 : public Base
{
public:
    virtual void show()
    {
        cout << "In Derived Class 1" << endl;
    }
};
class Derv2 : public Base
{
public:
    virtual void show()
    {
        cout << "In Derived Class 2" << endl;
    }
};
int main()
{
    cout << "Rayyan\t 11217702020\n -------------\n";
    Derv1 d1;
    Derv2 d2;
    Base *ptr;
    ptr = &d1;
    ptr->show();
    ptr = &d2;
    ptr->show();
    return 0;
}