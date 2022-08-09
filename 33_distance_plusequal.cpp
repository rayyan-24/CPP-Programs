// 29)WAP to overloaded binary operator + with an arithmetic assignment operator: the +, =, += operators for Distance class
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
    Distance operator +=(Distance d2);
    void show_dist() const;
};
void Distance::show_dist() const
{
    cout << "Distance: " << feet << "\'" << inches << "\"" << '\n';
}
Distance Distance::operator +=(Distance d2)
{
        {
        // int Feet;
        // float Inches;
        feet=feet+d2.feet;
        inches=inches+d2.inches;
        if (inches>=12.0f)
        {
            inches=inches-12;
            feet++;
        }
        return Distance(feet,inches);
        
    }
}
int main()
{
    cout<<"Rayyan\t 11217702020\n -------------\n";
    Distance d1(2,3.2);
    Distance d2(2,3.2);
    d1+=d2; //d1=d1+d2
    d1.show_dist();
    

    return 0;
}