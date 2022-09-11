#include <iostream>
using namespace std;
int Calculator(int a,int b);


int main(){
	int a,b = 0;
	cout<<"Input a"<<endl;
	cin>>a;
	cout<<"Input b"<<endl;
	cin>>b;
	Calculator(a,b);
}
int Calculator(int a, int b){
	cout<<"Summ = "<<a+b<<endl;
	cout<<"Raznost = "<<a-b<<endl;
	cout<<"Proizv = "<<a*b<<endl;
	cout<<"Chastnoe = "<<a/b<<endl;
	return 0;
}
