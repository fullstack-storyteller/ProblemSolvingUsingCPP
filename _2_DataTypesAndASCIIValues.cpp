#include<iostream>

using namespace std;
int main(){
	
	cout << "Sizes of Common Datatypes"<< endl;
	cout << endl;
	
	cout << "Size of short: "<<sizeof(short)<<" bytes."<< endl;
	//cout << "Size of short short: "<<sizeof(short short)<<" bytes."<< endl;
	//cout << "Size of long short: "<<sizeof(long short)<<" bytes."<< endl;
	cout << "Size of signed short: "<<sizeof(signed short)<<" bytes."<< endl;
	cout << "Size of unsigned short: "<<sizeof(unsigned short)<<" bytes."<< endl;
	cout << "SHRT_MIN = " << SHRT_MIN << endl;
	cout << "SHRT_MAX = " << SHRT_MAX << endl;
	cout << "USHRT_MAX = " << USHRT_MAX << endl;
	cout << endl;
	
	cout << "Size of int: "<<sizeof(int)<<" bytes."<< endl;
	cout << "Size of short int: "<<sizeof(short int)<<" bytes."<< endl;
	cout << "Size of long int: "<<sizeof(long int)<<" bytes."<< endl;
	cout << "Size of signed int: "<<sizeof(signed int)<<" bytes."<< endl;
	cout << "Size of unsigned int: "<<sizeof(unsigned int)<<" bytes."<< endl;
	cout << "INT_MIN (int) = " << INT_MIN << endl;
	cout << "INT_MAX (int) = " << INT_MAX << endl;
	cout << "UINT_MAX (unsigned int)= " << UINT_MAX << endl;
	cout << endl;
	
	cout << "Size of float: "<<sizeof(float)<<" bytes."<< endl; //float has no variations
	cout << endl;
	//cout << "Size of short float: "<<sizeof(short float)<<" bytes."<< endl;
	//cout << "Size of long float: "<<sizeof(long float)<<" bytes."<< endl;
	//cout << "Size of signed float: "<<sizeof(signed float)<<" bytes."<< endl;
	//cout << "Size of unsigned float: "<<sizeof(unsigned float)<<" bytes."<< endl;
	
	cout << "Size of double: "<<sizeof(double)<<" bytes."<< endl; //double has only long double as variations
	//cout << "Size of short double: "<<sizeof(short double)<<" bytes."<< endl;
	cout << "Size of long double: "<<sizeof(long double)<<" bytes."<< endl;
	//cout << "Size of signed double: "<<sizeof(signed double)<<" bytes."<< endl;
	//cout << "Size of unsigned double: "<<sizeof(unsigned double)<<" bytes."<< endl;
	cout << endl;
	
	cout << "Size of bool: "<<sizeof(bool)<<" bytes."<< endl; //bool has no variations
	//cout << "Size of short bool: "<<sizeof(short bool)<<" bytes."<< endl;
	//cout << "Size of long bool: "<<sizeof(long bool)<<" bytes."<< endl;
	//cout << "Size of signed bool: "<<sizeof(signed bool)<<" bytes."<< endl;
	//cout << "Size of unsigned bool: "<<sizeof(unsigned bool)<<" bytes."<< endl;
	cout << endl;
	
	cout << "Size of char: "<<sizeof(char)<<" bytes."<< endl; //char has only the below variations
	//cout << "Size of short char: "<<sizeof(short char)<<" bytes."<< endl; 
    //cout << "Size of long char: "<<sizeof(long char)<<" bytes."<< endl; 
	cout << "Size of signed char: "<<sizeof(signed char)<<" bytes."<< endl; 
	cout << "Size of unsigned char: "<<sizeof(unsigned char)<<" bytes."<< endl; 	
	cout << "CHAR_BIT (Number of bits in the smallest variable that is not a bit field.) = "<<CHAR_BIT<<endl;
	cout << "SCHAR_MIN (signed char) = "<<SCHAR_MIN<<endl;
	cout << "SCHAR_MAX (signed char)= "<<SCHAR_MAX<<endl;
	cout << "UCHAR_MAX (unsigned char)= "<<UCHAR_MAX<<endl;
	cout << "CHAR_MIN (char)= "<<CHAR_MIN<<endl;
	cout << "CHAR_MAX (char)= "<<CHAR_MAX<<endl;
	cout << "MB_LEN_MAX (Maximum number of bytes in a multicharacter constant.) = "<<MB_LEN_MAX<<endl;
	cout << endl;
	
	cout << "Size of wchar_t: "<<sizeof(wchar_t)<<" bytes."<< endl; //wide character type
	cout << "Size of short wchar_t: "<<sizeof(short wchar_t)<<" bytes."<< endl; 
    cout << "Size of long wchar_t: "<<sizeof(long wchar_t)<<" bytes."<< endl; 
	cout << "Size of signed wchar_t: "<<sizeof(signed wchar_t)<<" bytes."<< endl; 
	cout << "Size of unsigned wchar_t: "<<sizeof(unsigned wchar_t)<<" bytes."<< endl; 	
	cout << endl;
	
	cout << "Size of long: " << sizeof(long) << " bytes." << endl;
	//cout << "Size of short long: " << sizeof(short long) << " bytes." << endl;
	cout << "Size of long long: " << sizeof(long long) << " bytes." << endl;
	cout << "Size of signed long: " << sizeof(signed long) << " bytes." << endl;
	cout << "Size of unsigned long: " << sizeof(unsigned long) << " bytes." << endl;
	cout << "Size of signed long long: " << sizeof(signed long long) << " bytes." << endl;
	cout << "Size of unsigned long long: " << sizeof(unsigned long long) << " bytes." << endl;
	cout << "LONG_MIN (long) = "<<LONG_MIN<<endl;
	cout << "LONG_MAX (long) = "<<LONG_MAX<<endl;
	cout << "ULONG_MAX (unsigned long) = "<<ULONG_MAX<<endl;
	cout << "LLONG_MIN (long long) = "<<LLONG_MIN<<endl;
	cout << "LLONG_MAX (long long) = "<<LLONG_MAX<<endl;
	cout << "ULLONG_MIN (unsigned long long) = "<<ULLONG_MAX<<endl;	

	/* Output
	
Sizes of Common Datatypes

Size of short: 2 bytes.
Size of signed short: 2 bytes.
Size of unsigned short: 2 bytes.
SHRT_MIN = -32768
SHRT_MAX = 32767
USHRT_MAX = 65535

Size of int: 4 bytes.
Size of short int: 2 bytes.
Size of long int: 4 bytes.
Size of signed int: 4 bytes.
Size of unsigned int: 4 bytes.
INT_MIN (int) = -2147483648
INT_MAX (int) = 2147483647
UINT_MAX (unsigned int)= 4294967295

Size of float: 4 bytes.

Size of double: 8 bytes.
Size of long double: 16 bytes.

Size of bool: 1 bytes.

Size of char: 1 bytes.
Size of signed char: 1 bytes.
Size of unsigned char: 1 bytes.
CHAR_BIT (Number of bits in the smallest variable that is not a bit field.) = 8
SCHAR_MIN (signed char) = -128
SCHAR_MAX (signed char)= 127
UCHAR_MAX (unsigned char)= 255
CHAR_MIN (char)= -128
CHAR_MAX (char)= 127
MB_LEN_MAX (Maximum number of bytes in a multicharacter constant.) = 5

Size of wchar_t: 2 bytes.
Size of short wchar_t: 2 bytes.
Size of long wchar_t: 4 bytes.
Size of signed wchar_t: 2 bytes.
Size of unsigned wchar_t: 4 bytes.

Size of long: 4 bytes.
Size of long long: 8 bytes.
Size of signed long: 4 bytes.
Size of unsigned long: 4 bytes.
Size of signed long long: 8 bytes.
Size of unsigned long long: 8 bytes.
LONG_MIN (long) = -2147483648
LONG_MAX (long) = 2147483647
ULONG_MAX (unsigned long) = 4294967295
LLONG_MIN (long long) = -9223372036854775808
LLONG_MAX (long long) = 9223372036854775807
ULLONG_MIN (unsigned long long) = 18446744073709551615
	
	*/
	
	
}
