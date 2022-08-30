/*
User Defined Datatype
Example:
Departments: CS, ECE, Civil,...
we can define all the separate department name in a single type, we call it as Enum

CS = 1, ECE = 2, ....

By default, Enum will start the code from 0, but you can specify any numeric value.

Declare enum outside the main function

--------------------------------------------------------------

Typedef: improves readability
for quick work, we will define marks m1, m2, m3 and roll number r1, r2, r3
as int m1, m2, m3, r1, r2, r3
we may forget this tomorrow, but we had some way to make this more readable then
we won't forget it so easily

typedef int marks;
typedef int rollno;

Do the declaration of typedef outside main function
This is just changing the name of the data Type.
Can be applied to other user defined types.

*/

#include<iostream>
using namespace std;
enum days {mon, tue, web, thru, fri, sat, sun};
enum departments {CS=1, ECE, CIVIL=5, MECH};
typedef int marks;
typedef int rollno;

int main(){
	const int CS=1;
	const int EcE=2;
	const int Civil=3;
	const int Mech=4;
	//as number of constants increase it will be dificult to remember
	//use enum instead
	
	//days d=1 => this can't be done, as it is only accepting the defined value
	days d=(days)1;
	days p=mon;
	//mon++ => connot be increment as it is constant
	
	cout<<"d = "<<d<<endl;//1
	cout<<"p = "<<p<<endl;//0
	cout<<"fri = "<<fri<<endl;//4
	
	departments dep=CIVIL;
	cout<<"dep = "<<dep<<endl; //5

	dep =ECE;
	cout<<"dep = "<<dep<<endl; //2
	
	
	marks m1=9, m2=10, m3=11;	
	rollno r1=9, r2=10, r3=11;
	//both the line above are valid integers	
}
