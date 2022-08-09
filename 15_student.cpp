#include <iostream>
using namespace std;
class student
{
private:
    string name, course;
    int Enr_no;
    char grade;
    float percentage,marks[5];
    float get_percentage()
    {
        percentage=((marks[0] + marks[1] + marks[2] + marks[3] + marks[4])/500)*100;
        return percentage;
    }
    char get_grade()
    {
        if (percentage >= 80)
        {
            grade = 'A';
        }
        else if (percentage >= 60)
        {
            grade = 'B';
        }
        else
        {
            grade = 'C';
        }
        return grade;
    }

public:
    void getData()
    {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Enerollment Number: ";
        cin >> Enr_no;
        cout << "Enter Course: ";
        cin >> course;
        for (int i = 0; i <= 4; i++)
        {
            cout << "Enter Marks of Subject " << i + 1 << endl;
            cin >> marks[i];
        }
        cout << endl;
    }

    void display()
    {
        cout << "Name is " << name << endl;
        cout << "Enerollment Number is " << Enr_no << endl;
        cout << "Course is " << course << endl;
        for (int i = 0; i <= 4; i++)
        {
            cout << "Marks of Subject " << i + 1 << " is " << marks[i] << endl;
        }
        cout << "Percentage is " << get_percentage() <<"%"<< endl;
        cout << "Grade is " << get_grade() << endl;
    }
};
int main()
{
    cout << "Rayyan\t 11217702020\n -------------\n";
    int n;
    cout<<"Enter the number of students"<<endl;
    cin>>n;
    student s[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter details of student "<<i+1<<"\n"<<endl;
        s[i].getData();
    }
    for (int i = 0; i < n; i++)
    {
        cout<<"\nDetails of student "<<i+1<<" are \n"<<endl;
        s[i].display();
    }
    
    return 0;
}