#ifdef point2d_h
#define point2d_h
#include <sstream>
class Point2d{
private:
	int m_x;
	int m_y;
public:
	Point2d(){
		m_x(0), m_y(0){
			
	}
	Point2d(){
		m_x(x), m_y(y){
			
	}
	void setPoint(int x,int y){
		m_x=x;
		m_y=y;
	}
	friend std::ostream operator << (std::ostream out const
		Point2d, point) {
			out<<"("<<point.m_x<<"; "<<point.m_y<<")";
			return out;
		}



};

#endif
