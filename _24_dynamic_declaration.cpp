/*
in c++, we can declare a variable in a particular scope
 variable declared in main method or any method for that matter is accessible within
 the same method, but variable declared outside main method is in a clobal scope,
 and will be accessible everywhere.
 
 you can also limit the scope of variable if you defined in within a code block
 
 
*/
#include<iostream>
using namespace std;

int global_i = 10;
int testFunction(){
	return ++global_i;
}//we had to declare this testFuntion above main
int testFunction1(){
	int x=100;
	return x;
}
int main(){
	cout << "Global variable i = "<< global_i<<endl;
	cout << "incremented Global variable i from a different function = "<< testFunction()<<endl;
	cout << "local variable value from a different function = "<< testFunction1()<<endl; //x is not defined in main method
	
	for(int i=0; i<5; i++)
		cout<<i<<" ";
	//cout<<i<<" "; //i is not declared within main, but it is declared within for loop, hence not accessible here.
	
	cout<<endl;
	/*
	if(int y=5, y<10){//this is only supported in c++17
		cout<<"y is present inside this if block: "<<y<<endl;
	}*/
	{
		int y=5;
		if(y<10){ //the variable y is local to the {block}
			cout<<"y is present inside this if block: "<<y<<endl;
		}
	}
	//cout<<"y outside : "<<y<<endl;b//y is undeclared here
	
	int p;//if not initialize as p=something, it will have garbage value
	cout<<"Current value of uninitialized p = "<<p;
	return 0;
}

