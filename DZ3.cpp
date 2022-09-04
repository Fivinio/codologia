#include <iostream>

using namespace std;

int func(int r, int p) {
	cout<<1.33*p*r*r*r<<endl;
	return 0;
}
int main() {
	func(10, 3.14);
	return 0;
}
