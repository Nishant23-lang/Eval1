#include<iostream>
using namespace std;

int main()
{
    char type;
    cout<<"Enter Type of Polynomial: 1. Linear 2.Quadratic 3.Cubic: ";
    cin>>type;
    cout<<endl;
    switch(type)
    {
    case '1':
        {
            int a,b;
            cout<<"Enter coefficients a and b of "<<type<<" polynomial: ";
            cin>>a>>b;
            cout<<"Derivative is: "<<a;
            break;
        }
    case '2':
        {
            int a,b,c;
             cout<<"Enter coefficients a b c of "<<type<<" polynomial: ";
             cin>>a>>b>>c;
             cout<<"Derivative is: "<<2*a<<"x + "<<b;
             break;
        }
    case '3':
        {
            int a,b,c,d;
            cout<<"Enter coefficients a b c d of "<<type<<" polynomial: ";
            cin>>a>>b>>c>>d;
            cout<<"Derivative is: "<<3*a<<"x2 + "<<2*b<<"x + "<<c;
            break;
        }
    }
}
