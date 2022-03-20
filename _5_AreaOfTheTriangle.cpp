#include<iostream>
#include<cmath>

using namespace std;

int main(){
	cout << "Enter base and height: "<<endl;
	int base, height;
	cin >> base >> height;
	float result;
	result = 0.5 * base * height;
	cout << "The area of the triangle with base "<< base <<" and height " << height << " is = " << result << endl;
	return 0;
}
