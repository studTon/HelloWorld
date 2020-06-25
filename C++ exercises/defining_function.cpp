//Testing defining function
#include <iostream>
#include <iomanip>
#include "hello.h"
#include "exp.h"
using namespace std;
int main(){
	float num;
	int exp;
	hello();
	name();
	greet();
	cout << "Type a number:" << endl;
	cin >> num;
	cout << "The number squared is: " << square(num) << endl;
	return 0;
}
