// 26)WAP to implement Counter Class and write operator overloading code for pre-increment/decrement and post-increment/decrement operators

#include <iostream>
using namespace std;
class counter
{
protected:
    int count;
    counter(int c)
    {
        count = c;
    }

public:
    counter()
    {
        count = 0;
    }
    // pre-increment
    counter operator++()
    {
        return counter(++count);
    }
    void getcount() const;
};
void counter::getcount() const
{
    cout << count << endl;
}
class counter_dn:public counter
{
private:
    counter_dn(int c)
    {
        count = c;
    }

public:
    counter_dn()
    {
        count = 0;
    }
    // pre-decrement
    counter_dn operator--()
    {
        return counter_dn(--count);
    }

    void getcount() const;
};
void counter_dn::getcount() const
{
    cout << count << endl;
}
int main()
{
    counter cu;
    counter_dn cd;
    cout<<"Counter Class"<<endl;
    ++cu;
    ++cu;
    cu.getcount();
    cout<<"Counter Down Class"<<endl;
    ++cd;
    ++cd;
    ++cd;
    ++cd;
    --cd;
    cd.getcount();
    return 0;
}