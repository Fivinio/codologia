#include <iostream>
using namespace std;
void printMas(int mas[5]) {
	for(int i=0;i<5;i++) {
		cout<<mas[i]<<" ";
	}
}
int main(){
	//setlocate(LC_ALL, "Russian");
	int numbers[5] = { 864,87,2,127,12 };
	cout<<"Which element of the massive you want to rewrite?"<<endl;
	int index = 0;
	cin>>index;
	cout<<"What do you want to rewrite on?"<<endl;
	int newValue = 0;
	cin>>newValue;
	numbers[index]=newValue;
	//cout<<numbers[0]<<" "<<numbers[1]<<" "<<numbers[2]<<" "<<numbers[3]<<" "<<numbers[4]<<endl;
	printMas(numbers);
	return(0);
}
