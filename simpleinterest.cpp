// WAP to calculate Simple Interest 

#include<iostream>
using namespace std;

int main()
{
    
    float A,P,r,t;
    cout<<"Enter the Principal Amount Rate of Interest and Time: \n";
    cin>>P>>r>>t;
    A=P*(1+((r/100)*t));
    cout<<"The Simple Interest is: "<<A;
    return 0;
}
