#include<iostream>
using namespace std;
typedef int marks;
int main(){
	marks m1, m2, m3;
	cout<<"Enter your marks"<<endl;
	
	cin>>m1>>m2>>m3;
	
	float avg = float(m1+m2+m3)/3.0;
	
	if(avg>=60){
	cout<<"Above average"<<endl;	
	}
	else if(avg<60 && avg >=35)
	{
	cout<<"Average"<<endl;
	
	}else{
		cout<<"below average"<<endl;
	}	
	return 0;
}
