#include <iostream>
using namespace std;
int main(){
	double a = 0;
	double b = 0;
	cin>>a;
	cin>>b;
	try {
		if (b ==0) throw 999;
			cout<<"a/b:  "<<a/b<<endl;
	}
	catch (int e){
		if (e==999) {
			cout<<"На ноль делить нельзя!"<<endl;
		}
	}
	return 0;
}
	
