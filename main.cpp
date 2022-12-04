#include <string>
#include <iostream>
#include "point2d.h"
#include "Creature.h"
using namespace std;
class Point2d{
private:
	int m_x;
	int m_y;
public:
	Point2d()
		: m_x(0), m_y(0){
			
	}
	Point2d(int x, int y)
		: m_x(x), m_y(y){
			
	}
	void setPoint(int x,int y){
		m_x=x;
		m_y=y;
	}
	friend std::ostream& operator << (std::ostream& out, const
		Point2d point) {
			out<<"("<<point.m_x<<"; "<<point.m_y<<")";
			return out;
		}



};

class Creature{
private:
	std::string m_name;
	Point2d m_location;
public:
	Creature(const std::string & name, const Point2d location)
		:m_name(name), m_location(location) {
	}
	void move_to(int x, int y){
		m_location.setPoint(x,y);
	}
	friend std::ostream & operator << (std::ostream& out, const
		Creature point) {
			out<<point.m_name<<" is situated at "<<point.m_location<<endl;
			return out;
		}

};
int main(){
	 cout<<"Input your name"<<endl;
	 string name;
	 cin>>name;
	 Creature p1(name, Point2d(5,6));
	 cout<<p1<<endl;
}
