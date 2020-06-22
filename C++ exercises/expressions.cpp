/*Numeric expressions*/
#include <iostream>
using namespace std;
int main(){
	int n;
	cout << "Type any integer number: " << endl;
	cin >> n;
	cout << "Number squared is greater than 50?" << (n * n > 50) << endl;
	return 0;
}
