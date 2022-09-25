#include <iostream>
#include <string>
#include <string.h>
using namespace std;
int main(){
	cout<<"Введите  строку"<<endl;
	string userInput;
	cin>>userInput;
	if (userInput.length()>20)
	{
		cout<<"Превышение размера"<<endl;
	}
	else
	{
		cout<<"Спасибо!"<<endl;
	}
	return 0;
}
