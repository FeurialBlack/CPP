//WAP to calculate the distance between 2 points
#include <iostream>
#include<math.h>
using namespace std;

int main() {
	float distance;
	int a,b;
	cout<<"Enter the value of Point A and Point B: \n";
	cin>>a>>b;
	distance = sqrt((a*a)+(b*b));
	cout<<"The distance between point A and point B is: "<<distance;
	return 0;
}
