#include <iostream>
using namespace std;
void InsertSort(int*mas, int n){
	for (int i=0;i<n;i++){
		int key =i * 1;
		int tmp = mas[key];
		for (int j=i;j>0;j--){
			if (tmp<mas[j-1]){
				mas[j]=mas[j-1];
				key = j-1;
			}
		}
		mas[key] =tmp;
	}
}
int main(){
	int n;
	cout<<"Введите количество чисел"<<endl;
	cin>>n;
	int*mas=new int[n];
	for (int i=0;i<n;i++){
		mas[i] = rand()%100;
	}
	for (int i=0;i<n;i++){
		//cout<<mas[i]<<" ";
	}
	cout<<endl;
	InsertSort(mas,n);
	for (int i=0;i<n;i++){
		cout<<mas[i]<<" ";
	}
	return 0;
}
