#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream fio;
    string line1 = "Hello World",line2 = "Good Morning",tmp;
    fio.open("sample.txt", ios::trunc | ios::out | ios::in);
    fio << line1 << endl;
    fio << line2 << endl;
    fio.seekg(0, ios::beg);
    while (fio)
    {
        getline(fio, tmp);
        cout << tmp << endl;
    }
    fio.close();
    return 0;
}
