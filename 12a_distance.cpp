#include <iostream>
using namespace std;
class Distance
{
private:
    int feet, inch;

public:
    void setdist()
    {
        cout << "Enter Feet" << endl;
        cin >> feet;
        cout << "Enter Inch" << endl;
        cin >> inch;
    }
    void show_dist() const
    {
        cout << "Distance: " << feet << "\'" << inch << "\"" << '\n';
    }
};
int main()
{
    cout << "Rayyan\t 11217702020\n -------------\n";
    Distance d1;
    d1.setdist();
    d1.show_dist();
    return 0;
}