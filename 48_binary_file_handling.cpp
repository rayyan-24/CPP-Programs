#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream fio;
    string line1 = "First Line Of Binary File",line2 = "Second Line Of Binary File",tmp;
    fio.open("sample.dat",ios::out | ios::in|ios::binary);
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
