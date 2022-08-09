#include <iostream>
using namespace std;
class person
{
private:
    string name;
    int age;

public:
    void getData()
    {
        cout<<"Enter Name"<<endl;
        cin>>name;
        cout<<"Enter Age"<<endl;
        cin>>age;
    }
    void display()
    {
        cout<<"Name is "<<name<<endl;
        cout<<"Age is "<<age<<endl;
    }
};
int main()
{
    cout << "Rayyan\t 11217702020\n -------------\n";
    person p1;
    p1.getData();
    p1.display();
    return 0;
}