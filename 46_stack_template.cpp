#include <iostream>
using namespace std;
const int size=20;
template<class DT>
class stack
{
private:
    DT arr[size];
    int top;
public:
    stack()
    {
        top=-1;
    }
    void push(DT n)
    {
        top++;
        arr[top]=n;
    }
    void pop()
    {
        top--;
    }
    void display()
    {
        for (int i = 0; i <= top; i++)
        {
            cout<<"Element "<<i+1<<"="<<arr[i]<<endl;
        }
        
    }
};
int main()
{
    cout << "Rayyan\t 11217702020\n -------------\n";
    stack<int> s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.display();
    s1.pop();
    s1.display();
    stack<char> s2;
    s2.push('C');
    s2.push('P');
    s2.push('P');
    s2.display();
    s2.pop();
    s2.pop();
    s2.display();
    return 0;
}