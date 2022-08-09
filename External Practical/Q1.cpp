#include <iostream>
using namespace std;
class money
{
private:
    int rupees;
    float paisa;

public:
    money()
    {
        this->rupees = 0;
        this->paisa = 0;
    }
    money(int rupees, float paisa)
    {
        this->rupees = rupees;
        this->paisa = paisa;
    }
    money(float x)
    {
        this->rupees = x;
        this->paisa = (x - this->rupees);
    }
    operator float()
    {

        cout << this->rupees << " Rupees " << this->paisa << " Paise " << endl;
    }
    void showData()
    {
        cout << rupees << " Rupees " << paisa << " paise " << endl;
    }
};
int main()
{
    cout << "Rayyan\t 11217702020\n -------------\n";
    money r1(1000, 50), r2;
    float Amount = r1; // Convert rupee to float
    r2 = Amount;       // Convert float to rupee
    
    return 0;
}