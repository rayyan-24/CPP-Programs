#include <iostream>
using namespace std;
int main()
{
    cout << "Rayyan\t 11217702020\n -------------\n";
    char op;
    int n1, n2, ch = 1;
    while (ch)
    {
        cout << "Enter Operation (+)(-)(*)(/)" << endl;
        cin >> op;
        cout << "Enter First Number" << endl;
        cin >> n1;
        cout << "Enter Second Number" << endl;
        cin >> n2;
        switch (op)
        {
        case '+':
            cout << "Sum of " << n1 << " and " << n2 << " is " << n1 + n2 << endl;
            break;
        case '-':
            cout << "Diffrence of " << n1 << " and " << n2 << " is " << n1 - n2 << endl;
            break;
        case '*':
            cout << "Product of " << n1 << " and " << n2 << " is " << n1 * n2 << endl;
            break;
        case '/':
            cout << "Quotient of " << n1 << " and " << n2 << " is " << n1 / n2 << " and remainder is " << n1 % n2 << endl;
            break;
        default:
            cout << "Enter a valid Operation" << endl;
            break;
        }
        cout << "Do Yo want to continue 0 or 1" << endl;
        cin >> ch;
    }
    return 0;
}