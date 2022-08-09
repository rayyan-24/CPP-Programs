// 28)WAP to overload == operator, to compare two of our user-defined String objects, returning true if they’re the same and false if they’re different

#include <iostream>
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
    string operator+(Str str2)
    {
        return str+str2.str;
    }
};

int main()
{
    Str s1("Hello"),s2(" World"),s3;
    s1.display();
    s2.display();
    s3=s1+s2;
    s3.display();
    
    return 0;
}