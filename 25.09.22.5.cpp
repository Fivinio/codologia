#include <iostream>
using namespace std;
int main(){
	cout<<"Введите часы и минуты"<<endl;
	int h =0;
	int m =0;
	cin>>h;
	cin>>m;
	if ((h<6) or (h=6 and m <= 30))
	{
		cout<<"Утро"<<endl;
	}
	else if ((h=6 and m>30) or (h>6 and h<15) or (h=15 and m<40))
	{
		cout<<"День"<<endl;
	}
	else if ((h=15 and m>40) or (h>15 and h<20) or (h=20 and m<30))
	{
		cout<<"Вечер"<<endl;
	}
	else
	{
		cout<<"Ночь"<<endl;
	}
}

