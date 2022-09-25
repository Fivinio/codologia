#include <iostream>
using namespace std;
int main(){
	enum DaysOfWeek
	{
		Monday = 1,
		Tuesday,
		Wednesday,
		Thursday,
		Friday,
		Saturday,
		Sunday
	};
	cout<<"Узнайте, в честь чего назван день недели"<<endl;
	cout<<"Введите номер дня недели"<<endl;
	int day = Monday;
	cin>>day;
	switch (day)
	{
		case Monday:
			cout<<"Понедельник - Луна";
			break;
		case Tuesday:
			cout<<"Вторник - Марс";
			break;
		case Wednesday:
			cout<<"Среда - Меркурий";
			break;
		case Thursday:
			cout<<"Четверг - Юпитер";
			break;
		case Friday:
			cout<<"Пятница - Венера";
			break;
		case Saturday:
			cout<<"Суббота - Сатурн";
			break;
		case Sunday:
			cout<<"Воскресенье - Солнце";
			break;
		default:
			cout<<"Ошибка"<<endl;
			break;
	}
}
