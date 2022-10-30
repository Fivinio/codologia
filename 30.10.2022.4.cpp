#include <iostream>
using namespace std;
class Car{
private:
	double Engine;
	double Mass;
public:
	Car(double myEngine, double myMass){
		Engine = myEngine;
		Mass = myMass;
		cout<<"Машина создана конструктором"<<endl;
	}
	double GetMaxSpeed(){
		return (Engine/Mass)*1000;
	}
};
int main(){
	Car firstCar(500, 2000);
	cout<<firstCar.GetMaxSpeed()<<endl;
	return 0;
}
		
















