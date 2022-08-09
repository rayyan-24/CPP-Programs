#include <iostream>
using namespace std;
int const roi = 6;
class account
{
private:
    string name;
    int id, acc_no, principle, time;

public:
    account() {}
    account(string name,int id,int acc_no,int principle,int time) 
    {
        this->name=name;
        this->id=id;
        this->acc_no=acc_no;
        this->principle=principle;
        this->time=time;
    }
    account(account &a) 
    {
        name=a.name;
        id=a.id;
        acc_no=a.acc_no;
        principle=a.principle;
        time=a.time;
    }
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
        cout << endl;
    }
    friend void show_interest(account a1);
};
void show_interest(account a1)
{
    int interest = (a1.principle * roi * a1.time) / 100;
    cout <<"Interest is "<<interest << endl;
}
int main()
{
    cout << "Rayyan\t 11217702020\n -------------\n";
    account a1("rayyan",1,1,10000,3), a2("affan",2,2,30000,2);
    a1.display();
    a2.display();
    show_interest(a1);
    show_interest(a2);
    return 0;
}