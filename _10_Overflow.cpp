/*
say char x=127 -> binary representation = 01111111, where 0 in the front is the sign bit depicting this is = +127
if we do ++x -> it will 01111111 + 1 => 10000000, 1 in the front is the sign bit depicting this is =  -(2's complement of 10000000) = -(01111111 + 1) = -(10000000) = -(2*2*2*2*2*2*2*2) = 128 
*/
#include<iostream>

using namespace std;

int main(){
	int y=INT_MIN;
	cout<< "[INT_MIN] y => "<<y<<endl;
	--y;
	cout<< "after --y => "<<y<<endl;
	cout<< "[INT_MAX] => "<<y<<endl;
	cout<< endl;
	char x=CHAR_MAX;
	cout<< "[CHAR_MAX] or x => "<<x<<endl;
	++x;
	cout<< "after ++x => "<<x<<endl; //this is overflow
	cout<< "[CHAR_MIN] => "<<x<<endl;
	return 0;
}

/*
Output:
[INT_MIN] y => -2147483648
after --y => 2147483647
[INT_MAX] => 2147483647

[CHAR_MAX] or x => ¦
after ++x => Ç
[CHAR_MIN] => Ç

*/
