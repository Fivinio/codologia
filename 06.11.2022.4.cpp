#include <iostream>
using namespace std;
class Fish{
public:
	bool isFreshWaterfish;
	void Swim(){
		if (isFreshWaterfish){
			cout<<"Пресноводный"<<endl;
		}
		else{
			cout<<"Морской"<<endl;
		}
	}
};
class Carp : public Fish{
public:
	Carp(){
		isFreshWaterfish = true;
	}
};
class Tuna : public Fish{
public:
	Tuna(){
		isFreshWaterfish = false;
	}
};
	

int main(){
	Carp mydinner;
	Tuna mylunch;
	cout<<"Моя еда "<<endl;
	mydinner.Swim();
	mylunch.Swim();
	mydinner.isFreshWaterfish=false;
	return 0;
}
