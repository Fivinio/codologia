#include <iostream>
using namespace std;
class Fish{
public:
	Fish(){
		cout<<"Fish is created"<<endl;
	}
	~Fish(){
		cout<<"Fish is decreated"<<endl;
	}
	void Swim(){
		cout<<"Fish is swimming"<<endl;
	}
};

class Carp : public Fish{
public:
	Carp(){
		cout<<"Carp is created"<<endl;
	}
	~Carp(){
		cout<<"Carp is decreated"<<endl;
	}
	void Swim(){
		cout<<"Carp is swimming"<<endl;
	}
};

class Tuna : public Fish{
public:
	Tuna(){
		cout<<"Tuna is created"<<endl;
	}
	~Tuna(){
		cout<<"Tuna is decreated"<<endl;
	}
	void Swim(){
		cout<<"Tuna is swimming"<<endl;
	}
		
};
void MakeFishSwim (Fish& InputFish){
	InputFish.Swim();
}
int main(){
	Tuna fish1;
	Carp fish2;
	Fish otherfish;
	//fish1.Swim();
	//fish2.Swim();
	//otherfish.Swim();
	MakeFishSwim(fish1);
	MakeFishSwim(fish2);
	return 0;
}
