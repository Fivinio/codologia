#include <iostream>
using namespace std;
double power(int a, int n){
	if (n==0) return 1;
	else if (n==1) return a;
	else if (n<0) return 1/power(a,n*(-1));
	else return a*power(a,n-1);
}
int main(){
	cout<<power(5,-2)<<endl;
}
