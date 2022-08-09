#include <iostream>
using namespace std;
class stack
{
protected:
    int arr[10], top;

public:
    stack()
    {
        top = -1;
    }
    void push(int n)
    {
        top++;
        arr[top] = n;
    }
    void pop()
    {
        top--;
    }
    void display()
    {
        for (int i = 0; i <= top; i++)
        {
            cout << "Element " << i + 1 << "=" << arr[i] << endl;
        }
    }
};
class stack2 : public stack
{
public:
    stack2()
    {
        stack();
    }
    void push(int n)
    {
        if (top >= 9)
        {
            cout << "Overflow" << endl;
            exit(0);
        }
        else
        {
            stack::push(n);
        }
    }

    void pop()
    {
        if (top <= -1)
        {
            cout << "Underflow" << endl;
            exit(0);
        }
        else
        {
            stack::pop();
        }
    }
};
int main()
{
    cout << "Rayyan\t 11217702020\n -------------\n";
    stack2 s1;
    // s1.pop();
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);
    s1.push(6);
    s1.push(7);
    s1.push(8);
    s1.push(9);
    s1.push(10);
    // s1.push(11);
    s1.display();
    return 0;
}