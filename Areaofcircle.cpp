// WAP to find the Area of a circle

#include<iostream>
using namespace std;

int main()
{
    float pi=3.14159,radius,area;
    cout<<"Enter the Radius of Circle: \n";
    cin>>radius;
    area=pi*(radius*radius);
    cout<<"The Area of Circle is: "<<area;
    
    return 0;
}
