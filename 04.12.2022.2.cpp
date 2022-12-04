#include <iostream>
#include <sstream>
#include <string>
using namespace std;
class Data {
private:
	int days;
	int months;
	int years;
	private dataInString;
public:
	Data(int d, int m, int y) try {
		if ((d<0) || (d>30)) throw 1;
		if ((m<0) || (m>12)) throw 2;
		if (y<0) throw 3;
		days = d;
		months = m;
		years = y;
	}
	catch (int error){
		if (error==1) cout<<"Неверно введены дни!"<<endl;
		if (error==2) cout<<"Неверно введены месяцы!"<<endl;
		if (error==3) cout<<"Неверно введены года!"<<endl;
	}
	void ShowData(){
		cout<<"Дата:  "<<years<<" лет, "<<months<<" месяцев, "<<days<<" дней."<<endl;
	}
	//Data operator 
	//Data 
	void AddData(int d, int m, int y){
		if (days+d>30){
			days=days+d-30;
			months=months+1;
		}
		else days=days+d;
		if (months+m>12){
			months=months+m-12;
			years=years+1;
		}
		else months=months+m;
		cout<<"Время добавлено, новая дата: "<<years<<" лет, "<<months<<" месяцев, "<<days<<" дней."<<endl;
	}
	void ReduceData(int d, int m, int y){
		if ((y<years) || ((y=years) && (m>months)) || ((y=years) && (m=months) && (d>days))){
			cout<<"Ошибка!"<<endl;
		}
		else {
			if (d>days){
				days = days-d+30;
				months = months-1;
			}
			else days=days-d;
			if (m>months){
				months = months-m+12;
				years=years-1;
			}
			else months=months-m;
		}
		cout<<"Время убавлено, новая дата: "<<years<<" лет, "<<months<<" месяцев, "<<days<<" дней."<<endl;
	}
	operator const char* () {
		ostringstream formateData;
		formateData << day<<month<<year<<endl;
		dataInString=formateddata.str()
		return dataInString.c_str()
	}
};
int main(){
	//Data age(5,6,12);
	try {
		//Data age1(5,17,16);
		age = age1;
	}
	catch (...){
		cout<<"Объект не создан!"<<endl;
	}
	age.ShowData();
	//age.ShowData();
	//age.AddData(14,6,0);
	//age.ReduceData(27,9,15);
	return 0;
}
