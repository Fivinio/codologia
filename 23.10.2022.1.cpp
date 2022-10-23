#include <iostream>
using namespace std;
void function1(int func_number){
	func_number = 50;
	cout<<"func 1:  "<<func_number<<endl;
}
void function2(int func_number){
	func_number = 50;
	cout<<"func2:  "<<func_number<<endl;
}  
int main(){
	int func_number = 10;
	cout<<func_number<<endl;
	function1(func_number);
	cout<<func_number<<endl;
	function1(func_number);
	cout<<"print about function2  "<<func_number<<endl;
	return 0;
}
