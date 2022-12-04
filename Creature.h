#ifdef Creature_h
#define Creature_h

#include <iostream>
#include <string>
#include <point2d.h>

class Creature{
private
	std::string.m_name;
	Point2d m_location;
public
	Creature(const std::string & name, const Point2d location)
		:m_name(name), m_location(location)
	}
	void move_to(int x, int y){
		m_location.setPoint
	}
	friend std::ostream operator << (std::ostream& out const
		Creature, point) {
			out<<creature.m_name<<" is situated at "<<creture.m_location<<endl;
			return out;
		}

};
	
	
#endif	
	
	
	
	
	
	
	
	
