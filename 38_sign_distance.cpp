#include <iostream>
using namespace std;
enum posneg
{
    pos,
    neg
}; 
class Distance 
{
protected: 
    int feet;
    float inches;

public:
    Distance()
    {
        feet = 0;
        inches = 0.0;
    }
    Distance(int ft, float in)
    {
        feet = ft;
        inches = in;
    }
    void getdist()
    {
        cout << "Enter feet: " << endl;
        cin >> feet;
        cout << "Enter inches: " << endl;
        cin >> inches;
    }
    void showdist() const 
    {
        cout << feet << "\' " << inches << '\"' << endl;
    }
};
class DistSign : public Distance
{
private:
    posneg sign; 
    
public:
    
    DistSign() 
    {
        Distance();
        sign = pos;
    }

    DistSign(int f, float i, posneg sg = pos)
    {
        Distance(f, i); 
        sign = sg;
    }
    void getdist()
    {
        Distance::getdist(); 
        char ch;             
        cout << "Enter sign (+ or -): ";
        cin >> ch;
        if (ch == '+')
        {
            sign = pos;
        }
        else
        {
            sign = neg;
        }
    }
    void showdist() const
    {
        if (sign == pos)
        {
            cout << "(+)";
            Distance::showdist();
        }
        else
        {
            cout << "(-)";
            Distance::showdist();
        }
    }
};
int main()
{
    DistSign alpha;  
    DistSign beta;
    alpha.getdist(); 
    beta.getdist();
    alpha.showdist();
    beta.showdist();
    return 0;
}
