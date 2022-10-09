#include <iostream>
using namespace std;
int pom(int base, int exp){
	int total = 1;
	for (int i = 0;i<exp;i++){
		total = total*base;
	}
	return total;
}			
double neg(int base1, int exp1){
	double total1 = 1;
	int exp2 = 0;
	exp2 = exp1*(-1);
	for (int j=0;j<exp2;j++){
		total1 = total1*base1;
	}
	double total2 = 1/total1;
	return total2;
}
int main(){
	cout<<neg(2,-3)<<endl;
}
