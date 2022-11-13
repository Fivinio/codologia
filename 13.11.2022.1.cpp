#include <iostream>
using namespace std;
class Fish{
protected:
	bool isFreshWaterfish;
public:
	Fish(bool isFreshWater):isFreshWaterfish(isFreshWater){}
	void Swim(){
		if (isFreshWaterfish) cout<< "Пресновдный"<<endl;
		else cout<<"Морской"<<endl;
	}
};
class Carp : public Fish{
public:
	Carp() : Fish(true){}
	void Swim() {
		cout<<"Карп плавает медленно"<<endl;
	}
};
class Tuna : public Fish{
public:
	Tuna() : Fish(false){}
	void Swim() {
		cout<<"Тунец плавает быстро"<<endl;
	}
};
int main(){
	Carp mydinner;
	Tuna mylunch;
	//mylunch.Fish::Swim();
	// Выведет "Морской"
	cout<<"Моя еда"<<endl;
	mydinner.Swim();
	mylunch.Swim();
	return 0;
}
