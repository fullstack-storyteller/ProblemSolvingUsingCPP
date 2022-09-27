/*
Logical Operators:

&& -> AND
|| -> OR
!  -> NOT

A  B   A&&B  A||B  !A
T  T    T     T     F
T  F    F     T     F
F  T    F     T     T
F  F    F     F     T

The above are logical operators, please don't confuse them by bitwise operator.
Logical as in True/False or Boolean

------------------------------------

Relational Operators:
<  -> 
<= -> 
>  -> 
>= ->
== ->
!= ->

*/


#include<iostream>
using namespace std;
int main(){
	/*
	for the sake of this example:
	0-9: leisure hour
	9-18: working hour
	18-23: liesure hour
	
	
	*/
	int hour;
	cout<<"Enter your hour: "<< endl;
	cin>>hour;
	if(hour >= 9 && hour <=18){
		cout<<hour<<" is in working hours."<<endl;
		return 0;
	}
	if(hour>23){
		cout<<hour<< " is invalid!"<<endl;
		return 0;
	}
	cout<<hour<<" is in liesure hours."<< endl;
	return 0;
}
