#include<iostream>
#include<cmath>
using namespace std;
typedef int coefficient;
int main(){
	coefficient a, b, c;
	cout<<"Enter the coefficients:"<<endl;
	cin>>a>>b>>c;
	
	int discriminant = b*b-4*a*c;
	
	if(discriminant==0){
		cout<<"roots are real and equal"<<endl;
		cout<<"roots = "<<(float(-1*b)/2*a)<<endl;
	}
	else
	{
		if(discriminant<0){
			cout<<"roots are not real"<<endl;
		}
		else{
			cout<<"roots are real but not equal"<<endl;
			cout << "root1 = "<<( (-b+sqrt(discriminant))/2*a  ) <<endl;
			cout << "root2 = "<<( (-b-sqrt(discriminant))/2*a  ) <<endl;
		}
	}
	return 0;
}
