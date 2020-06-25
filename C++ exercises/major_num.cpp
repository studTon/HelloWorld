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
		cout << numC << " is the major number" << endl;
	else
	if(numA == numB && numA > numC)
		cout << numA << " and " << numB << " are majors" << endl;
	else
	if(numA == numC && numC > numB)
		cout << numA << " and " << numC << " are majors" << endl;
	else
	if(numC == numB && numB > numA)
		cout << numB << " and " << numC << " are majors" << endl;
	else
	if(numA == numB && numB == numC)
		cout << "All numbers are equal" << endl;
					
	return 0;
}
