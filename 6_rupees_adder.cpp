#include <iostream>
using namespace std;
int main()
{
    cout << "Rayyan\t 11217702020\n -------------\n";
    int rs, rs1, ps, ps1, rss = 0, pss = 0;
    char c = 'y';
    while (c == 'y')
    {
        cout << "enter first amount " << endl;
        cin >> rs >> ps;
        cout << "enter second amount " << endl;
        cin >> rs1 >> ps1;
        pss = ps + ps1;
        rss = rs + rs1;
        if (pss >= 100)
        {
            pss -= 100;
            rss += 1;
        }
        cout << "sum of amount:\nRs." << rs << " P." << ps << "  +  Rs." << rs1 << " P." << ps1 << endl;
        cout << " = Rs." << rss << " P." << pss << endl;

        cout << "do you want to continue? (y or n)" << endl;
        cin >> c;
    }
    return 0;
}