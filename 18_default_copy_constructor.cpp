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
        feet=feets;
        inches=inch;
    }
    void show_dist() const
    {
        cout << "Distance: " << feet << "\'" << inches << "\"" << '\n';
    }
};

int main()
{
    cout << "Rayyan\t 11217702020\n -------------\n";
    Distance d1(1,5.5);
    Distance d2=d1;
    d1.show_dist();
    d2.show_dist();
    return 0;
}