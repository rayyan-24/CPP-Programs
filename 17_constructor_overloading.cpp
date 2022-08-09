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
    Distance(Distance &d)
    {
        inches = d.inches;
        feet = d.feet;
    }
    void add_dist(Distance d1, Distance d2)
    {
        feet = d1.feet + d2.feet;
        inches = d1.inches + d2.inches;

        if (inches > 12.0f)
        {
            inches = inches - 12;
            feet++;
        }
    }

    void show_dist() const
    {
        cout << "Distance: " << feet << "\'" << inches << "\"" << '\n';
    }
};

int main()
{
    cout << "Rayyan\t 11217702020\n -------------\n";
    Distance d1(5, 9.1);
    Distance d2(d1);

    cout << "D2: ";
    d2.show_dist();
    cout << '\n';
}