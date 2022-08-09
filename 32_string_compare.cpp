// 28)WAP to overload == operator, to compare two of our user-defined String objects, returning true if they’re the same and false if they’re different

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
        str = "";
    }
    Str(string s1)
    {
        str = s1;
    }
    Str(Str &s1)
    {
        str = s1.str;
    }
    void display()
    {
        cout << str << endl;
    }
    bool operator == (Str str2)
    {
        if(str==str2.str)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    Str s1("Hello");
    Str s2("Hello1");
    s1.display();
    s2.display();
    if(s1==s2)
    {
        cout<<"Equal"<<endl;
    }
    else
    {
        cout<<"Not Equal"<<endl;
    }
    return 0;
}