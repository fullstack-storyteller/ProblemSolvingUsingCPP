#include<iostream>
#include<cmath> //contains definition of math functions

using namespace std;

int main(){
	cout << "Enter coefficients a, b, and c: " << endl;
	int a, b, c;
	cin >> a >> b>> c;
	
	float r1, r2, D;
	D = pow(b, 2) - 4*a*c;
	if(D < 0){
		cout << "No real roots present."<<endl;
		return 0;
	}
	r1 = (float)((-b + sqrt(pow(b, 2) - 4*a*c)) / (2*a));
	if(D==0){
		cout << "Roots are real and equal. The value is "<< r1<<endl;
		return 0;
	}
	
	r2 = (float)((-b - sqrt(pow(b, 2) - 4*a*c)) / (2*a));
	
	cout << "The roots are real and not equal. The values of roots are "<< r1 <<" and "<<r2<< endl;
	return 0;
}
