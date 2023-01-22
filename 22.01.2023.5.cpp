#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
using namespace std;
int GetRandomNumber(int min, int max){
	//srand(time(NULL));
	int num=min + rand() % (max-min+1);
	return num;
}
int main(){
	cout<<"Введите количество чисел"<<endl;
	int a=0;
	cin>>a;
	vector<int> m;
	
	for (int i=0; i<a; i++){
		m.push_back(GetRandomNumber(1,1000));
	}
	for (int i=0; i<m.size(); i++){
		cout<<m[i]<<endl;
	}
}
