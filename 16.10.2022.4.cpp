#include <iostream>
#include <math.h>
using namespace std;
int length(int x1, int y1, int x2, int y2){
	int a = 0;
	a = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	return a;
}
int main(){
	cout<<length(5,5,2,4)<<endl;
	return 0;
}

