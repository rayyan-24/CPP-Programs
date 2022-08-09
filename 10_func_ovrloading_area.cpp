#include<iostream>
using namespace std;

float area (float radius)
{
    return radius*radius*3.141;
}
float area (float length,float breadth)
{
    return length*breadth;
}
int main()
{
    cout<<"Rayyan\t 11217702020\n -------------\n";
    int n;
    float radius,length,breadth;
    cout<<"Enter 1 for Area of Circle"<<endl;
    cout<<"Enter 2 for Area of Rectangle"<<endl;
    cin>>n;
    if (n==1)
    {
        cout<<"Enter Radius"<<endl;
        cin>>radius;
        cout<<"Area of Circle is "<<area(radius)<<endl;

    }
    else if (n==2)
    {
        cout<<"Enter Length"<<endl;
        cin>>length;
        cout<<"Enter Breadth"<<endl;
        cin>>breadth;
        cout<<"Area of Rectangle is "<<area(length,breadth)<<endl;
    }
    else
    {
        cout<<"Invalid Input"<<endl;
    }
    
    return 0;
}