// multiple inheritance with English Distances
#include <iostream>
#include <string>
using namespace std;
class Type
{
protected:
    string dimensions;
    string grade;

public:
    Type()
    {
        dimensions = "N/A";
        grade = "N/A";
    }
    Type(string di, string gr)
    {
        dimensions = di;
        grade = gr;
    }
    void gettype()
    {
        cout << " Enter nominal dimensions (2x4 etc.): "<<endl;
        cin >> dimensions;
        cout << " Enter grade (rough, const, etc.): "<<endl;
        fflush(stdin);
        cin >> grade;
    }
    void showtype() const 
    {
        cout << "Dimensions: " << dimensions<<endl;
        cout << " Grade: " << grade<<endl;
    }
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
        cout << " Enter feet: " << endl;
        cin >> feet;
        cout << " Enter inches: " << endl;
        cin >> inches;
    }
    void showdist() const
    {
        cout << feet << "\'-" << inches << '\"' << endl;
    }
};
class Plank : public Type, public Distance
{
private:
    int quantity;
    double price;

public:
    Plank()
    {
        Type();
        Distance();
        quantity = 0;
        price = 0.0;
    }
    Plank(string di, string gr, int ft, float in, int qu, float prc)
    {
        Type(di, gr);
        Distance(ft, in);
        quantity = qu;
        price = prc;
    }
    void getplank()
    {
        Type::gettype();
        Distance::getdist();
        cout << " Enter quantity: "<<endl;
        cin >> quantity;
        cout << " Enter price per piece: "<<endl;
        cin >> price;
    }
    void showplank() const
    {
        Type::showtype();
        cout << "Length: "<<endl;
        Distance::showdist();
        cout << "Price for " << quantity
             << " pieces: $" << price * quantity<<endl;
    }
};
int main()
{
    Plank siding;
    cout << "Siding data:"<<endl;
    siding.getplank();

    Plank studs("2x4", "const", 8, 0.0, 200, 4.45F);
    cout << "Siding"<<endl;
    siding.showplank();
    cout << "Studs"<<endl;
    studs.showplank();
    cout << endl;
    return 0;
}
