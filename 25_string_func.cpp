// 25)WAP to use class string of C++ and explain the use of its member functions: erase(), replace(), insert(), append(), size(), find() etc
#include <iostream>
using namespace std;
int main()
{
    cout << "Rayyan\t 11217702020\n -------------\n";
    string s1("Hello");
    cout << "Erase" << endl;
    cout << s1 << endl;
    s1 = s1.erase();
    cout << s1 << endl;
    cout << "Replace" << endl;
    string str1 = "This is C language";
    string str2 = "C++ language";
    cout << str1 << endl;
    str1.replace(8, 1, str2, 0, 4);
    cout << str1 << endl;
    cout << "Append" << endl;
    str1="Good Morning ";
    str2="Hello";
    cout<<str1<<endl;
    str1.append(str2, 0, 5);
    cout<<str1<<endl;
    return 0;
}