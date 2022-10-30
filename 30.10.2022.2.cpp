#include <iostream>
using namespace std;
class Human {
private:
	int age;
public:
	string name;
	Human(){
		age = 5;
		cout<<"конструктор создал имя человека"<<age<<endl;
	}
	Human(string myName){
		age = 5;
		name = myName;
		cout<<"Конструктор созал человека. его имя: "<<name<<endl;
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
	cout<<firstMan.GetAge()<<endl;
	return 0;
}
