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
	vector<int> a{45, 6, 7, 789, 12, 1};
	vector<int> b{1, 2, 3, 4, 5, 6, 7 ,8 ,9};
	Displayvector(a);
	a.insert(a.begin(), 25); //Добавление в начало массива
	Displayvector(a);
	a.insert(a.end(), 3, 100); //Добавление нескольких значений 
	Displayvector(a);
	a.insert(a.begin()+5, 2, 999);  //Добавление в середину
	Displayvector(a);
	a.insert(a.begin()+8, b.begin(), b.end());
	Displayvector(a);
}
