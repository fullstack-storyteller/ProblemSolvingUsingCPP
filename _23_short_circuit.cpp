/*
say, a>b && a>c
if a>b is false, a>c condition will not be checked as the operator joining these two condition is a logical and operator

simillarly,

say, a>b || a>c
if a>b is true, a>c condition will not be checked as the operator joining these two condition is a logical or operator

*/


#include<iostream>
using namespace std;
int main(){
	int a=5, b=7, i=5;
	cout<<"a = "<<a<<", b = "<<b<<", i = "<<i<<endl;
	
	if(a>b && i<b){
		++i;
		cout<<"This will not be printed as the condition after the && was ignored"<<endl;
	}
	cout<<"Latest values: "<<"a = "<<a<<", b = "<<b<<", i = "<<i<<endl;
	
	if(a<b || i>b){
		++i;
		cout<<"This will be printed as the condition after the || was ignored"<<endl;
	}
	cout<<"Latest values: "<<"a = "<<a<<", b = "<<b<<", i = "<<i<<endl;
	
	return 0;
}
