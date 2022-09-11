#include <iostream>
using namespace std;
//const int MINUTES_IN_HOUR = 60;
//const int HOURS_IN_DAY = 24;
//constexpr int MINUTES_IN_DAY = MINUTES_IN_HOUR * HOURS_IN_DAY;
int main(){
	int MinIn, m, h, d =0;
	cout<<"Input minutes"<<endl;
	cin>>MinIn;
	d=MinIn/1440;
	cout<<"Amount of days: "<<d<<endl;
	int MinInDay=MinIn%1440;
	h = MinInDay/60;
	cout<<"Hours: "<<h<<endl;
	m = MinInDay%60;
	cout<<"Minutes: "<<m<<endl;
	return 0;
}
