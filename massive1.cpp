#include <iostream>
using namespace std;
int main() {
	long double numbers[5]={1,2,3,4,5};
	cout<<numbers[1]<<endl;
	numbers[1]= 100;
	cout<<numbers[5]<<endl;
	return 0;
}
