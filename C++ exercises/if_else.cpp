//if and else
#include <iostream>
using namespace std;
int main(){
	int num;
	int div;
	//Division of num by div
	cout << "Type any number: " << endl;
	cin >> num;
	cout << "Type any number for divide: " << endl;
	cin >> div;
	if(div != 0)
		cout << "Result: " << num/div << endl;
	else
		cout << "Cannot divide by 0" << endl;
	return 0;
}
