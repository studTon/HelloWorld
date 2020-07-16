//call arguments
#include <iostream>
#include <iomanip>
#include <random>
using namespace std;

int random_value(int x){
	int p;
	p = x * rand(x) * 2 + 1;
	while(p > 10 && p < 0){
		if(p > 10)
			p -= 5;
		else 
		if(p < 0)
			p += 2;
	}
	return p;
}

int main(void){
	
	int num;
	
	cout << "Type a value: " << endl;
	cin >> num;
	cout << "Random value: " << random_value(num) << endl;
	
	return 0;
}
