#include <iostream>
#include <vector>
using namespace std;
void Displayvector(vector<int>& inVec){
	for (auto element : inVec){
		cout<<element<<" ";
	}
	cout<< endl;
}
int main(){
	vector<int> integers{4, 90};
	Displayvector(integers);
	integers.push_back(20); //Добавление в конец массива элемента
	Displayvector(integers);
	integers.pop_back(); //Удаление последнего элемента
	Displayvector(integers);
	
	return 0;
}
