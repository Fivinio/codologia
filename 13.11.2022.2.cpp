#include <iostream>
using namespace std;
class Car{
protected:
public:
	void Light() {
		cout<<"Зажёг фары"<<endl;
	}
	void Start(){
		cout<<"1"<<endl;
	}
	
};
class BMW : public Car{
public:
	void Start(){
		cout<<"2"<<endl;
	}
	
};
class Mersedes : public Car{
public:
	void Start(){
		cout<<"3"<<endl;
	}
	

};
int main(){
	BMW myBMW;
	Mersedes myMersedes;
	myBMW.Light();
	myBMW.Car::Start();
	myBMW.Start();
	myMersedes.Start();
	return 0;
}
