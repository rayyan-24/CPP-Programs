#include <iostream>

using namespace std;

class Counter
{
private:
    int count;
public:
    Counter()
    {
        count=0;
        cout << "Counter Initiated" << endl;
    }
    void inc_count()
    {
        count++;
    }

    int get_count()
    {
        return count;
    }
};

int main()
{
    cout << "Rayyan\t 11217702020\n -------------\n";
    Counter c1, c2;
    cout << "C1 = " << c1.get_count() << endl;
    cout << "C2 = " << c2.get_count() << endl;
    c1.inc_count();
    c2.inc_count();

    Counter c3;
    cout << "C1 = " << c1.get_count() << endl;
    cout << "C2 = " << c2.get_count() << endl;
    cout << "C3 = " << c3.get_count() << endl;
}