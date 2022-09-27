#include<iostream>
int main(){
	int x, y;
	std::cout<<"Enter x, and y"<<std::endl;
	std::cin>>x>>y;
	if (y==0){
		std::cout<<"Division by zero attempted!!"<<std::endl;
		return 0;
		
	}
	float z=float(x)/y;
	std::cout<<x<<" / "<<y<<" = "<<z<<std::endl;
}
