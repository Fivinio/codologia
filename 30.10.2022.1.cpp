#include <iostream>
using namespace std;
class Human {
public:
	string name;
	int age;
	string Birthday;
	string gender;
	void Talk(string textToTalk){
		cout<<name<<"speak"<<textToTalk<<endl;
	}
	
};
int main(){
	Human firstMan;
	firstMan.name = "Artyom";
	firstMan.age = 16;
	firstMan.Birthday = "19.01.2006";
	firstMan.gender = "male";
	cout<<firstMan.age<<endl;
	firstMan.age++;
	//cout<<firstMan.age<<endl;
	//firstMan.Talk(" How are you?");
	Human secondMan;
	secondMan.name = "Alex";
	secondMan.age = 15;
	secondMan.Birthday = "November 2006";
	secondMan.gender = "male";
	cout<<firstMan.name<<secondMan.name<<endl;
	return 0;
}
