#include<iostream>
using namespace std;
int main(){
	int a, b, c;
	cout<<"Enter a, b and c"<<endl;
	cin>>a>>b>>c;
	if(a>b){
		if(a>c){
			cout<<a<<" is greater than "<<b<< " "<<c<<endl;
			return 0;
		}
		cout<<c<<" is greater than "<<a<< " "<<b<<endl;
		return 0;
	}
	if(b>c){
		cout<<b<<" is greater than "<<a<< " "<<c<<endl;
		return 0;
		
	}
	cout<<c<<" is greater than "<<a<< " "<<b<<endl;
	
	return 0;
}
