#include<iostream>
using namespace std;
struct dis
{
    int feet;
    float inch;
};
dis add (dis a,dis b)
{
    dis c;
    c.feet=0;
    c.inch=a.inch+b.inch;
    if (c.inch>=12)
    {
        c.inch-=12;
        c.feet++;
    }
    c.feet=c.feet+a.feet+b.feet;
    return c;
}
dis display (dis a)
{
    cout<<a.feet<<"\'"<<a.inch<<"\""<<endl;
}
int main()
{
    cout<<"Rayyan\t 11217702020\n -------------\n";
    dis dis1,dis2,sum;
    cout<<"Enter First Distance"<<endl;
    cin>>dis1.feet>>dis1.inch;
    cout<<"Enter Second Distance"<<endl;
    cin>>dis2.feet>>dis2.inch;
    sum=add(dis1,dis2);
    display(sum);
    return 0;
}
