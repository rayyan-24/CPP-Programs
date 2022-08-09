// 31)WAP to overload comparison operator (>) to compare objects of distance class with feet & inches

#include<iostream>
using namespace std;
class Distance
{
private:
    int feet;
    float inches;

public:
    Distance()
    {
        feet = 0;
        inches = 0;
    }
    Distance(int feets, float inch)
    {
        feet = feets;
        inches = inch;
    }
    bool operator >(Distance d2)
    {
        if(feet>d2.feet)
        {
            return true;
        }
        else if(feet==d2.feet)
        {
            if(inches>d2.inches)
            {
                return true;
            }
        }
        return false;
    }
    void show_dist() const;
};
void Distance::show_dist() const
{
    cout << "Distance: " << feet << "\'" << inches << "\"" << '\n';
}
int main()
{
    cout<<"Rayyan\t 11217702020\n -------------\n";
    Distance d1(2,3.2);
    Distance d2(3,6.2);
    d1.show_dist();
    d2.show_dist();
    if (d1>d2)
    {
        cout<<"d1 is greater"<<endl;
    }
    else
    {
        cout<<"d2 is greater"<<endl;
    }
    return 0;
}