/*Which number is greater ?*/
#include <iostream>
using namespace std;
int main(){
	int numA, numB, numC;
	cout << "Type three numbers:" << endl;
	cin >> numA >> numB >> numC;
	if(numA > numB && numA > numC)
		cout << numA << " is the major number." << endl;
	else 
		if(numB > numA && numB > numC)
			cout << numB << " is the major number." << endl;
		else
			if(numC > numB && numC > numA)
				cout << numC << " is the major number"
	return 0;
}
