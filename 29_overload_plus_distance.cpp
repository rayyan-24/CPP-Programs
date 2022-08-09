// 27)WAP to overload add operator (+) to add objects of user-defined Distance class
#include <iostream>
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
    Distance operator +(Distance d2)
    {
        int Feet;
        float Inches;
        Feet=feet+d2.feet;
        Inches=inches+d2.inches;
        if (inches>12.0f)
        {
            inches=inches-12;
            feet++;
        }
        return Distance(Feet,Inches);

    }
    void show_dist() const;
};
void Distance::show_dist() const
{
    cout << "Distance: " << feet << "\'" << inches << "\"" << '\n';
}

int main()
{
    cout << "Rayyan\t 11217702020\n -------------\n";
    Distance d1(1,1.2),d2(2,1.4),d3;
    d3=d1+d2;
    d3.show_dist();
    return 0;
}
