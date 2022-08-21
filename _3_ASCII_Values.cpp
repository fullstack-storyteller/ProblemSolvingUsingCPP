#include<iostream>
using namespace std;
int main(){
	cout << "ASCII Values of A-Z characters"<<endl;
	char capitalAlphabets[26] = {'A', 'B', 'C', 'D', 'E', 'F','G', 'H', 'I', 'J', 'K', 'L', 'M','N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	char arrayOfInt[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	for(auto x: capitalAlphabets){
		//toascii(char) - it takes a character as input
		cout << "ASCII Value of "<< x << ": "<<toascii(x)<<endl; //65-90
	}
	cout <<endl;
	cout << "ASCII Values of 0-9 characters"<<endl;
	for(auto x: arrayOfInt){
		cout << "ASCII value of "<< x << ": "<<toascii(x)<< endl; //48-57
		//to convert the ascii values to corresponding characters simply use char() method
	}
	cout <<endl;
	cout << "ASCII Values of a-z characters"<<endl;
	for(auto x: capitalAlphabets){
		//ascii value tolower(char) takes a char but return the ascii value of the char after making it lowercase
		//we need to use the char() method to convert it back to character.
		cout << "ASCII Value of "<< char(tolower(x)) << ": "<<toascii(char(tolower(x)))<<endl; //97-122
	}
	
/*
ASCII Values of A-Z characters
ASCII Value of A: 65
ASCII Value of B: 66
ASCII Value of C: 67
ASCII Value of D: 68
ASCII Value of E: 69
ASCII Value of F: 70
ASCII Value of G: 71
ASCII Value of H: 72
ASCII Value of I: 73
ASCII Value of J: 74
ASCII Value of K: 75
ASCII Value of L: 76
ASCII Value of M: 77
ASCII Value of N: 78
ASCII Value of O: 79
ASCII Value of P: 80
ASCII Value of Q: 81
ASCII Value of R: 82
ASCII Value of S: 83
ASCII Value of T: 84
ASCII Value of U: 85
ASCII Value of V: 86
ASCII Value of W: 87
ASCII Value of X: 88
ASCII Value of Y: 89
ASCII Value of Z: 90

ASCII Values of 0-9 characters
ASCII value of 0: 48
ASCII value of 1: 49
ASCII value of 2: 50
ASCII value of 3: 51
ASCII value of 4: 52
ASCII value of 5: 53
ASCII value of 6: 54
ASCII value of 7: 55
ASCII value of 8: 56
ASCII value of 9: 57

ASCII Values of a-z characters
ASCII Value of a: 97
ASCII Value of b: 98
ASCII Value of c: 99
ASCII Value of d: 100
ASCII Value of e: 101
ASCII Value of f: 102
ASCII Value of g: 103
ASCII Value of h: 104
ASCII Value of i: 105
ASCII Value of j: 106
ASCII Value of k: 107
ASCII Value of l: 108
ASCII Value of m: 109
ASCII Value of n: 110
ASCII Value of o: 111
ASCII Value of p: 112
ASCII Value of q: 113
ASCII Value of r: 114
ASCII Value of s: 115
ASCII Value of t: 116
ASCII Value of u: 117
ASCII Value of v: 118
ASCII Value of w: 119
ASCII Value of x: 120
ASCII Value of y: 121
ASCII Value of z: 122

*/
}
