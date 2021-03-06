// WAP to Calculate speed

#include<iostream>
using namespace std;

int main()
{
    int s,v,u,a;
    cout<<"Enter the Initial Velocity,Final Velocity and acceleration: \n";
    cin>>u>>v>>a;
    s=((v*v)-(u*u))/(2*a);
    cout<<"The speed is: "<<s;
    return 0;
}
