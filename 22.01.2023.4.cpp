#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
using namespace std;
int GetRandomNumber(int min, int max){
	srand(time(NULL));
	int num=min + rand() % (max-min+1);
	return num;
}
int main(){
	cout<<GetRandomNumber(2, 50)<<endl;
	cout<<GetRandomNumber(2, 50)<<endl;
	cout<<GetRandomNumber(2, 50)<<endl;
	cout<<GetRandomNumber(2, 50)<<endl;
	cout<<GetRandomNumber(2, 50)<<endl;
}
