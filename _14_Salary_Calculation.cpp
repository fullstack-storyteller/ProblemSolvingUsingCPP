#include<iostream>
using namespace std;

int main(){
	float basicSalary=0.0f, allowancePercentage=0.0f, deductionPercentage=0.0f;
	float a=100.5;
	float b=100.5f;
	//cout <<~25<<endl; 
	//when ~ is applied on positive integer x then result will be -(x+1). example ~25=-26
	cout<<"a = 100.5, sizeof(a) = "<<sizeof(a)<<endl;
	cout<<"b = 100.5f, sizeof(b) = "<<sizeof(b)<<endl;
	
	
	cout<<endl<<"Enter your basic salary: "<<endl;
	cin>>basicSalary;
	cout<<"Enter your allowance percentage: "<<endl;
	cin>>allowancePercentage;
	cout<<"Enter your deduction percentage: "<<endl;
	cin>>deductionPercentage;
	//float netAllowance = basicSalary * allowancePercentage/100f; - this is wrong because of 100f, it should be 100.0f
	float netAllowance = basicSalary * allowancePercentage/100.0f;
	float netDeduction = basicSalary * deductionPercentage/100.0f;
	/*
	remember: temp = 100.5 -> double literal
			  temp = 100.5f -> float literal
	*/
	float netSalary = basicSalary + (netAllowance - netDeduction);
	cout<< "Your net Salary: "<<netSalary<<endl;
	cout<< "Your net Allowance: " <<netAllowance<<endl;
	cout<< "Your net Deduction: " <<netDeduction<<endl;
	return 0;
}
