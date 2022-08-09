#include <iostream>
using namespace std;
class Money
{
    int rupee;
    int paise;

public:
    Money()
    {
        rupee = 0;
        paise = 0;
    }
    Money(int r, int p)
    {
        rupee = r;
        paise = p;
    }
    int getRupee()
    {
        return rupee;
    }

    int getPaise()
    {
        return paise;
    }
    operator float()
    {
        return convertToFloat(rupee, paise);
    }
    void getInp()
    {
        cout << "Enter Rupees : ";
        cin>>rupee;
        cout << "Enter Paise :";
        cin>>paise;
    }
    float convertToFloat(int r, int p)
    {
        return float(r * 100 + p) / 100.0f;
    }

    void operator=(double flt)
    {
        int tr = flt;

        int tp = (flt - tr) * 100;
        rupee = tr;
        paise = tp;
    }
    void showData()
    {
        cout << rupee << " Rupees " << paise << " paise " << endl;
    }
};
int main()
{
    Money m1,m2;
    m1.getInp();
    float Amt = m1;
    m2=Amt;
    cout << "Amount= " << Amt;
    return 0;
}