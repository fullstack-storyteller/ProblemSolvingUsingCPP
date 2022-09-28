#include<iostream>
using namespace std;

void printMe(int a){
	cout<<a<<endl;
}
int main(){
	for(int i=0; i<5; i++){
		printMe(i);
	}
	cout<<endl;
	int j=5;
	for(;j<10; j++){//this also correct, j is available outside for block also
		printMe(j);
	}  
	
	cout<<endl;
	
	int p=12;
	for(;p<16;){//also correct
		p++;
		printMe(p);
	}
	cout<<endl;	
	int m=20;
	for(;;){
	/*also correct, but if you are not controlling the break condition
	 the loop might become infinte
	*/
		m++;
		printMe(m);
		if (m>25){
			break;
		}
	}
	return 0;
}
