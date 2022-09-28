/*
switch(expr) -> int/char
{
	case value1: doSomething();
	break;
	case value2: doSomethingElse();
	break;
	default: Executes if nothing matches, may be followed by break
}

however break after the case statement is optional. if not given the control will go
ahead with evaluating the next case;
*/


#include<iostream>
using namespace std;
int main(){
	int i=5;
	char j='a';
	
	switch(i){
		case 1: cout<<"matched 1"<<endl;break;
		case 5: cout<<"matched 5"<<endl;break;
	}// no default given
	
	switch(i){
		case 1: cout<<"matched 1"<<endl;break;
		case 5: cout<<"matched 1"<<endl;
		case 10: cout<<"matched 10"<<endl;
	}//missing break after the matched case statement
	/*
output:
----------------
matched 1
matched 10
	*/
	
	switch(j){
		case 1: cout<<"matched 1"<<endl;break;
		case 5: cout<<"matched 1"<<endl;break;
		case 10: cout<<"matched 10"<<endl;break;
		default: cout<<"invalid input"<<endl;
	}//after default you may or may not have break
	
	switch(j){
		default: cout<<"Default can be declared anywhere!"<<endl;break;
		case 1: cout<<"matched 1"<<endl;break;
		case 5: cout<<"matched 1"<<endl;
		case 'a': cout<<"matched 'a'"<<endl;
	}//default can be written anywhere but it is a good practice to apply break after it.
	return 0;
}
