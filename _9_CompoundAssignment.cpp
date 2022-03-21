#include<iostream>
using namespace std;
int main(){
	int a=2, b=3;
//	we know how +=, -=, *=, /=, and %= work
//  now we will see how |= and &= work
//  bitwise and (&) is AND operation on every single bit 2&3 = 010 & 011 = 010 = 2
//  bitwise or (|) is OR operation on every single bit 2|3 = 010 | 011 = 011 = 3
	cout << a <<" bitwise and (&) "<<b<<" = "<<(a&b)<<endl;
	cout << a <<" bitwise or (|) "<<b<<" = "<<(a|b)<<endl;
	
	a&=b;
	cout << "After (a&=b), i.e. a=a&b, the value of a = "<<a<<endl;
	a|=b;
	cout << "After (a|=b), i.e. a=a|b, the value of a = "<<a<<endl;
	return 0;
}
