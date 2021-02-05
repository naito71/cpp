#include<iostream>

int add(int x,int y){
	return x+y;
}

int add(int x){
	return x+1;
}

int main(void){
	std::cout<<add(1,2)<<std::endl;
	std::cout<<add(1)<<std::endl;
	return 0;
}
