#include <iostream>
using namespace std;
class sample
{
private:
    float a, b;

public:
    sample(float x, float y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << "a=" << a << " b=" << b << endl;
    }
    friend int mean(sample s);
};
int mean(sample s)
{
    cout << "Mean= " << (s.a + s.b) / 2 << endl;
}

int main()
{
    cout << "Rayyan\t 11217702020\n -------------\n";
    sample s(1, 22);
    s.display();
    mean(s);
    return 0;
}