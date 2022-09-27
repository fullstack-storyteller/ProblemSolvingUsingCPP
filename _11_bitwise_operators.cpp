/*

& => bitwise and
| => bitwise or
^ => bitwise xor
~ => bitwise not
<< => left shift
>> => right shift

x	y	x&y	x|y	x^y
0	0	0	0	0
0	1	0	1	1
1	0	0	1	1
1	1	1	1	0


Apply the bitwise operation in a bit-wise fashion

x=11 (base 10) => x= 00001011
y=5 (base 10) => y=  00000101

x&y= 00000001 = 1(base 10)
x|y= 00001111 = 15(base 10)
x^y= 00001110 = 14(base 10)
~x = see below

if x=11 with 8 bits => x=00001011
=> ~x=11110100 since the first bit is sign bit
=> ~x=2's complement of 11110100 = negative (00001011+1)= -( 00001100 ) = -12 //we did binary addition while adding 1

if z=5 with 8 bits => z=00000101
=> ~z=11111010 => negative number as leading bit is 1
=> ~z = 2's complement of 11111010 = negative (00000101 + 1 )=-( 00000110 )=-6

Left Shift operator:
a<<x = a*(2 to the power x) untill the overflow is reached
say, a=5 => a=00000101 => a<<1 = 00001010 => a<<1=10

Right Shift operator:
a>>x = a/(2 to the power x) untill the underflow is reached
say, a=10 => a=00001010 => a>>1 = 00000101 => a>>1=5

Important Note:
In Shift operators the sign bit is not included. That means if the number is negative
it will remain negative or if a number is positive, it will remain positive.

*/

#include<iostream>
using namespace std;

int main(){
	int x=11, y=5;
	cout << "x = "<<x <<endl;
	cout << "y = "<<y <<endl;
	cout <<"x&y = " <<(x&y)<<endl; //1
	cout <<"x|y = " <<(x|y)<<endl; //15
	cout <<"x^y = " <<(x^y)<<endl; //14
	cout <<"~x = " <<(~x)<<endl<<endl; //-12
	
	char z=5;
	cout << "z = "<<z <<endl;
	cout<< "char ~z = "<<int(~z)<<endl<<endl;//-6
	
	int a=5;
	cout<< "a = "<<a<<endl;
	cout<< "a<<1 = "<<(a<<1)<<endl;//10
	cout<< "a<<2 = "<<(a<<2)<<endl<<endl;//20
	
	int b=-5;
	cout<< "b = "<<b<<endl;
	cout<< "b<<1 = "<<(b<<1)<<endl;//-10
	cout<< "b<<2 = "<<(b<<2)<<endl<<endl;//-20

	cout<< "a = "<<a<<endl;
	cout<< "a>>1 = "<<(a>>1)<<endl;//2
	cout<< "a>>2 = "<<(a>>2)<<endl;//1
	cout<< "a>>3 = "<<(a>>3)<<endl<<endl;//0
	
	cout<< "b = "<<b<<endl;
	cout<< "b>>1 = "<<(b>>1)<<endl;//-3
	cout<< "b>>2 = "<<(b>>2)<<endl;//-2
	cout<< "b>>5 = "<<(b>>5)<<endl<<endl;//-1
	return 0;
}
