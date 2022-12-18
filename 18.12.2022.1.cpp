#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Doctor;
class Patient{
private:
	string m_name;
	vector <Doctor*> m_doctor;
	void add_doctor(Doctor* doc);
public:
	Patient(string name)
		: m_name(name){
		cout<<"Patient was created, his name is "<<name<<endl;
	}
	~Patient(){
		cout<<"Patient was destructed"<<m_name<<endl;
	}
	string getName() const{
		return m_name;
	}
	friend ostream& operator <<(ostream &out, const Patient& pat);
	friend class Doctor;
};
class Doctor{
private:
	string m_name;
	vector <Patient*> m_patient;
public:
	Doctor(string name)
		:m_name(name){
		cout<<"Doctor was created, his name is "<<m_name<<endl;
	}
	~Doctor(){
		cout<<"Doctor destructed, his name is "<<m_name<<endl;
	}
	void add_patient(Patient* pat){
		m_patient.push_back(pat);
		pat->add_doctor(this);
	}
	friend ostream& operator << (ostream& out, const Doctor& doc){
		int length = doc.m_patient.size();
		if (length==0){
			out<<doc.m_name<<"Doctor doesn't have patient now"<<endl;
			return out;
		}
		out<<doc.m_name<<" Is seeing patient";
		for (int count=0; count<length; ++count){
			out<<doc.m_patient[count]->getName()<<" ";
		}
		return out;
	}
	string getName() const{
		return m_name;
	}
};			
void Patient::add_doctor(Doctor* doc){
	m_doctor.push_back(doc);
}
ostream& operator << (ostream &out, const Patient& pat){
		int length = pat.m_doctor.size();
		if (length==0){
			out<<pat.m_name<<"patient doesn't have patient now"<<endl;
			return out;
		}
		out<<pat.m_name<<" Is seeing patient";
		for (int count=0; count<length; ++count){
			out<<pat.m_doctor[count]->getName()<<" ";
		}
		return out;
	
}
int main(){
	return 0;
}
		
