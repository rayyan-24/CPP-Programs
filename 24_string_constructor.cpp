// 24)WAP to define a String class with constructors (default, parameterized, copy), destructor, display(), concat() functions

#include <iostream>
#include <cstring>
using namespace std;
class Str
{
private:
    string str;

public:
    Str()
    {
        str = "NULL";
    }
    Str(string s1)
    {
        str = s1;
    }
    Str(Str &s1)
    {
        str = s1.str;
    }
    string display()
    {
        cout << str << endl;
    }
    ~Str()
    {
        cout << "Object Destroyed" << endl;
    }
    friend void concat(Str s1, Str s2);
};
void concat(Str s1, Str s2)
{
    Str temp;
    temp.str=s1.str+s2.str;
    temp.display();
}
int main()
{
    cout << "Rayyan\t 11217702020\n -------------\n";
    int arr1[20];
    Str a, b("Hello"), c(b), d;
    d = b;
    // a.display();
    // b.display();
    // c.display();
    // d.display();
    string x;
    
    
    return 0;
}