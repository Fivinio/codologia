#include <iostream>
using namespace std;
int func(int n){
	if (n==1) return 1;
	if (n==2) return 3;
	else return func(n-1)*n+func(n-2)*(n-1);
}
int main(){
	cout<<func(4)<<endl;
	return 0;
}
		
