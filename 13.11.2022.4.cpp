#include <iostream>
using namespace std;
class Animal{
public:
	Animal(){
		cout<<"Animal is created"<<endl;
	}
	int age;
};
class Bird : public virtual Animal{
	
};
class Reptile : public virtual Animal {
	
};
class Mammal : public virtual Animal {
	
};
class Platypus : public Mammal, public Reptile, public Bird{
public:
	Platypus(){
		cout<<"Platypus is created"<<endl;
	}
};
int main(){
	Platypus duck;
	duck.age = 16;
	cout<<duck.age<<endl;
	return 0;
}
