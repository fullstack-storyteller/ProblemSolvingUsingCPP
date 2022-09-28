/*
comparison will happen from the first condition.
It is linear like a ladder from top to bottom.

*/

#include<iostream>
using namespace std;
int main(){
	cout<<"Enter day number 1...7:"<<endl;
	
	int i;
	cin>>i;
	if(i==1){
		cout<<"Monday"<<endl;
	}
	else if(i==2){
		cout<<"Tuesday"<<endl;
	}
	else if(i==3){
		cout<<"Wednesday"<<endl;
	}
	else if(i==4){
		cout<<"Thursday"<<endl;
	}
	else if(i==5){
		cout<<"Friday"<<endl;
	}
	else if(i==6){
		cout<<"Saturday"<<endl;
	}
	else if(i==7){
		cout<<"Sunday"<<endl;
	}
	else{
		cout<<"Invalid Day!!"<<endl;
	}
	
	return 0;
}
