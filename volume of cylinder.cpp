//WAP to calculate Volume of Cylinder
#include <iostream>
using namespace std;

int main() {
	float v,pi=3.141592,r,h;
	cout<<"Enter the Value of Radius and Height: \n";
	cin>>r>>h;
	v=pi*(r*r)*h;
	cout<<"Volume of Cylinder is: "<<v;
	return 0;
}
