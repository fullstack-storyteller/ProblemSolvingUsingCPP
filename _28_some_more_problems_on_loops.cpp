#include<iostream>
using namespace std;

bool checkIfPrime(int d){
	bool isPrime=true;
	for(int t=2; t<d; t++){
		if(d%t==0){
			isPrime=false;
			break;
		}
	}
	return isPrime;
}
void printPrimeNumbers(int x, int y){
	if (x==y){
		if(checkIfPrime(x)){
			cout<<"Only one prime number i.e. "<<x<<endl;
			return;
				
		}
		cout<<"No Prime Numbers prime numbers are present between "<<x<<" and "<<y<<endl;
		return;
		
	}
	if(x>y){//reverse the limits
		int m=x;
		x=y;
		y=m;
	}
	bool found=false;
	for(int z=x; z<=y; z++){
		if(checkIfPrime(z)){
			found=true;
			cout<<"found prime number: "<<z<< endl;
		}
	}
	if(!found){
		cout<<"No prime numbers found between "<<x<<" and "<<y<<endl;
	}
}
void displayDigits(int num){
	//int digit;
	cout<<endl<<"Actual Number: "<<num<<endl;
	while(num>0){
		int	digit =num%10;
		cout<<" digit = "<<digit<<endl;
		num/=10;
	}
}
int ReverseNum(int num){
	//int tempNum=num;
	int revNum=0;
	while(num>0){
		revNum=revNum*10 + num%10;
		num/=10;
	}
	return revNum;
}

void isPalindrome(int num){
	int revNum = ReverseNum(num);
	if(revNum == num)
		cout<<num<<" is a palindrome number"<<endl;
	else
		cout<<num<<" is not a palindrome number"<<endl;
}
bool isFactor(int x, int f){
	if(f%x==0)
		return true;
	return false;
}
void listFactorOf(int f, int s, int e){
	if(f<s){
		cout<<"No factor of "<<f<<" is present between "<<s<<" and "<<e<<endl<<endl;
		return;
	}
	
	
	if(e==0||f==0){
		cout<<"end and factorNumber can't be zero"<< endl<<endl;
		return;
	}
	cout<<"factors of "<<f<<" between "<<s<<" and "<<e<<endl;
	if(s==0) s=1;	
	
	for(int l=s; l<e; l++){
		if(isFactor(l, f)){
			cout<<l<<" is a factor of "<<f<<endl;
		}
	}
	cout<<endl;
}


void isPerfectNumber(int x){
	if(x<=0){
		cout<<x<<" is not a perfect number"<<endl<<endl;
		return;
		
	}
	int sum=0;
	for(int i=1; i<x; i++){
		if(isFactor(i,x)){
			sum+=i;
		}
	}
	if(sum!=x){
		cout<<x<<" is not a perfect number"<<endl<<endl;
		return;
	}
	cout<<x<<" is a perfect number"<<endl<<endl;
}

void isArmstrongNumber(int x){
	int tempNum=x;
	int arms=0;
	while(x>0){
		arms = arms + (x%10)*(x%10)*(x%10);
		x/=10;
	}
	if(arms == tempNum){
		cout<<tempNum<<" is a armstrong number."<<endl<<endl;
		return;
	}
	cout<<tempNum<<" is not a armstrong number."<<endl<<endl;
}

void gcdof2(int a, int b){
	int num1=a, num2=b;
	if(a==0 || b==0){
		cout<<"GCD can't be obtained if either of the number is zero"<<endl<<endl;
		return;
	}
	if(a==b){
		cout<<"GCD of "<<a<<" and "<<b<<" = "<<a<<endl<<endl;
		return;
	}
	if(a>b){
		int m=a;
		a=b;
		b=m;
	}
	int gcd=b%a;
	while(gcd>0){
		
		b=a;
		a=gcd;
		gcd=b%a;
	}
	cout<< "GCD of "<<num1<<" and "<<num2<<" = "<<a<<endl<<endl;
	
}
int main(){
	//sum of first n numbers
	
	int n=5, sumofn=0;
	
	for(int i=1; i<=n; i++){
		sumofn+=i;
	}
	cout<<"Sum of first "<<n<<" numbers = "<<sumofn<<endl;
	
	//factorial of a number
	int x=5, factorial=1;
	int y=x;
	while(x>0){
		factorial*=x;
		x--;
	}
	cout<<"Factorial of "<<y<<" = "<<factorial<<endl;
	
	
	//prime number between p and q
	int p=18, q=7;
	printPrimeNumbers(p, q);
	
	//Display digits of a number
	int num =1234519;
	displayDigits(num);

	
	//reverse a number
	num = 123215;
	cout<<endl<<"Before reversing num = "<<num<<endl;
	cout<<"After reversing num = "<<ReverseNum(num)<<endl<<endl;
	
	//is number palindrome
	isPalindrome(121);
	isPalindrome(1234);
	cout<<endl;
	
	//list factor of a number n between start and end limits
	int start=3, end=50;
	int factorOf = 18;
	listFactorOf(18, 3, 50);
	
	listFactorOf(18, 19, 50);
	listFactorOf(18, 1, 17);
	listFactorOf(18, 0, 17);
	
	
	//perfect number
	isPerfectNumber(6);
	isPerfectNumber(16);
	
	
	//armstrong number
	isArmstrongNumber(153);
	isArmstrongNumber(1503);
	
	//gcd of two number
	gcdof2(21, 30);
	gcdof2(100, 120);
	

	return 0;
}
