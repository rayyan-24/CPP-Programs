#include <iostream>
using namespace std;
struct emp
{
private:
    string name;
    int id;
public:
    emp()
    {
        id=0;
        name="N/A";
    }
    int showData()
    {
        cout << name << "\n"
             << id << endl;
    }
};

int main()
{
    cout << "Rayyan\t 11217702020\n -------------\n";
    emp e1;
    e1.showData();
    return 0;
}