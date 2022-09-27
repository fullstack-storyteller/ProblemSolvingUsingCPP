#include<iostream>
using namespace std;
int main(){
	if(true){//will display
		cout<<"Hello is displayed, when if condition is set to value `true`"<<endl;
	}
	if(10){//will display
		cout<<"Hello is displayed, when if condition is set to value `10`"<<endl;
	}
	if(-1){//will display
		cout<<"Hello is displayed, when if condition is set to value `-1`"<<endl;
	}
	if(0.25){//will display
		cout<<"Hello is displayed, when if condition is set to value `0.25`"<<endl;
	}
	if(-0.25){//will display
		cout<<"Hello is displayed, when if condition is set to value `-0.25`"<<endl;
	}
	if(0){//this will never display as 0 stands for false
		cout<<"Hello is displayed, when if condition is set to value `0`"<<endl;
	}
	if('a'){//will display
		cout<<"Hello is displayed, when if condition is set to value 'a'"<<endl;
	}
	return 0;
}
