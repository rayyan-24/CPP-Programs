#include <iostream>
using namespace std;

void charCheck(char input_char)
{
    if ((input_char >= 65 && input_char <= 90) || (input_char >= 97 && input_char <= 122))
    {
        cout << input_char<<" is an Alphabet ";
    }
    else if (input_char >= 48 && input_char <= 57)
    {
        cout << input_char<<" is a Digit ";
    }
    else
    {
        cout << input_char<<" is a Special Character ";
    }
}
int main()
{
    cout << "Rayyan\t 11217702020\n -------------\n";
    char toCheck;
    cout<<"Enter The Character"<<endl;
    cin>>toCheck;
    charCheck(toCheck);
    return 0;
}
