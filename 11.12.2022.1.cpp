#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Worker{
private:
	string m_name;
	int m_age;
public:
	int category;
	Worker(string name,int age=18)
		:m_name(name), m_age(age){
		cout<<"Worker was created!"<<endl;
		}
	~Worker(){
		cout<<"Worker was destructed!"<<endl;
	}
	string getName(){
		return m_name;
	}
	int getAge(){
		return m_age;
	}
};


class Departament{
private:
	vector <Worker> workers;
public:
	Departament(){
			cout<<"Department was created!"<<endl;
		}
	~Departament(){
		cout<<"Department was destructed!"<<endl;
	}
	void addWorker(Worker* worker){
		workers.push_back(*worker);
	}
	void showWorkers(){
		cout<<"====================="<<endl;
		for (Worker& worker : workers){
			cout<<worker.getName()<<" "<<endl;
		}
	}
};
int main(){
	Worker * worker1 = new Worker("Artyom",16);
	Worker * worker2 = new Worker("Lev");
	Worker * worker3 = new Worker("Boris");
	Worker * worker4 = new Worker("Lyoha",15);
	{
		Departament departament;
		departament.addWorker(worker1);
		departament.addWorker(worker2);
		departament.addWorker(worker3);
		departament.addWorker(worker4);
		departament.showWorkers();
	}
	//cout<<worker->getName()<<" Still exists"<<endl;
	delete worker1;
	return 0;
}
