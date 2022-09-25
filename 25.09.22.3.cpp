#include <iostream>
using namespace std;
int main(){
	cout<<"Введите a, b, c"<<endl;
	int a = 0;
	int b = 0;
	int c = 0;
	cin>>a;
	cin>>b;
	cin>>c;
	if (a>b and a>c) {
		cout<<a<<endl;
	}
	else if (b>c and b>a){
		cout<<b<<endl;
	}
	else if (c>a and c>b){
		cout<<c<<endl;
	}
	else if (a=b and c>b){
		cout<<c<<endl;
	}
	else if (a=b and b>c){
		cout<<b<<endl;
	}
	else if (a=c and b>c){
		cout<<b<<endl;
	}
	else if (a=c and c>b){
		cout<<c<<endl;
	}
	else if (b=c and a>b){
		cout<<a<<endl;
	}
	else if (b=c and b>a){
		cout<<b<<endl;
	}
	else if (a=b=c){
		cout<<a<<endl;
	}
	
}
	
