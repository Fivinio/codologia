#include <iostream>
using namespace std;
int max(int a, int b){
	if (a>b){
		return a;
	}
	else {
		return b;
	}
}	
int max(int a, int b, int c){
	return max(max(a,b),c);	
}	
				
int main(){
	cout<<max(2,3,5)<<endl;
	return 0;
}


	
