#include <iostream>
#include <iomanip>
using namespace std;
struct employee
{
    int id;
    string name;
    int salary;
};

int main()
{
    cout << "Rayyan\t 11217702020\n -------------\n";
    int n;
    cout << "Enter the number of employees" << endl;
    cin >> n;
    employee Emp[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Employee ID" << endl;
        cin >> Emp[i].id;
        cout << "Enter Employee Name" << endl;
        cin >> Emp[i].name;
        cout << "Enter Employee Salary" << endl;
        cin >> Emp[i].salary;
    }
    cout << "Employee ID     Name        Salary" << endl;
    // cout<<setw(25)<<"Employee ID"<<setw(20)<<"Name"<<setw(15)<<"Salary"<<setw(15)<<endl;
    for (int i = 0; i < n; i++)
    {
        // cout<<Emp[i].id<<"     "<<Emp[i].name<<"     "<<Emp[i].salary<<"     "<<endl;
        cout<<Emp[i].id<<setw(20)<<Emp[i].name<<setw(15)<<Emp[i].salary<<setw(15)<<endl;
    }

    return 0;
}