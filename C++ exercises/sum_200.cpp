//Sum of the numbers until reach 200
#include <iostream>
using namespace std;
int main(){
	int num;
	int total = 0;
	
	while (total < 200){
		cout << "Type any number: " << endl;
		cin >> num;
		total += num;
	}
	cout << "The total is: " << total << endl;
	return 0;
}
