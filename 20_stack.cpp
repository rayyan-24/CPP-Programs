#include <iostream>
using namespace std;
class stack
{
private:
    int arr[10],top;
public:
    stack()
    {
        top=-1;
    }
    void push(int n)
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
    stack s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.display();
    s1.pop();
    s1.display();
    return 0;
}