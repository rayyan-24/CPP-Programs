#include<iostream>
using namespace std;
void displayChar()
{
    for (int i = 0; i < 50; i++)
    {
        cout<<" * ";
    }
    cout<<endl;    
}
void displayChar(char ch)
{
    for (int i = 0; i < 50; i++)
    {
        cout<<ch;
    }
    cout<<endl;    
}
void displayChar(char ch,int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<ch;
    }
    cout<<endl;    
}
int main()
{
    cout<<"Rayyan\t 11217702020\n -------------\n";
    displayChar();
    displayChar('A');
    displayChar('A',50);

    return 0;
}