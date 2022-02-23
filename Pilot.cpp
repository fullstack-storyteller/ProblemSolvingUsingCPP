#include<iostream>
using namespace std;

int main(){
	cout<<"Hello World!";
	int a=0;
	a=23;
	int sum=0;
	int A[] = {1, 2, 3, 4, 5};
	for(auto x : A){
		sum=sum+x;
	}
	cout<<sum;
	return sum;
}
