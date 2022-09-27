#include<iostream>
using namespace std;

int main(){
	int x, y;
	cout<<"Enter x: "<<endl;
	cin>>x;
	cout<<"Enter y: "<<endl;
	cin>>y;
	
	if(x>=y){
		cout<<x<< " is greater than or equal to "<<y<<endl;
		
	}
	else{
		cout<<y<< " is greater than "<<x<<endl;
	}
	return 0;
}
