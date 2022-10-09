#include <iostream>
using namespace std;
int main(){
	setlocale(LC_ALL, "Russian");
	cout<<"Введите номер месяца"<<endl;
	int month =0;
	cin>>month;
	switch(month){
		case 1:
		case 2:
		case 12:
			cout<<"Зима"<<endl;
			break;
		case 3:
		case 4:
		case 5:
			cout<<"Весна"<<endl;
			break;
		case 6:
		case 7:
		case 8:
			cout<<"Лето"<<endl;
			break;
		case 9:
		case 10:
		case 11:
			cout<<"Осень"<<endl;
			break;
		default:
			cout<<"Ошибка!"<<endl;
		}
	return 0;
}
