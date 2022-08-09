#include <bits/stdc++.h>
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
    int geetFeet()
    {
        return this->feet;
    }
    int geetInch()
    {
        return this->inches;
    }

    void show_dist() const
    {
        cout << "Distance: " << feet << "\'" << inches << "\"" << '\n';
    }
};
class Distance_mtr
{
private:
    int meter;
    float c_meter;

public:
    Distance_mtr()
    {
        meter = 0, c_meter = 0.0;
    }
    Distance_mtr(int meter,float c_meter)
    {
        this->meter=meter;
        this->c_meter=c_meter;
    }
    // meter to feet
    operator Distance()
    {
        float i=c_meter*39.37;
        int m=
        
    }
};

int main()
{
    cout << "Rayyan\t 11217702020\n -------------\n";
    int a=2;
    float b=3.4;
    float sum=a+b;
    cout<<sum<<endl;
}