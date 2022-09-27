#include <iostream>
#include<cmath>
using namespace std;
int main(){
	float radius=0.0f;
	const float PI=3.1428f;
	
	cout<<"Enter the radius of the circle: ";
	cin>>radius;
	cout<< "Area of the circle with radius "<<radius<<" = "<<(PI*radius*radius)<<endl;
	cout<< "Area of the circle with radius "<<radius<<" (rounded) = "<<round(PI*radius*radius)<<endl; // remove the demical to nearest integer
	cout<< "Perimeter of the circle with radius "<<radius<<" = "<<(2*PI*radius)<<endl;	
}
