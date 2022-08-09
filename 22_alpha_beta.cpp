#include <iostream>
using namespace std;
class beta;
class alpha
{
private:
    int a;

public:
    alpha(int x)
    {
        a=x;
    }

    friend void sum(alpha x,beta y);
};

class beta
{
private:
    int b;

public:
    beta(int y)
    {
        b=y;
    }

    friend void sum(alpha x,beta y);
};
void sum(alpha x,beta y)
{
    cout<<"Sum="<<x.a+y.b<<endl;
}

int main()
{
    cout << "Rayyan\t 11217702020\n -------------\n";
    alpha a1(1);
    beta b1(2);

    sum(a1,b1);
    return 0;
}