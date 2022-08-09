// 26)WAP to implement Counter Class and write operator overloading code for pre-increment/decrement and post-increment/decrement operators

#include <iostream>
using namespace std;
class counter
{
private:
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
    // pre-decrement
    counter operator--()
    {
        return counter(--count);
    }
    // post-increment
    counter operator++(int)
    {
        return counter(count++);
    }
    // post-decrement
    counter operator--(int)
    {
        return counter(count--);
    }
    void getcount() const;
};
void counter::getcount() const
{
    cout << count << endl;
}
int main()
{
    cout << "Rayyan\t 11217702020\n -------------\n";
    counter c1, c2, c3;
    cout << "Increment" << endl;
    c2 = ++c1;
    c3 = c1++;
    c1.getcount();
    c2.getcount();
    c3.getcount();
    cout << "Decrement" << endl;
    c2 = --c1;
    c3 = c1--;
    c1.getcount();
    c2.getcount();
    c3.getcount();
    return 0;
}