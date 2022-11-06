#include <iostream>
using namespace std;
class Student{
public:
	string name;
	int course;
	string ability;
	string future_profession;
	void Talk(string a){
		cout<<"Hello, "<<name<<"! "<<"You are on the "<<course<<" course. "<<ability<<" is your greatest ability. "<<"You are thinking about being "<<future_profession<<endl;
	}
};

int main(){
	Student firstStudent;
	firstStudent.name = "Alex";
	firstStudent.course = 2;
	firstStudent.ability = "Fast-counting";
	firstStudent.future_profession = "Engineer";
	Student secondStudent;
	secondStudent.name = "Artyom";
	secondStudent.course = 4;
	secondStudent.ability = "Fast-typing";
	secondStudent.future_profession = "Programmer";
	firstStudent.Talk("a");
	secondStudent.Talk("a");
	return 0;
}
