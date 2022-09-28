#include <iostream>
using namespace std;
void print(int a){
	cout<<a<<endl;
}
int main(){
	
//the below loop will be inifinite
/*
	while(1){
		cout<<"I'm infinite!!"	<<endl;
	}

	while(true){
		cout<<"I'm infinite!!"	<<endl;
	}
	
*/

//will never execute the body of the loop
	while(false){
		cout<<"I'll never execute!!"	<<endl;
	}
	while(0){
		cout<<"I'll never execute!!"	<<endl;
	}
	int i=0;
	while(i<10){
		print(i);
		i++;
	}

	//wrtie a table of 6
	
	int x=6, k=1;
	while(k<=10){
		cout<<x<<" * "<<k<<" = "<<(x*k)<<endl;
		k++;
	}

	return 0;
}
