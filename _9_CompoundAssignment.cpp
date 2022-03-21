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
	
	int x=5, y=0;
	cout << "Before Increment operation: x = "<<x <<" and y = "<<y<<endl;
	y=x++;
	cout << "Post Increment (y=x++): x = "<<x<<" and y = "<<y<<endl;
	y=++x;
	cout << "Pre Increment (y=++x): x = "<<x<<" and y = "<<y<<endl;
	y=x--;
	cout << "Post Decrement (y=x--): x = "<<x<<" and y = "<<y<<endl;
	y=--x;
	cout << "Pre Decrement (y=--x): x = "<<x<<" and y = "<<y<<endl;
	cout<< "(2*++x+2*x++) = "<<(2*++x+2*x++)<<" and x = "<<x<<endl;//got 26 as output but every compiler might differ how it intepret this expression. hence avoid using post/pre increments like this.
	cout<< "(2*x+++2*++x) = "<<(2*x+++2*++x)<<" and x = "<<x<<endl;//got 32, 9
	return 0;
}
