#include <iostream>
using namespace std;
int const roi = 6;
class account
{
private:
    string name;
    int id, acc_no, principle, time;
    int get_intrest()
    {
        int intrest = (principle * roi * time) / 100;
        return intrest;
    }

public:
    void get_data()
    {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter Account Number: ";
        cin >> acc_no;
        cout << "Enter Principal Amount: ";
        cin >> principle;
        cout << "Enter Time (In Years): ";
        cin >> time;
        cout << endl;
    }
    void display()
    {
        cout << "Name is " << name << endl;
        cout << "ID is " << id << endl;
        cout << "Account Number is " << acc_no << endl;
        cout << "Principal is " << principle << endl;
        cout << "Time is " << time << " years" << endl;
        cout << "Intrest is " << get_intrest() << endl;
        cout << endl;
    }
};
int main()
{
    cout << "Rayyan\t 11217702020\n -------------\n";
    account a1, a2;
    a1.get_data();
    a2.get_data();
    a1.display();
    a2.display();
    return 0;
}