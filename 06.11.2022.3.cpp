#include <iostream>
using namespace std;
class Circle {
private:
	double pi =3.14;
	double r=20;
public:
	Circle(int radius)
		:r(radius){
		//// :r(radius){}
		//r = radius;
		//cout<<"Circle is created"<<endl;
	}
	double GetSquare(){
		return pi*r*r;
	}
	double GetPerimeter(){
		return 2*pi*r;
	}
};
int main(){
	Circle firstCircle(30);
	cout<<firstCircle.GetSquare()<<endl;
}
