#include <iostream>
using namespace std;
int main(){
	int countNumbers = 1000;
	int n =0;
	while (n<countNumbers){
		if (n<10){
			cout<<"00"<<n<<" ";
		}
		else if (n>10 and n<100){
			cout<<"0"<<n<<" ";
		}
		else if (n>=100){
			cout<<n<<" ";
		}
		if (n%10==0 and n!=0){
			cout<<endl;
		}
		n++;
	}
}
	
