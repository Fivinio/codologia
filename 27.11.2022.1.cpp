#include <iostream>
using namespace std;
class Dollar;
class Rouble {
private:
	int rouble;
	int cents;
public:
	Rouble(int r, int k){
		rouble = r;
		cents = k;
	}
	void balance(){
		cout<<"У вас на счёте: "<<rouble<<" рублей  "<<cents<<" копеек"<<endl;
	}
	void addMoney(int r, int k){
		if (cents+k>=100){
			rouble=rouble+r+1;
			cents=cents+k-100;
			cout<<"Дентги добавили, ваш новый счёт: "<<rouble<<" рублей  "<<cents<<" копеек"<<endl;
		}
		else {
			rouble=rouble+r;
			cents=cents+k;
			cout<<"Деньги добавили, ваш новый счёт: "<<rouble<<" рублей  "<<cents<<" копеек"<<endl;
		}
	}
	void reduceMoney(int r, int k){
		if ((r>rouble) || ((r=rouble) && (k>cents))){
			cout<<"Ты дурачёк?"<<endl;
		}
		else if (cents-k<0){
			rouble=rouble-r-1;
			cents=cents-k+100;
			cout<<"Деньги вывели, ваш новый счёт: "<<rouble<<" рублей  "<<cents<<" копеек"<<endl;
		}
		else {
			rouble=rouble-r;
			cents=cents-k;
			cout<<"Деньги вывели, ваш новый счёт: "<<rouble<<" рублей  "<<cents<<" копеLLLек"<<endl;
		}
	}
	void changeCurrency(){
		int m=rouble*100+cents;
		long double l=(1.0/60.0)*m;
		cout<<"Выполнен перевод из рублей в доллары, на вашем счёте: "<<l/100<<" долларов"<<endl;
	}
	Dollar convert();
};
class Dollar{
private:
	int dollar;
	int cents1;
public:
	Dollar(int d, int c){
		dollar = d;
		cents1 = c;
	}
	void balance(){
		cout<<"У вас на счёте: "<<dollar<<" долларов  "<<cents1<<" центов"<<endl;
	}
	void addMoney(int d, int c){
		if (cents1+c>=100){
			dollar=dollar+d+1;
			cents1=cents1+c-100;
			cout<<"Деньги добавили, ваш новый счёт: "<<dollar<<" долларов  "<<cents1<<" центов"<<endl;
		}
		else {
			dollar=dollar+d;
			cents1=cents1+c;
			cout<<"Деньги добавили, ваш новый счёт: "<<dollar<<" долларов  "<<cents1<<" центов"<<endl;
		}
	}
	void reduceMoney(int d, int c){
		if ((d>dollar) || ((d=dollar) && (c>cents1))){
			cout<<"Ты дурачёк?"<<endl;
		}
		else if (cents1-c<0){
			dollar=dollar-d-1;
			cents1=cents1-c+100;
			cout<<"Деньги вывели, ваш новый счёт: "<<dollar<<" долларов  "<<cents1<<" центов"<<endl;
		}
		else {
			dollar=dollar-d;
			cents1=cents1-c;
			cout<<"Деньги вывели, ваш новый счёт: "<<dollar<<" долларов  "<<cents1<<" центов"<<endl;
		}
	}
	Rouble changeCurrency(){
		int m=dollar*100+cents1;
		long double l=m*60;
		cout<<"Выполнен перевод из долларов в рубли, ваш счёт: "<<l/100<<" рублей"<<endl;
		Rouble a(l/100,0);
		return a;
	}
	Rouble convert();
};
Dollar Rouble::convert()
{
	return Dollar(rouble/60, cents/60);
}
Rouble Dollar::convert()
{
	return Rouble(dollar*60, cents1*60);
}

int main(){
	Rouble wallet1(8,63);
	Dollar wallet2(7,25);
	wallet2.balance();
	//wallet1.addMoney(5,65);
	//wallet1.changeCurrency();
	//Rouble wallet3= wallet2.changeCurrency();
	//wallet3.balance();
	//wallet1.reduceMoney(6,22);
	wallet1 = wallet2.convert();
	wallet1.balance();
	return 0;
}
