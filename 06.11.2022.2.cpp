#include <iostream>
using namespace std;
class Human {
private:
	int age;
public:
	string name;
	Human(){
		age = 5;
		cout<<"конструктор создал возраст человека. Его возраст: "<<age<<endl;
	}
	Human(string myName){
		age = 5;
		name = myName;
		cout<<"Конструктор создал имя человека. Его имя: "<<name<<endl;
	}
	int GetAge(){
		return age;
	}
	void SetAge(int myAge){
		if (myAge>0){
			age=myAge;
		}
	}
};
int main(){
	Human firstMan;
	firstMan.name = "Artyom";
	//firstMan.SetAge(16);
	Human secondMan;
	cout<<firstMan.GetAge()<<endl;
	cout<<secondMan.GetAge()<<endl;
	return 0;
}
I don't understand anything
