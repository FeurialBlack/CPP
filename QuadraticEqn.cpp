// WAP to find the roots of Quadratic Equation

#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int a,b,c;
    float x;
    cout<<"Enter the Value of A,B and C: \n";
    cin>>a>>b>>c;
    x=(-b+sqrt((b*b)-4*(a*c)))/(2*a);
    cout<<"The Root of Quadratic Equation is: "<<x;
    
    return 0;
}
