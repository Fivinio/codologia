#include <iostream>
using namespace std;
int main(){
	int n = 0;
	int countNumbers = 0;
	cout<<"Введите количество чисел"<<endl;
	cin>> countNumbers;
	while (n<countNumbers){
		cout<<n<<" ";
		n++;
		if (n%10==0){
			cout<<endl;
		}
	}
}
