#include <iostream>
using namespace std;
int main() {
	int numbers[10] = {23, 567, 10, 2, 124354,1,45,67,894657,78};
	for (int i=0;i<10;i++){
		for (int j=0;j<9;j++){
			if (numbers[j] > numbers[j+1]){
				int tmp = numbers[j];
				numbers[j] = numbers[j+1];
				numbers[j+1]=tmp;
			}
		}
	}
	for (int i=0;i<10;i++){
		cout << numbers[i] << "  ";
	}
	return 0;
}
