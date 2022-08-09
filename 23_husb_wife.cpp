#include <iostream>
using namespace std;
class wife;
class husband
{
private:
    string name;
    int age, salary;

public:
    husband()
    {
        name = "NONE";
        age = 0;
        salary = 0;
    }
    husband(string Name, int Age, int Salary)
    {
        name = Name;
        age = Age;
        salary = Salary;
    }
    friend int famSalary(husband a, wife b);
};
class wife
{
private:
    string name;
    int age, salary;

public:
    wife()
    {
        name = "NONE";
        age = 0;
        salary = 0;
    }
    wife(string Name, int Age, int Salary)
    {
        name = Name;
        age = Age;
        salary = Salary;
    }
    friend int famSalary(husband a, wife b);
};
int famSalary(husband a, wife b)
{
    cout << (a.salary + b.salary) * 12 << endl;
    return (a.salary + b.salary) * 12;
}

int main()
{
    cout << "Rayyan\t 11217702020\n -------------\n";
    husband h1("A", 40, 1000);
    wife w1("a", 40, 1000);
    famSalary(h1, w1);
    return 0;
}