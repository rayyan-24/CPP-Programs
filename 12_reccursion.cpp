#include <iostream>
using namespace std;

int sum_of_digit(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return (n % 10 + sum_of_digit(n / 10));
}
int main()
{
    cout << "Rayyan\t 11217702020\n -------------\n";
    int n;
    cout << "Enter the Number" << endl;
    cin >> n;
    int sum = sum_of_digit(n);
    cout << sum << endl;

    return 0;
}