#include <iostream>
using namespace std;

int main(){
	//get input
	string name;
	cout<<"Enter your name: ";
	cin>>name	;//take the first word only even if multiple words supplied using spaces given
	cout<<"Your name is "<<name<<endl; 
	/*
	Enter your name: Manish kumar
	Your name is Manish
	*/
	cin.sync(); //clear the input buffer
	
	cout<<"Enter your name again: ";
	getline(cin, name);
	
	//read the entire line
	/*
	Enter your name again: mansoon verma
	Your full name is mansoon verma
	*/
	cout<<"Your full name is "<<name<<endl; 
}
