#include <vector>
#include <iostream>
using namespace std;
int main(){
	vector<int> integers;
	cout<<integers.size()<<endl; //Размер динамического массива
	vector<int> initvector{203, 56, 7, 89};
	cout<<initvector.size()<<endl;
	for (int i=0; i<4; i++){
		cout<<initvector[i]<<endl;  //Вывод всех элементов
	}
	vector<int> tenElement(10);
	for (int i=0; i < tenElement.size(); i++){
		cout<<tenElement[i]<<endl;  //Десять нулей в массиве
	}
	vector<int> tenElements(10, 90); //Десять чисел 90
	for (int i : tenElements){
		cout<<i<<endl;
	}
	vector<int> copyvector(initvector); //Присваивание вектору
	vector<int> partialCopy(tenElements.cbegin(), tenElements.cbegin()+5);  //Неполная копия массива
	for (int i : partialCopy){
		cout<<i<<endl;
	}
	return 0;
	
}
